// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_ApplicationModel_Payments_Provider_1_H
#define WINRT_Windows_ApplicationModel_Payments_Provider_1_H
#include "winrt/impl/Windows.ApplicationModel.Payments.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments::Provider
{
    struct __declspec(empty_bases) IPaymentAppCanMakePaymentTriggerDetails :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentAppCanMakePaymentTriggerDetails>
    {
        IPaymentAppCanMakePaymentTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IPaymentAppCanMakePaymentTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPaymentAppCanMakePaymentTriggerDetails(IPaymentAppCanMakePaymentTriggerDetails const&) noexcept = default;
        IPaymentAppCanMakePaymentTriggerDetails(IPaymentAppCanMakePaymentTriggerDetails&&) noexcept = default;
        IPaymentAppCanMakePaymentTriggerDetails& operator=(IPaymentAppCanMakePaymentTriggerDetails const&) & noexcept = default;
        IPaymentAppCanMakePaymentTriggerDetails& operator=(IPaymentAppCanMakePaymentTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPaymentAppManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentAppManager>
    {
        IPaymentAppManager(std::nullptr_t = nullptr) noexcept {}
        IPaymentAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPaymentAppManager(IPaymentAppManager const&) noexcept = default;
        IPaymentAppManager(IPaymentAppManager&&) noexcept = default;
        IPaymentAppManager& operator=(IPaymentAppManager const&) & noexcept = default;
        IPaymentAppManager& operator=(IPaymentAppManager&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPaymentAppManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentAppManagerStatics>
    {
        IPaymentAppManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IPaymentAppManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPaymentAppManagerStatics(IPaymentAppManagerStatics const&) noexcept = default;
        IPaymentAppManagerStatics(IPaymentAppManagerStatics&&) noexcept = default;
        IPaymentAppManagerStatics& operator=(IPaymentAppManagerStatics const&) & noexcept = default;
        IPaymentAppManagerStatics& operator=(IPaymentAppManagerStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPaymentTransaction :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentTransaction>
    {
        IPaymentTransaction(std::nullptr_t = nullptr) noexcept {}
        IPaymentTransaction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPaymentTransaction(IPaymentTransaction const&) noexcept = default;
        IPaymentTransaction(IPaymentTransaction&&) noexcept = default;
        IPaymentTransaction& operator=(IPaymentTransaction const&) & noexcept = default;
        IPaymentTransaction& operator=(IPaymentTransaction&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPaymentTransactionAcceptResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentTransactionAcceptResult>
    {
        IPaymentTransactionAcceptResult(std::nullptr_t = nullptr) noexcept {}
        IPaymentTransactionAcceptResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPaymentTransactionAcceptResult(IPaymentTransactionAcceptResult const&) noexcept = default;
        IPaymentTransactionAcceptResult(IPaymentTransactionAcceptResult&&) noexcept = default;
        IPaymentTransactionAcceptResult& operator=(IPaymentTransactionAcceptResult const&) & noexcept = default;
        IPaymentTransactionAcceptResult& operator=(IPaymentTransactionAcceptResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPaymentTransactionStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPaymentTransactionStatics>
    {
        IPaymentTransactionStatics(std::nullptr_t = nullptr) noexcept {}
        IPaymentTransactionStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPaymentTransactionStatics(IPaymentTransactionStatics const&) noexcept = default;
        IPaymentTransactionStatics(IPaymentTransactionStatics&&) noexcept = default;
        IPaymentTransactionStatics& operator=(IPaymentTransactionStatics const&) & noexcept = default;
        IPaymentTransactionStatics& operator=(IPaymentTransactionStatics&&) & noexcept = default;
    };
}
#endif
