// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_UI_ViewManagement_2_H
#define WINRT_Windows_UI_ViewManagement_2_H
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.UI.1.h"
#include "winrt/impl/Windows.UI.Core.1.h"
#include "winrt/impl/Windows.UI.Popups.1.h"
#include "winrt/impl/Windows.UI.ViewManagement.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement
{
    struct __declspec(empty_bases) AccessibilitySettings : Windows::UI::ViewManagement::IAccessibilitySettings
    {
        AccessibilitySettings(std::nullptr_t) noexcept {}
        AccessibilitySettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IAccessibilitySettings(ptr, take_ownership_from_abi) {}
        AccessibilitySettings();
        AccessibilitySettings(AccessibilitySettings const&) noexcept = default;
        AccessibilitySettings(AccessibilitySettings&&) noexcept = default;
        AccessibilitySettings& operator=(AccessibilitySettings const&) & noexcept = default;
        AccessibilitySettings& operator=(AccessibilitySettings&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ActivationViewSwitcher : Windows::UI::ViewManagement::IActivationViewSwitcher
    {
        ActivationViewSwitcher(std::nullptr_t) noexcept {}
        ActivationViewSwitcher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IActivationViewSwitcher(ptr, take_ownership_from_abi) {}
        ActivationViewSwitcher(ActivationViewSwitcher const&) noexcept = default;
        ActivationViewSwitcher(ActivationViewSwitcher&&) noexcept = default;
        ActivationViewSwitcher& operator=(ActivationViewSwitcher const&) & noexcept = default;
        ActivationViewSwitcher& operator=(ActivationViewSwitcher&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ApplicationView : Windows::UI::ViewManagement::IApplicationView,
        impl::require<ApplicationView, Windows::UI::ViewManagement::IApplicationView2, Windows::UI::ViewManagement::IApplicationView3, Windows::UI::ViewManagement::IApplicationView4, Windows::UI::ViewManagement::IApplicationView7, Windows::UI::ViewManagement::IApplicationView9, Windows::UI::ViewManagement::IApplicationViewWithContext>
    {
        ApplicationView(std::nullptr_t) noexcept {}
        ApplicationView(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IApplicationView(ptr, take_ownership_from_abi) {}
        ApplicationView(ApplicationView const&) noexcept = default;
        ApplicationView(ApplicationView&&) noexcept = default;
        ApplicationView& operator=(ApplicationView const&) & noexcept = default;
        ApplicationView& operator=(ApplicationView&&) & noexcept = default;
        static auto TryUnsnapToFullscreen();
        static auto GetApplicationViewIdForWindow(Windows::UI::Core::ICoreWindow const& window);
        [[nodiscard]] static auto Value();
        static auto TryUnsnap();
        static auto GetForCurrentView();
        [[nodiscard]] static auto TerminateAppOnFinalViewClose();
        static auto TerminateAppOnFinalViewClose(bool value);
        [[nodiscard]] static auto PreferredLaunchWindowingMode();
        static auto PreferredLaunchWindowingMode(Windows::UI::ViewManagement::ApplicationViewWindowingMode const& value);
        [[nodiscard]] static auto PreferredLaunchViewSize();
        static auto PreferredLaunchViewSize(Windows::Foundation::Size const& value);
        static auto ClearAllPersistedState();
        static auto ClearPersistedState(param::hstring const& key);
    };
    struct __declspec(empty_bases) ApplicationViewConsolidatedEventArgs : Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs,
        impl::require<ApplicationViewConsolidatedEventArgs, Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs2>
    {
        ApplicationViewConsolidatedEventArgs(std::nullptr_t) noexcept {}
        ApplicationViewConsolidatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IApplicationViewConsolidatedEventArgs(ptr, take_ownership_from_abi) {}
        ApplicationViewConsolidatedEventArgs(ApplicationViewConsolidatedEventArgs const&) noexcept = default;
        ApplicationViewConsolidatedEventArgs(ApplicationViewConsolidatedEventArgs&&) noexcept = default;
        ApplicationViewConsolidatedEventArgs& operator=(ApplicationViewConsolidatedEventArgs const&) & noexcept = default;
        ApplicationViewConsolidatedEventArgs& operator=(ApplicationViewConsolidatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ApplicationViewScaling : Windows::UI::ViewManagement::IApplicationViewScaling
    {
        ApplicationViewScaling(std::nullptr_t) noexcept {}
        ApplicationViewScaling(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IApplicationViewScaling(ptr, take_ownership_from_abi) {}
        ApplicationViewScaling(ApplicationViewScaling const&) noexcept = default;
        ApplicationViewScaling(ApplicationViewScaling&&) noexcept = default;
        ApplicationViewScaling& operator=(ApplicationViewScaling const&) & noexcept = default;
        ApplicationViewScaling& operator=(ApplicationViewScaling&&) & noexcept = default;
        [[nodiscard]] static auto DisableLayoutScaling();
        static auto TrySetDisableLayoutScaling(bool disableLayoutScaling);
    };
    struct ApplicationViewSwitcher
    {
        ApplicationViewSwitcher() = delete;
        static auto DisableShowingMainViewOnActivation();
        static auto TryShowAsStandaloneAsync(int32_t viewId);
        static auto TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference);
        static auto TryShowAsStandaloneAsync(int32_t viewId, Windows::UI::ViewManagement::ViewSizePreference const& sizePreference, int32_t anchorViewId, Windows::UI::ViewManagement::ViewSizePreference const& anchorSizePreference);
        static auto SwitchAsync(int32_t viewId);
        static auto SwitchAsync(int32_t toViewId, int32_t fromViewId);
        static auto SwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options);
        static auto PrepareForCustomAnimatedSwitchAsync(int32_t toViewId, int32_t fromViewId, Windows::UI::ViewManagement::ApplicationViewSwitchingOptions const& options);
        static auto DisableSystemViewActivationPolicy();
        static auto TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode);
        static auto TryShowAsViewModeAsync(int32_t viewId, Windows::UI::ViewManagement::ApplicationViewMode const& viewMode, Windows::UI::ViewManagement::ViewModePreferences const& viewModePreferences);
    };
    struct __declspec(empty_bases) ApplicationViewTitleBar : Windows::UI::ViewManagement::IApplicationViewTitleBar
    {
        ApplicationViewTitleBar(std::nullptr_t) noexcept {}
        ApplicationViewTitleBar(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IApplicationViewTitleBar(ptr, take_ownership_from_abi) {}
        ApplicationViewTitleBar(ApplicationViewTitleBar const&) noexcept = default;
        ApplicationViewTitleBar(ApplicationViewTitleBar&&) noexcept = default;
        ApplicationViewTitleBar& operator=(ApplicationViewTitleBar const&) & noexcept = default;
        ApplicationViewTitleBar& operator=(ApplicationViewTitleBar&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ApplicationViewTransferContext : Windows::UI::ViewManagement::IApplicationViewTransferContext
    {
        ApplicationViewTransferContext(std::nullptr_t) noexcept {}
        ApplicationViewTransferContext(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IApplicationViewTransferContext(ptr, take_ownership_from_abi) {}
        ApplicationViewTransferContext();
        ApplicationViewTransferContext(ApplicationViewTransferContext const&) noexcept = default;
        ApplicationViewTransferContext(ApplicationViewTransferContext&&) noexcept = default;
        ApplicationViewTransferContext& operator=(ApplicationViewTransferContext const&) & noexcept = default;
        ApplicationViewTransferContext& operator=(ApplicationViewTransferContext&&) & noexcept = default;
        [[nodiscard]] static auto DataPackageFormatId();
    };
    struct __declspec(empty_bases) InputPane : Windows::UI::ViewManagement::IInputPane,
        impl::require<InputPane, Windows::UI::ViewManagement::IInputPane2, Windows::UI::ViewManagement::IInputPaneControl>
    {
        InputPane(std::nullptr_t) noexcept {}
        InputPane(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IInputPane(ptr, take_ownership_from_abi) {}
        InputPane(InputPane const&) noexcept = default;
        InputPane(InputPane&&) noexcept = default;
        InputPane& operator=(InputPane const&) & noexcept = default;
        InputPane& operator=(InputPane&&) & noexcept = default;
        static auto GetForCurrentView();
        static auto GetForUIContext(Windows::UI::UIContext const& context);
    };
    struct __declspec(empty_bases) InputPaneVisibilityEventArgs : Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs
    {
        InputPaneVisibilityEventArgs(std::nullptr_t) noexcept {}
        InputPaneVisibilityEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IInputPaneVisibilityEventArgs(ptr, take_ownership_from_abi) {}
        InputPaneVisibilityEventArgs(InputPaneVisibilityEventArgs const&) noexcept = default;
        InputPaneVisibilityEventArgs(InputPaneVisibilityEventArgs&&) noexcept = default;
        InputPaneVisibilityEventArgs& operator=(InputPaneVisibilityEventArgs const&) & noexcept = default;
        InputPaneVisibilityEventArgs& operator=(InputPaneVisibilityEventArgs&&) & noexcept = default;
    };
    struct ProjectionManager
    {
        ProjectionManager() = delete;
        static auto StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId);
        static auto SwapDisplaysForViewsAsync(int32_t projectionViewId, int32_t anchorViewId);
        static auto StopProjectingAsync(int32_t projectionViewId, int32_t anchorViewId);
        [[nodiscard]] static auto ProjectionDisplayAvailable();
        static auto ProjectionDisplayAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using ProjectionDisplayAvailableChanged_revoker = impl::factory_event_revoker<Windows::UI::ViewManagement::IProjectionManagerStatics, &impl::abi_t<Windows::UI::ViewManagement::IProjectionManagerStatics>::remove_ProjectionDisplayAvailableChanged>;
        [[nodiscard]] static ProjectionDisplayAvailableChanged_revoker ProjectionDisplayAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto ProjectionDisplayAvailableChanged(winrt::event_token const& token);
        static auto StartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Devices::Enumeration::DeviceInformation const& displayDeviceInfo);
        static auto RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection);
        static auto RequestStartProjectingAsync(int32_t projectionViewId, int32_t anchorViewId, Windows::Foundation::Rect const& selection, Windows::UI::Popups::Placement const& prefferedPlacement);
        static auto GetDeviceSelector();
    };
    struct __declspec(empty_bases) UISettings : Windows::UI::ViewManagement::IUISettings,
        impl::require<UISettings, Windows::UI::ViewManagement::IUISettings2, Windows::UI::ViewManagement::IUISettings3, Windows::UI::ViewManagement::IUISettings4, Windows::UI::ViewManagement::IUISettings5>
    {
        UISettings(std::nullptr_t) noexcept {}
        UISettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IUISettings(ptr, take_ownership_from_abi) {}
        UISettings();
        UISettings(UISettings const&) noexcept = default;
        UISettings(UISettings&&) noexcept = default;
        UISettings& operator=(UISettings const&) & noexcept = default;
        UISettings& operator=(UISettings&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UISettingsAutoHideScrollBarsChangedEventArgs : Windows::UI::ViewManagement::IUISettingsAutoHideScrollBarsChangedEventArgs
    {
        UISettingsAutoHideScrollBarsChangedEventArgs(std::nullptr_t) noexcept {}
        UISettingsAutoHideScrollBarsChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IUISettingsAutoHideScrollBarsChangedEventArgs(ptr, take_ownership_from_abi) {}
        UISettingsAutoHideScrollBarsChangedEventArgs(UISettingsAutoHideScrollBarsChangedEventArgs const&) noexcept = default;
        UISettingsAutoHideScrollBarsChangedEventArgs(UISettingsAutoHideScrollBarsChangedEventArgs&&) noexcept = default;
        UISettingsAutoHideScrollBarsChangedEventArgs& operator=(UISettingsAutoHideScrollBarsChangedEventArgs const&) & noexcept = default;
        UISettingsAutoHideScrollBarsChangedEventArgs& operator=(UISettingsAutoHideScrollBarsChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UIViewSettings : Windows::UI::ViewManagement::IUIViewSettings
    {
        UIViewSettings(std::nullptr_t) noexcept {}
        UIViewSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IUIViewSettings(ptr, take_ownership_from_abi) {}
        UIViewSettings(UIViewSettings const&) noexcept = default;
        UIViewSettings(UIViewSettings&&) noexcept = default;
        UIViewSettings& operator=(UIViewSettings const&) & noexcept = default;
        UIViewSettings& operator=(UIViewSettings&&) & noexcept = default;
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) ViewModePreferences : Windows::UI::ViewManagement::IViewModePreferences
    {
        ViewModePreferences(std::nullptr_t) noexcept {}
        ViewModePreferences(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::ViewManagement::IViewModePreferences(ptr, take_ownership_from_abi) {}
        ViewModePreferences(ViewModePreferences const&) noexcept = default;
        ViewModePreferences(ViewModePreferences&&) noexcept = default;
        ViewModePreferences& operator=(ViewModePreferences const&) & noexcept = default;
        ViewModePreferences& operator=(ViewModePreferences&&) & noexcept = default;
        static auto CreateDefault(Windows::UI::ViewManagement::ApplicationViewMode const& mode);
    };
}
#endif
