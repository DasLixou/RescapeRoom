#pragma once
#include "../Scene.hpp"

class LogoScene : public Scene {
public:
    LogoScene();
    LogoScene(const LogoScene& other) = delete;
    LogoScene& operator=(const LogoScene& other) = delete;
    ~LogoScene() noexcept;

    void Update(float deltaTime) override;
    void Render() override;
};