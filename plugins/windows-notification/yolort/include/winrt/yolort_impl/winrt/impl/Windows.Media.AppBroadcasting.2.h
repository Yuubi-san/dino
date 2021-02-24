// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Media_AppBroadcasting_2_H
#define WINRT_Windows_Media_AppBroadcasting_2_H
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Media.AppBroadcasting.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::AppBroadcasting
{
    struct __declspec(empty_bases) AppBroadcastingMonitor : Windows::Media::AppBroadcasting::IAppBroadcastingMonitor
    {
        AppBroadcastingMonitor(std::nullptr_t) noexcept {}
        AppBroadcastingMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::AppBroadcasting::IAppBroadcastingMonitor(ptr, take_ownership_from_abi) {}
        AppBroadcastingMonitor();
        AppBroadcastingMonitor(AppBroadcastingMonitor const&) noexcept = default;
        AppBroadcastingMonitor(AppBroadcastingMonitor&&) noexcept = default;
        AppBroadcastingMonitor& operator=(AppBroadcastingMonitor const&) & noexcept = default;
        AppBroadcastingMonitor& operator=(AppBroadcastingMonitor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppBroadcastingStatus : Windows::Media::AppBroadcasting::IAppBroadcastingStatus
    {
        AppBroadcastingStatus(std::nullptr_t) noexcept {}
        AppBroadcastingStatus(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::AppBroadcasting::IAppBroadcastingStatus(ptr, take_ownership_from_abi) {}
        AppBroadcastingStatus(AppBroadcastingStatus const&) noexcept = default;
        AppBroadcastingStatus(AppBroadcastingStatus&&) noexcept = default;
        AppBroadcastingStatus& operator=(AppBroadcastingStatus const&) & noexcept = default;
        AppBroadcastingStatus& operator=(AppBroadcastingStatus&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppBroadcastingStatusDetails : Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails
    {
        AppBroadcastingStatusDetails(std::nullptr_t) noexcept {}
        AppBroadcastingStatusDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails(ptr, take_ownership_from_abi) {}
        AppBroadcastingStatusDetails(AppBroadcastingStatusDetails const&) noexcept = default;
        AppBroadcastingStatusDetails(AppBroadcastingStatusDetails&&) noexcept = default;
        AppBroadcastingStatusDetails& operator=(AppBroadcastingStatusDetails const&) & noexcept = default;
        AppBroadcastingStatusDetails& operator=(AppBroadcastingStatusDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppBroadcastingUI : Windows::Media::AppBroadcasting::IAppBroadcastingUI
    {
        AppBroadcastingUI(std::nullptr_t) noexcept {}
        AppBroadcastingUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::AppBroadcasting::IAppBroadcastingUI(ptr, take_ownership_from_abi) {}
        AppBroadcastingUI(AppBroadcastingUI const&) noexcept = default;
        AppBroadcastingUI(AppBroadcastingUI&&) noexcept = default;
        AppBroadcastingUI& operator=(AppBroadcastingUI const&) & noexcept = default;
        AppBroadcastingUI& operator=(AppBroadcastingUI&&) & noexcept = default;
        static auto GetDefault();
        static auto GetForUser(Windows::System::User const& user);
    };
}
#endif