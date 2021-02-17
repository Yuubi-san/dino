// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Devices_Adc_Provider_1_H
#define WINRT_Windows_Devices_Adc_Provider_1_H
#include "winrt/impl/Windows.Devices.Adc.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Adc::Provider
{
    struct __declspec(empty_bases) IAdcControllerProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdcControllerProvider>
    {
        IAdcControllerProvider(std::nullptr_t = nullptr) noexcept {}
        IAdcControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAdcControllerProvider(IAdcControllerProvider const&) noexcept = default;
        IAdcControllerProvider(IAdcControllerProvider&&) noexcept = default;
        IAdcControllerProvider& operator=(IAdcControllerProvider const&) & noexcept = default;
        IAdcControllerProvider& operator=(IAdcControllerProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAdcProvider :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdcProvider>
    {
        IAdcProvider(std::nullptr_t = nullptr) noexcept {}
        IAdcProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAdcProvider(IAdcProvider const&) noexcept = default;
        IAdcProvider(IAdcProvider&&) noexcept = default;
        IAdcProvider& operator=(IAdcProvider const&) & noexcept = default;
        IAdcProvider& operator=(IAdcProvider&&) & noexcept = default;
    };
}
#endif
