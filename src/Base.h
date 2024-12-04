#pragma once

#include <tabby.h>

namespace App {

class Base : public Tabby::Subsystem {
public:
    ~Base();

    void Launch() override;
    void Destroy() override;
    void OnUpdate() override;
    void OnEvent(Tabby::Event& e) override;

private:
};

} // namespace App
