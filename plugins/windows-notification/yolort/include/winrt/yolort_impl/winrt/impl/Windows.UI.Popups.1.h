// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_UI_Popups_1_H
#define WINRT_Windows_UI_Popups_1_H
#include "winrt/impl/Windows.UI.Popups.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Popups
{
    struct __declspec(empty_bases) IMessageDialog :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMessageDialog>
    {
        IMessageDialog(std::nullptr_t = nullptr) noexcept {}
        IMessageDialog(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMessageDialog(IMessageDialog const&) noexcept = default;
        IMessageDialog(IMessageDialog&&) noexcept = default;
        IMessageDialog& operator=(IMessageDialog const&) & noexcept = default;
        IMessageDialog& operator=(IMessageDialog&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMessageDialogFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMessageDialogFactory>
    {
        IMessageDialogFactory(std::nullptr_t = nullptr) noexcept {}
        IMessageDialogFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMessageDialogFactory(IMessageDialogFactory const&) noexcept = default;
        IMessageDialogFactory(IMessageDialogFactory&&) noexcept = default;
        IMessageDialogFactory& operator=(IMessageDialogFactory const&) & noexcept = default;
        IMessageDialogFactory& operator=(IMessageDialogFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPopupMenu :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPopupMenu>
    {
        IPopupMenu(std::nullptr_t = nullptr) noexcept {}
        IPopupMenu(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPopupMenu(IPopupMenu const&) noexcept = default;
        IPopupMenu(IPopupMenu&&) noexcept = default;
        IPopupMenu& operator=(IPopupMenu const&) & noexcept = default;
        IPopupMenu& operator=(IPopupMenu&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IUICommand :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUICommand>
    {
        IUICommand(std::nullptr_t = nullptr) noexcept {}
        IUICommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IUICommand(IUICommand const&) noexcept = default;
        IUICommand(IUICommand&&) noexcept = default;
        IUICommand& operator=(IUICommand const&) & noexcept = default;
        IUICommand& operator=(IUICommand&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IUICommandFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IUICommandFactory>
    {
        IUICommandFactory(std::nullptr_t = nullptr) noexcept {}
        IUICommandFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IUICommandFactory(IUICommandFactory const&) noexcept = default;
        IUICommandFactory(IUICommandFactory&&) noexcept = default;
        IUICommandFactory& operator=(IUICommandFactory const&) & noexcept = default;
        IUICommandFactory& operator=(IUICommandFactory&&) & noexcept = default;
    };
}
#endif
