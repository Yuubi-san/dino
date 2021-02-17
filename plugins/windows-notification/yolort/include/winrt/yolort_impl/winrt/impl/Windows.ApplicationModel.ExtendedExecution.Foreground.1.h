// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_ApplicationModel_ExtendedExecution_Foreground_1_H
#define WINRT_Windows_ApplicationModel_ExtendedExecution_Foreground_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.ApplicationModel.ExtendedExecution.Foreground.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::ExtendedExecution::Foreground
{
    struct __declspec(empty_bases) IExtendedExecutionForegroundRevokedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionForegroundRevokedEventArgs>
    {
        IExtendedExecutionForegroundRevokedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionForegroundRevokedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IExtendedExecutionForegroundRevokedEventArgs(IExtendedExecutionForegroundRevokedEventArgs const&) noexcept = default;
        IExtendedExecutionForegroundRevokedEventArgs(IExtendedExecutionForegroundRevokedEventArgs&&) noexcept = default;
        IExtendedExecutionForegroundRevokedEventArgs& operator=(IExtendedExecutionForegroundRevokedEventArgs const&) & noexcept = default;
        IExtendedExecutionForegroundRevokedEventArgs& operator=(IExtendedExecutionForegroundRevokedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IExtendedExecutionForegroundSession :
        Windows::Foundation::IInspectable,
        impl::consume_t<IExtendedExecutionForegroundSession>,
        impl::require<Windows::ApplicationModel::ExtendedExecution::Foreground::IExtendedExecutionForegroundSession, Windows::Foundation::IClosable>
    {
        IExtendedExecutionForegroundSession(std::nullptr_t = nullptr) noexcept {}
        IExtendedExecutionForegroundSession(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IExtendedExecutionForegroundSession(IExtendedExecutionForegroundSession const&) noexcept = default;
        IExtendedExecutionForegroundSession(IExtendedExecutionForegroundSession&&) noexcept = default;
        IExtendedExecutionForegroundSession& operator=(IExtendedExecutionForegroundSession const&) & noexcept = default;
        IExtendedExecutionForegroundSession& operator=(IExtendedExecutionForegroundSession&&) & noexcept = default;
    };
}
#endif
