#include "image.h"

#include <stb_image.h>
#include <SDL3/SDL_iostream.h>

namespace App {

using namespace Tabby;

Shared<Image> Image::Create(const ImageSpecification& spec, const AssetHandle& id)
{
    return CreateShared<Image>(spec, id);
}

Shared<Image> Image::Create(const std::string& path, const AssetHandle& id)
{
    std::vector<RGBA32> image_data;
    int image_width, image_height, channels;

    {
        TB_PROFILE_SCOPE_NAME("Tabby::AssetManager::ImportImageSource::Read");

        stbi_set_flip_vertically_on_load(true);
        std::vector<unsigned char> image_source;

        SDL_IOStream* rw = SDL_IOFromFile(path.c_str(), "rb");
        if (rw != nullptr) {
            size_t size = SDL_GetIOSize(rw);

            if (size > 0) {
                image_source.resize(size);
                size_t bytesRead = SDL_ReadIO(rw, image_source.data(), size);
                if (bytesRead != size) {
                    TB_CORE_ERROR("Error reading file {0}", path);
                    image_source.clear();
                    return nullptr;
                }
            }

            SDL_CloseIO(rw);
        } else {
            TB_CORE_ERROR("Could not open file {0}", path);
            return nullptr;
        }

        RGBA32* raw_image_data = (RGBA32*)stbi_load_from_memory(image_source.data(), static_cast<int>(image_source.size()), &image_width, &image_height, &channels, 4);

        image_data.assign(raw_image_data, raw_image_data + (image_width * image_height));
        channels = 4;

        delete raw_image_data;

        if (image_data.empty()) {
            TB_CORE_ERROR("TextureImporter::ImportTextureSource - Could not load texture from filepath: {}", path);

            return nullptr;
        }
    }

    std::vector<byte> raw(image_data.size() * sizeof(RGBA32));
    memcpy(raw.data(), image_data.data(), image_data.size() * sizeof(RGBA32));
    image_data.clear();

    ImageSpecification texture_spec = {};
    texture_spec.pixels = std::move(raw);
    texture_spec.format = bgfx::TextureFormat::Enum::RGBA8;
    texture_spec.type = ImageType::TYPE_2D;
    texture_spec.usage = ImageUsage::TEXTURE;
    texture_spec.extent = { (uint32_t)image_width, (uint32_t)image_height };
    texture_spec.array_layers = 1;
    texture_spec.has_mips = false;
    texture_spec.path = path;

    return CreateShared<Image>(texture_spec, id);
}

Image::Image(const ImageSpecification& spec, const AssetHandle& id)
    : m_TextureHandle(BGFX_INVALID_HANDLE)
{
    // Handle = id;
    // Type = AssetType::TABBY_IMAGE;

    Update(spec);
};

Image::~Image()
{
}

void Image::Update(const ImageSpecification& spec)
{

    if (bgfx::isValid(m_TextureHandle)) {
        bgfx::destroy(m_TextureHandle);
        m_TextureHandle = BGFX_INVALID_HANDLE;
    }

    m_Specification = spec;

    uint64_t flags = 0
        | BGFX_SAMPLER_MIN_ANISOTROPIC
        | BGFX_SAMPLER_MAG_ANISOTROPIC
        | BGFX_SAMPLER_MIP_POINT
        | BGFX_SAMPLER_U_CLAMP
        | BGFX_SAMPLER_V_CLAMP;

    if (spec.usage == ImageUsage::RENDER_TARGET || spec.usage == ImageUsage::DEPTH_BUFFER) {
        flags |= BGFX_TEXTURE_RT;
    }

    m_TextureHandle = bgfx::createTexture2D(
        spec.extent.x,
        spec.extent.y,
        // spec.has_mips,
        false, // TODO: add mip support
        spec.array_layers,
        spec.format,
        flags);

    TB_CORE_ASSERT(bgfx::isValid(m_TextureHandle));

    if (!spec.pixels.empty()) {
        bgfx::updateTexture2D(
            m_TextureHandle,
            0, 0,
            0, 0, spec.extent.x, spec.extent.y,
            bgfx::copy(spec.pixels.data(), spec.pixels.size() * sizeof(uint8_t)));
    }
}

void Image::Destroy()
{
    if (bgfx::isValid(m_TextureHandle)) {
        bgfx::destroy(m_TextureHandle);
        m_TextureHandle = BGFX_INVALID_HANDLE;
    }
}

}
