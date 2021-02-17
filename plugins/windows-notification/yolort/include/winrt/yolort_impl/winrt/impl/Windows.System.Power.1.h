// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_System_Power_1_H
#define WINRT_Windows_System_Power_1_H
#include "winrt/impl/Windows.System.Power.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Power
{
    struct __declspec(empty_bases) IBackgroundEnergyManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IBackgroundEnergyManagerStatics>
    {
        IBackgroundEnergyManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IBackgroundEnergyManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBackgroundEnergyManagerStatics(IBackgroundEnergyManagerStatics const&) noexcept = default;
        IBackgroundEnergyManagerStatics(IBackgroundEnergyManagerStatics&&) noexcept = default;
        IBackgroundEnergyManagerStatics& operator=(IBackgroundEnergyManagerStatics const&) & noexcept = default;
        IBackgroundEnergyManagerStatics& operator=(IBackgroundEnergyManagerStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IForegroundEnergyManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IForegroundEnergyManagerStatics>
    {
        IForegroundEnergyManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IForegroundEnergyManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IForegroundEnergyManagerStatics(IForegroundEnergyManagerStatics const&) noexcept = default;
        IForegroundEnergyManagerStatics(IForegroundEnergyManagerStatics&&) noexcept = default;
        IForegroundEnergyManagerStatics& operator=(IForegroundEnergyManagerStatics const&) & noexcept = default;
        IForegroundEnergyManagerStatics& operator=(IForegroundEnergyManagerStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPowerManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPowerManagerStatics>
    {
        IPowerManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IPowerManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPowerManagerStatics(IPowerManagerStatics const&) noexcept = default;
        IPowerManagerStatics(IPowerManagerStatics&&) noexcept = default;
        IPowerManagerStatics& operator=(IPowerManagerStatics const&) & noexcept = default;
        IPowerManagerStatics& operator=(IPowerManagerStatics&&) & noexcept = default;
    };
}
#endif
