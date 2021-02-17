// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Security_ExchangeActiveSyncProvisioning_1_H
#define WINRT_Windows_Security_ExchangeActiveSyncProvisioning_1_H
#include "winrt/impl/Windows.Security.ExchangeActiveSyncProvisioning.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::ExchangeActiveSyncProvisioning
{
    struct __declspec(empty_bases) IEasClientDeviceInformation :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasClientDeviceInformation>
    {
        IEasClientDeviceInformation(std::nullptr_t = nullptr) noexcept {}
        IEasClientDeviceInformation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IEasClientDeviceInformation(IEasClientDeviceInformation const&) noexcept = default;
        IEasClientDeviceInformation(IEasClientDeviceInformation&&) noexcept = default;
        IEasClientDeviceInformation& operator=(IEasClientDeviceInformation const&) & noexcept = default;
        IEasClientDeviceInformation& operator=(IEasClientDeviceInformation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IEasClientDeviceInformation2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasClientDeviceInformation2>,
        impl::require<Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2, Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation>
    {
        IEasClientDeviceInformation2(std::nullptr_t = nullptr) noexcept {}
        IEasClientDeviceInformation2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IEasClientDeviceInformation2(IEasClientDeviceInformation2 const&) noexcept = default;
        IEasClientDeviceInformation2(IEasClientDeviceInformation2&&) noexcept = default;
        IEasClientDeviceInformation2& operator=(IEasClientDeviceInformation2 const&) & noexcept = default;
        IEasClientDeviceInformation2& operator=(IEasClientDeviceInformation2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IEasClientSecurityPolicy :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasClientSecurityPolicy>
    {
        IEasClientSecurityPolicy(std::nullptr_t = nullptr) noexcept {}
        IEasClientSecurityPolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IEasClientSecurityPolicy(IEasClientSecurityPolicy const&) noexcept = default;
        IEasClientSecurityPolicy(IEasClientSecurityPolicy&&) noexcept = default;
        IEasClientSecurityPolicy& operator=(IEasClientSecurityPolicy const&) & noexcept = default;
        IEasClientSecurityPolicy& operator=(IEasClientSecurityPolicy&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IEasComplianceResults :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasComplianceResults>
    {
        IEasComplianceResults(std::nullptr_t = nullptr) noexcept {}
        IEasComplianceResults(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IEasComplianceResults(IEasComplianceResults const&) noexcept = default;
        IEasComplianceResults(IEasComplianceResults&&) noexcept = default;
        IEasComplianceResults& operator=(IEasComplianceResults const&) & noexcept = default;
        IEasComplianceResults& operator=(IEasComplianceResults&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IEasComplianceResults2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IEasComplianceResults2>,
        impl::require<Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2, Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults>
    {
        IEasComplianceResults2(std::nullptr_t = nullptr) noexcept {}
        IEasComplianceResults2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IEasComplianceResults2(IEasComplianceResults2 const&) noexcept = default;
        IEasComplianceResults2(IEasComplianceResults2&&) noexcept = default;
        IEasComplianceResults2& operator=(IEasComplianceResults2 const&) & noexcept = default;
        IEasComplianceResults2& operator=(IEasComplianceResults2&&) & noexcept = default;
    };
}
#endif
