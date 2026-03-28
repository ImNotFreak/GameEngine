#pragma once
#include <memory>
#include "GLFWWindow.h"
#include <expected>
#include <unordered_map>


namespace LifeExe
{
    enum WindowCreationError
    {
        ManagerIsNotInitialized,
        CreationFailed,
};
class GLFWWindow;
class GLFWWindowManager final
{
public:
    GLFWWindowManager();
    ~GLFWWindowManager();
    
    void update();
    bool areAllWindowsClosed() const;
    std::expected<WindowId, WindowCreationError> createWindow(const WindowSettings& settings);
    std::shared_ptr<GLFWWindow> getWindowById(WindowId id) const;

private:
    bool m_initialized{false};
    std::unordered_map<WindowId, std::shared_ptr<GLFWWindow>> m_windows;
    void cleanupClosedWindows();
    WindowId m_windowCounter{1};
};

}