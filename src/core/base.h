#pragma once

#include "app/camera.h"
#include "renderer/image.h"

#include <tabby.h>

namespace App {

class Base : public Tabby::Subsystem {
public:
    ~Base() { }

    void Launch() override;
    void Destroy() override;
    void OnUpdate() override;
    void OnEvent(Tabby::Event& e) override;

private:
    Tabby::Shared<Image> m_QuadImage;
    Camera m_Camera;
};

} // namespace App
