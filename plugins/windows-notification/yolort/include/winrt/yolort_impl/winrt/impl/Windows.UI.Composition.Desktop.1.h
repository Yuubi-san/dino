// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_UI_Composition_Desktop_1_H
#define WINRT_Windows_UI_Composition_Desktop_1_H
#include "winrt/impl/Windows.UI.Composition.Desktop.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Desktop
{
    struct __declspec(empty_bases) IDesktopWindowTarget :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDesktopWindowTarget>
    {
        IDesktopWindowTarget(std::nullptr_t = nullptr) noexcept {}
        IDesktopWindowTarget(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IDesktopWindowTarget(IDesktopWindowTarget const&) noexcept = default;
        IDesktopWindowTarget(IDesktopWindowTarget&&) noexcept = default;
        IDesktopWindowTarget& operator=(IDesktopWindowTarget const&) & noexcept = default;
        IDesktopWindowTarget& operator=(IDesktopWindowTarget&&) & noexcept = default;
    };
}
#endif
