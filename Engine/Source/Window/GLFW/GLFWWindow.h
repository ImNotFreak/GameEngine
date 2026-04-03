#pragma once
#include <string>
#include "Window/IWindow.h"
#include "Core/Utility.h"

class GLFWwindow;
namespace LifeExe
{

class GLFWWindow final : public IWindow, public NonCopyable
{
public:
    GLFWWindow(const WindowSettings& settings);
    ~GLFWWindow() override;

    void setTitle(const std::string& title) override;
    bool isValid() const override;
    bool shouldClose() const override;

private:
    GLFWwindow* m_window{nullptr};
};

}
