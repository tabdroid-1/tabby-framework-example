#pragma once

#include <glm/glm.hpp>
#include <tabby.h>
#include "image.h"

namespace App {

class Renderer {
public:
    Renderer() { }

    static void Init();
    static void Shutdown();

    static void Begin(uint8_t view_id);
    static void DrawQuad(const glm::mat4& transform, Tabby::Shared<Image> texture, const Vector4& color, float tiling_factor, int horizontal_frames, int current_horizontal_frame, int vertical_frames, int current_vertical_frame);
    static void End();

private:
};

}
