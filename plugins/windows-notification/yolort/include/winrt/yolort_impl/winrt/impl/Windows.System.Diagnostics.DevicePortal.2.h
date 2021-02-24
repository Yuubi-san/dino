// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_System_Diagnostics_DevicePortal_2_H
#define WINRT_Windows_System_Diagnostics_DevicePortal_2_H
#include "winrt/impl/Windows.ApplicationModel.AppService.1.h"
#include "winrt/impl/Windows.System.Diagnostics.DevicePortal.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::DevicePortal
{
    struct __declspec(empty_bases) DevicePortalConnection : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection,
        impl::require<DevicePortalConnection, Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnection>
    {
        DevicePortalConnection(std::nullptr_t) noexcept {}
        DevicePortalConnection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnection(ptr, take_ownership_from_abi) {}
        DevicePortalConnection(DevicePortalConnection const&) noexcept = default;
        DevicePortalConnection(DevicePortalConnection&&) noexcept = default;
        DevicePortalConnection& operator=(DevicePortalConnection const&) & noexcept = default;
        DevicePortalConnection& operator=(DevicePortalConnection&&) & noexcept = default;
        static auto GetForAppServiceConnection(Windows::ApplicationModel::AppService::AppServiceConnection const& appServiceConnection);
    };
    struct __declspec(empty_bases) DevicePortalConnectionClosedEventArgs : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs
    {
        DevicePortalConnectionClosedEventArgs(std::nullptr_t) noexcept {}
        DevicePortalConnectionClosedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionClosedEventArgs(ptr, take_ownership_from_abi) {}
        DevicePortalConnectionClosedEventArgs(DevicePortalConnectionClosedEventArgs const&) noexcept = default;
        DevicePortalConnectionClosedEventArgs(DevicePortalConnectionClosedEventArgs&&) noexcept = default;
        DevicePortalConnectionClosedEventArgs& operator=(DevicePortalConnectionClosedEventArgs const&) & noexcept = default;
        DevicePortalConnectionClosedEventArgs& operator=(DevicePortalConnectionClosedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DevicePortalConnectionRequestReceivedEventArgs : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs,
        impl::require<DevicePortalConnectionRequestReceivedEventArgs, Windows::System::Diagnostics::DevicePortal::IDevicePortalWebSocketConnectionRequestReceivedEventArgs>
    {
        DevicePortalConnectionRequestReceivedEventArgs(std::nullptr_t) noexcept {}
        DevicePortalConnectionRequestReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Diagnostics::DevicePortal::IDevicePortalConnectionRequestReceivedEventArgs(ptr, take_ownership_from_abi) {}
        DevicePortalConnectionRequestReceivedEventArgs(DevicePortalConnectionRequestReceivedEventArgs const&) noexcept = default;
        DevicePortalConnectionRequestReceivedEventArgs(DevicePortalConnectionRequestReceivedEventArgs&&) noexcept = default;
        DevicePortalConnectionRequestReceivedEventArgs& operator=(DevicePortalConnectionRequestReceivedEventArgs const&) & noexcept = default;
        DevicePortalConnectionRequestReceivedEventArgs& operator=(DevicePortalConnectionRequestReceivedEventArgs&&) & noexcept = default;
    };
}
#endif