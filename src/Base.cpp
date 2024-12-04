#include "Base.h"

#include <bx/math.h>
#include <bx/timer.h>
#include <bgfx/bgfx.h>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/quaternion.hpp>
#include <glm/fwd.hpp>
#include <glm/glm.hpp>
#include <imgui.h>
#include <ImGuizmo.h>

float fps = 0;
using namespace Tabby;

namespace App {

Base::~Base()
{
}

void Base::Launch()
{
    TB_CORE_INFO("Launch");
}

void Base::Destroy()
{
    TB_CORE_INFO("Destroy");
}

void Base::OnUpdate()
{
    TB_CORE_INFO("{}", 1 / Time::GetDeltaTime());
    // TB_CORE_INFO("H down: {}", Input::GetKeyDown(KeyCode::H));
    // TB_CORE_INFO("H pressed: {}", Input::GetKey(KeyCode::H));
    // TB_CORE_INFO("H up: {}", Input::GetKeyUp(KeyCode::H));
    //
    // TB_CORE_INFO("Middle down: {}", Input::GetMouseButtonDown(MouseCode::MIDDLE));
    // TB_CORE_INFO("Middle pressed: {}", Input::GetMouseButton(MouseCode::MIDDLE));
    // TB_CORE_INFO("Middle up: {}", Input::GetMouseButtonUp(MouseCode::MIDDLE));
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

    ApplicationSpecification spec;
    spec.main_window_spec = window_spec;
    spec.working_directory = "assets";
    spec.root_system = new App::Base();

    return spec;
}
