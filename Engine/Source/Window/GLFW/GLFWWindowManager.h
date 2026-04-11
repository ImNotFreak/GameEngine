#pragma once
#include <memory>
#include "Window/IWindow.h"
#include "Window/IWindowManager.h"
#include <expected>
#include <unordered_map>
#include "Core/Utility.h"

namespace LifeExe
{

class GLFWWindowManager final : public IWindowManager, public NonCopyable
{
public:
    GLFWWindowManager();
    ~GLFWWindowManager() override;

    void update() override;
    bool areAllWindowsClosed() const override;
    std::expected<WindowId, WindowCreationError> createWindow(const WindowSettings& settings) override;
    std::shared_ptr<IWindow> getWindowById(WindowId id) const override;

private:
    bool m_initialized{false};
    std::unordered_map<WindowId, std::shared_ptr<IWindow>> m_windows;
    void cleanupClosedWindows();
    WindowId m_windowCounter{1};
};

}  // namespace LifeExe