#include "camera.h"

#include <tabby.h>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/glm.hpp>

namespace App {

Camera::Camera()
{
    TB_PROFILE_SCOPE_NAME("Tabby::Camera::Constructor");

    SetOrthographic(10, 0, 100);
    SetViewportSize(1920, 1080);
}

Camera::Camera(float size, float nearClip, float farClip, uint16_t width, uint16_t height)
{
    TB_PROFILE_SCOPE_NAME("Tabby::Camera::Constructor");

    SetOrthographic(size, nearClip, farClip);
    SetViewportSize(width, height);
}

void Camera::SetOrthographic(float size, float nearClip, float farClip)
{
    TB_PROFILE_SCOPE_NAME("Tabby::Camera::SetOrthographic");

    m_OrthographicSize = size;
    m_OrthographicNear = nearClip;
    m_OrthographicFar = farClip;
    RecalculateProjection();
}

void Camera::SetViewportSize(uint32_t width, uint32_t height)
{
    TB_PROFILE_SCOPE_NAME("Tabby::Camera::SetViewportSize");

    TB_CORE_ASSERT(width > 0 && height > 0);

    if (m_ViewportWidth != width || m_ViewportHeight != height) {

        m_ViewportWidth = width;
        m_ViewportHeight = height;
        m_AspectRatio = (float)width / (float)height;
        RecalculateProjection();
    }
}

void Camera::RecalculateProjection()
{
    TB_PROFILE_SCOPE_NAME("Tabby::Camera::RecalculateProjection");

    float orthoLeft = -m_OrthographicSize * m_AspectRatio * 0.5f;
    float orthoRight = m_OrthographicSize * m_AspectRatio * 0.5f;
    float orthoBottom = -m_OrthographicSize * 0.5f;
    float orthoTop = m_OrthographicSize * 0.5f;

    m_Projection = glm::ortho(orthoLeft, orthoRight, orthoBottom, orthoTop, m_OrthographicNear, m_OrthographicFar);

    if (bgfx::getRendererType() == bgfx::RendererType::Vulkan)
        m_Projection[1][1] *= -1;
}

}
