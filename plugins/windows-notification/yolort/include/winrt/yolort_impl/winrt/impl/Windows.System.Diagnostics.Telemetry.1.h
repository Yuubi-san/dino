// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_System_Diagnostics_Telemetry_1_H
#define WINRT_Windows_System_Diagnostics_Telemetry_1_H
#include "winrt/impl/Windows.System.Diagnostics.Telemetry.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Diagnostics::Telemetry
{
    struct __declspec(empty_bases) IPlatformTelemetryClientStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformTelemetryClientStatics>
    {
        IPlatformTelemetryClientStatics(std::nullptr_t = nullptr) noexcept {}
        IPlatformTelemetryClientStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPlatformTelemetryClientStatics(IPlatformTelemetryClientStatics const&) noexcept = default;
        IPlatformTelemetryClientStatics(IPlatformTelemetryClientStatics&&) noexcept = default;
        IPlatformTelemetryClientStatics& operator=(IPlatformTelemetryClientStatics const&) & noexcept = default;
        IPlatformTelemetryClientStatics& operator=(IPlatformTelemetryClientStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPlatformTelemetryRegistrationResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformTelemetryRegistrationResult>
    {
        IPlatformTelemetryRegistrationResult(std::nullptr_t = nullptr) noexcept {}
        IPlatformTelemetryRegistrationResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPlatformTelemetryRegistrationResult(IPlatformTelemetryRegistrationResult const&) noexcept = default;
        IPlatformTelemetryRegistrationResult(IPlatformTelemetryRegistrationResult&&) noexcept = default;
        IPlatformTelemetryRegistrationResult& operator=(IPlatformTelemetryRegistrationResult const&) & noexcept = default;
        IPlatformTelemetryRegistrationResult& operator=(IPlatformTelemetryRegistrationResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPlatformTelemetryRegistrationSettings :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPlatformTelemetryRegistrationSettings>
    {
        IPlatformTelemetryRegistrationSettings(std::nullptr_t = nullptr) noexcept {}
        IPlatformTelemetryRegistrationSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPlatformTelemetryRegistrationSettings(IPlatformTelemetryRegistrationSettings const&) noexcept = default;
        IPlatformTelemetryRegistrationSettings(IPlatformTelemetryRegistrationSettings&&) noexcept = default;
        IPlatformTelemetryRegistrationSettings& operator=(IPlatformTelemetryRegistrationSettings const&) & noexcept = default;
        IPlatformTelemetryRegistrationSettings& operator=(IPlatformTelemetryRegistrationSettings&&) & noexcept = default;
    };
}
#endif
