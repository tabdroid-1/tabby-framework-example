#pragma once

#include "../core/defines.h"

namespace App {

enum class ImageUsage : uint8_t {
    TEXTURE,
    RENDER_TARGET,
    DEPTH_BUFFER
};

enum class ImageType : uint8_t {
    TYPE_1D,
    TYPE_2D,
    TYPE_3D,
};

struct ImageSpecification {
    UIntVector2 extent = { 0, 0 };
    std::vector<uint8_t> pixels;
    std::filesystem::path path;
    bgfx::TextureFormat::Enum format = bgfx::TextureFormat::RGBA32U;
    /*ImageFormat format = ImageFormat::RGBA32_SRGB;*/
    ImageUsage usage = ImageUsage::TEXTURE;
    ImageType type = ImageType::TYPE_2D;
    uint8_t array_layers = 1;
    bool has_mips = false;

    static ImageSpecification Default()
    {
        ImageSpecification spec;
        spec.extent = { 0, 0 };
        spec.format = bgfx::TextureFormat::RGBA8;
        spec.usage = ImageUsage::TEXTURE;
        spec.type = ImageType::TYPE_2D;
        spec.has_mips = false;
        spec.array_layers = 1;

        return spec;
    };
};

class Image /*: public AssetBase */ {
public:
    static Tabby::Shared<Image> Create(const ImageSpecification& spec, const AssetHandle& id = AssetHandle());
    static Tabby::Shared<Image> Create(const std::string& path, const AssetHandle& id = AssetHandle());

    Image(const ImageSpecification& spec, const AssetHandle& id = AssetHandle());
    ~Image();

    void Update(const ImageSpecification& spec);
    void Destroy();

    const ImageSpecification& GetSpecification() const { return m_Specification; }

    bgfx::TextureHandle Raw() { return m_TextureHandle; }

private:
    ImageSpecification m_Specification;
    bgfx::TextureHandle m_TextureHandle;
};

}
