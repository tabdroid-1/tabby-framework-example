#pragma once

#include "tabby.h"
#include "core/defines.h"

namespace App {

class Camera {
public:
    Camera();
    Camera(float size, float nearClip, float farClip, uint16_t width, uint16_t height);
    ~Camera() = default;

    void SetOrthographic(float size, float nearClip, float farClip);
    void SetViewportSize(uint32_t width, uint32_t height);

    float GetOrthographicSize() const { return m_OrthographicSize; }
    void SetOrthographicSize(float size)
    {
        m_OrthographicSize = size;
        RecalculateProjection();
    }
    float GetOrthographicNearClip() const { return m_OrthographicNear; }
    void SetOrthographicNearClip(float nearClip)
    {
        m_OrthographicNear = nearClip;
        RecalculateProjection();
    }
    float GetOrthographicFarClip() const { return m_OrthographicFar; }
    void SetOrthographicFarClip(float farClip)
    {
        m_OrthographicFar = farClip;
        RecalculateProjection();
    }

    const Matrix4& GetProjection() const { return m_Projection; }
    void SetProjection(const Matrix4& projection) { m_Projection = projection; }

    const Matrix4& GetTransform() const { return m_Transform; }
    void SetTransform(const Matrix4& transform) { m_Transform = transform; }

private:
    void RecalculateProjection();

private:
    float m_OrthographicSize = 10.0f;
    float m_OrthographicNear = -1.0f, m_OrthographicFar = 1.0f;

    float m_AspectRatio = 0.0f;
    uint32_t m_ViewportWidth, m_ViewportHeight;
    Matrix4 m_Projection = Matrix4(1.0f);
    Matrix4 m_Transform = Matrix4(1.0f);
};

}
