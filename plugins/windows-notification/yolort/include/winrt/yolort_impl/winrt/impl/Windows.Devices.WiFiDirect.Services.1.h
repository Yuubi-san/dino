// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Devices_WiFiDirect_Services_1_H
#define WINRT_Windows_Devices_WiFiDirect_Services_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.Services.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect::Services
{
    struct __declspec(empty_bases) IWiFiDirectService :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectService>
    {
        IWiFiDirectService(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectService(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectService(IWiFiDirectService const&) noexcept = default;
        IWiFiDirectService(IWiFiDirectService&&) noexcept = default;
        IWiFiDirectService& operator=(IWiFiDirectService const&) & noexcept = default;
        IWiFiDirectService& operator=(IWiFiDirectService&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceAdvertiser :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceAdvertiser>
    {
        IWiFiDirectServiceAdvertiser(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceAdvertiser(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceAdvertiser(IWiFiDirectServiceAdvertiser const&) noexcept = default;
        IWiFiDirectServiceAdvertiser(IWiFiDirectServiceAdvertiser&&) noexcept = default;
        IWiFiDirectServiceAdvertiser& operator=(IWiFiDirectServiceAdvertiser const&) & noexcept = default;
        IWiFiDirectServiceAdvertiser& operator=(IWiFiDirectServiceAdvertiser&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceAdvertiserFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceAdvertiserFactory>
    {
        IWiFiDirectServiceAdvertiserFactory(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceAdvertiserFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceAdvertiserFactory(IWiFiDirectServiceAdvertiserFactory const&) noexcept = default;
        IWiFiDirectServiceAdvertiserFactory(IWiFiDirectServiceAdvertiserFactory&&) noexcept = default;
        IWiFiDirectServiceAdvertiserFactory& operator=(IWiFiDirectServiceAdvertiserFactory const&) & noexcept = default;
        IWiFiDirectServiceAdvertiserFactory& operator=(IWiFiDirectServiceAdvertiserFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs>
    {
        IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs const&) noexcept = default;
        IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs(IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs&&) noexcept = default;
        IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs& operator=(IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs const&) & noexcept = default;
        IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs& operator=(IWiFiDirectServiceAutoAcceptSessionConnectedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceProvisioningInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceProvisioningInfo>
    {
        IWiFiDirectServiceProvisioningInfo(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceProvisioningInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceProvisioningInfo(IWiFiDirectServiceProvisioningInfo const&) noexcept = default;
        IWiFiDirectServiceProvisioningInfo(IWiFiDirectServiceProvisioningInfo&&) noexcept = default;
        IWiFiDirectServiceProvisioningInfo& operator=(IWiFiDirectServiceProvisioningInfo const&) & noexcept = default;
        IWiFiDirectServiceProvisioningInfo& operator=(IWiFiDirectServiceProvisioningInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceRemotePortAddedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceRemotePortAddedEventArgs>
    {
        IWiFiDirectServiceRemotePortAddedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceRemotePortAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceRemotePortAddedEventArgs(IWiFiDirectServiceRemotePortAddedEventArgs const&) noexcept = default;
        IWiFiDirectServiceRemotePortAddedEventArgs(IWiFiDirectServiceRemotePortAddedEventArgs&&) noexcept = default;
        IWiFiDirectServiceRemotePortAddedEventArgs& operator=(IWiFiDirectServiceRemotePortAddedEventArgs const&) & noexcept = default;
        IWiFiDirectServiceRemotePortAddedEventArgs& operator=(IWiFiDirectServiceRemotePortAddedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceSession>,
        impl::require<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSession, Windows::Foundation::IClosable>
    {
        IWiFiDirectServiceSession(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceSession(IWiFiDirectServiceSession const&) noexcept = default;
        IWiFiDirectServiceSession(IWiFiDirectServiceSession&&) noexcept = default;
        IWiFiDirectServiceSession& operator=(IWiFiDirectServiceSession const&) & noexcept = default;
        IWiFiDirectServiceSession& operator=(IWiFiDirectServiceSession&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceSessionDeferredEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceSessionDeferredEventArgs>
    {
        IWiFiDirectServiceSessionDeferredEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceSessionDeferredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceSessionDeferredEventArgs(IWiFiDirectServiceSessionDeferredEventArgs const&) noexcept = default;
        IWiFiDirectServiceSessionDeferredEventArgs(IWiFiDirectServiceSessionDeferredEventArgs&&) noexcept = default;
        IWiFiDirectServiceSessionDeferredEventArgs& operator=(IWiFiDirectServiceSessionDeferredEventArgs const&) & noexcept = default;
        IWiFiDirectServiceSessionDeferredEventArgs& operator=(IWiFiDirectServiceSessionDeferredEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceSessionRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceSessionRequest>,
        impl::require<Windows::Devices::WiFiDirect::Services::IWiFiDirectServiceSessionRequest, Windows::Foundation::IClosable>
    {
        IWiFiDirectServiceSessionRequest(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceSessionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceSessionRequest(IWiFiDirectServiceSessionRequest const&) noexcept = default;
        IWiFiDirectServiceSessionRequest(IWiFiDirectServiceSessionRequest&&) noexcept = default;
        IWiFiDirectServiceSessionRequest& operator=(IWiFiDirectServiceSessionRequest const&) & noexcept = default;
        IWiFiDirectServiceSessionRequest& operator=(IWiFiDirectServiceSessionRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceSessionRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceSessionRequestedEventArgs>
    {
        IWiFiDirectServiceSessionRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceSessionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceSessionRequestedEventArgs(IWiFiDirectServiceSessionRequestedEventArgs const&) noexcept = default;
        IWiFiDirectServiceSessionRequestedEventArgs(IWiFiDirectServiceSessionRequestedEventArgs&&) noexcept = default;
        IWiFiDirectServiceSessionRequestedEventArgs& operator=(IWiFiDirectServiceSessionRequestedEventArgs const&) & noexcept = default;
        IWiFiDirectServiceSessionRequestedEventArgs& operator=(IWiFiDirectServiceSessionRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IWiFiDirectServiceStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWiFiDirectServiceStatics>
    {
        IWiFiDirectServiceStatics(std::nullptr_t = nullptr) noexcept {}
        IWiFiDirectServiceStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IWiFiDirectServiceStatics(IWiFiDirectServiceStatics const&) noexcept = default;
        IWiFiDirectServiceStatics(IWiFiDirectServiceStatics&&) noexcept = default;
        IWiFiDirectServiceStatics& operator=(IWiFiDirectServiceStatics const&) & noexcept = default;
        IWiFiDirectServiceStatics& operator=(IWiFiDirectServiceStatics&&) & noexcept = default;
    };
}
#endif
