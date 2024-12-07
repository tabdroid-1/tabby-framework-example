#include "base.h"

#include <bx/math.h>
#include <bx/timer.h>
#include <bgfx/bgfx.h>
#include <bgfx/embedded_shader.h>
#define GLM_ENABLE_EXPERIMENTAL
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/fwd.hpp>
#include <glm/glm.hpp>
#include "tabby/imgui/imgui.h"

#include <renderer/renderer.h>
#include <renderer/image.h>

float fps = 0;
using namespace Tabby;

namespace App {

Shared<Window> main_window;

Matrix4 quad_transform = Matrix4(1.0f);

void Base::Launch()
{
    TB_CORE_INFO("Launch");

    main_window = Application::Get()->GetWindowManager()->GetWindow("main");
    m_QuadImage = Image::Create("textures/final_image.png");
    m_Camera = Camera(1.0f, 0, 2, main_window->GetSpecification().width, main_window->GetSpecification().height);
    m_Camera.SetTransform(Matrix4(1.0f));
    quad_transform = glm::translate(quad_transform, { 0.0f, 0.0f, -1.0f });

    for (const auto& entry : std::filesystem::directory_iterator("/"))
        TB_INFO(entry.path());

    bgfx::setViewFrameBuffer(0, BGFX_INVALID_HANDLE);
    bgfx::setViewRect(0, 0, 0, main_window->GetSpecification().width, main_window->GetSpecification().height);
    bgfx::setViewClear(0, BGFX_CLEAR_COLOR | BGFX_CLEAR_DEPTH, 0x000000ff, 1.0f, 0);

    Renderer::Init();
}

void Base::Destroy()
{
    TB_CORE_INFO("Destroy");
}

void Base::OnUpdate()
{
    m_Camera.SetViewportSize(main_window->GetSpecification().width, main_window->GetSpecification().height);
    bgfx::setViewRect(0, 0, 0, main_window->GetSpecification().width, main_window->GetSpecification().height);
    bgfx::setViewClear(0, BGFX_CLEAR_COLOR | BGFX_CLEAR_DEPTH, 0x000000ff, 1.0f, 0);
    bgfx::setViewTransform(0, glm::value_ptr(m_Camera.GetTransform()), glm::value_ptr(m_Camera.GetProjection()));

    Renderer::Begin(0);
    Renderer::DrawQuad(quad_transform, m_QuadImage, { 1.0f, 1.0f, 1.0f, 1.0f }, 1, 1, 0, 1, 0);
    Renderer::End();

    bgfx::dbgTextClear();
    bgfx::dbgTextPrintf(10, 1, 0x0f, "\x1b[;0m    \x1b[;1m    \x1b[; 2m    \x1b[; 3m    \x1b[; 4m    \x1b[; 5m    \x1b[; 6m    \x1b[; 7m    \x1b[0m");
    bgfx::dbgTextPrintf(10, 2, 0x0f, "\x1b[;8m    \x1b[;9m    \x1b[;10m    \x1b[;11m    \x1b[;12m    \x1b[;13m    \x1b[;14m    \x1b[;15m    \x1b[0m");
    float fps = 1 / Time::GetDeltaTime();
    const bgfx::Stats* stats = bgfx::getStats();

    bgfx::dbgTextPrintf(0, 0, 0x0f, "FPS: %0.3f", fps);

    // bool asd = true;
    // ImGui::ShowDemoWindow(&asd);
}

void Base::OnEvent(Tabby::Event& e)
{
    TB_CORE_INFO("OnEvent");
    Tabby::EventDispatcher dispatcher(e);
}

}

ApplicationSpecification Tabby::ConstructRootSystem()
{
    WindowSpecification window_spec = WindowSpecification::Default();
    window_spec.window_title = "A winfow";
    window_spec.flags = 0
        | TABBY_WINDOW_RESIZEABLE;

    ApplicationSpecification spec;
    spec.main_window_spec = window_spec;
    spec.working_directory = "assets";
    spec.root_system = new App::Base();
    spec.flags = 0
        | TABBY_LAUNCH_OPTION_OPENGL
        | TABBY_LAUNCH_OPTION_WAYLAND
        | TABBY_LAUNCH_OPTION_DEBUG_TEXT;

    return spec;
}
