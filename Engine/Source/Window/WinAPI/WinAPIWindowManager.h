#pragma once
#include <memory>
#include "Window/IWindow.h"
#include "Window/IWindowManager.h"
#include <expected>
#include <unordered_map>

namespace LifeExe
{

class WinAPIWindowManager final : public IWindowManager
{
public:
    WinAPIWindowManager();
    ~WinAPIWindowManager() override;
    void update() override;
    bool areAllWindowsClosed() const override;
    std::expected<WindowId, WindowCreationError> createWindow(const WindowSettings& settings) override;
    std::shared_ptr<IWindow> getWindowById(WindowId id) const override;
};

}  // namespace LifeExe