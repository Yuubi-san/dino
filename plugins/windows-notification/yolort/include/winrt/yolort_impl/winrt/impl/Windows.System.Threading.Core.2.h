// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_System_Threading_Core_2_H
#define WINRT_Windows_System_Threading_Core_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.System.Threading.1.h"
#include "winrt/impl/Windows.System.Threading.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Threading::Core
{
    struct SignalHandler : Windows::Foundation::IUnknown
    {
        SignalHandler(std::nullptr_t = nullptr) noexcept {}
        SignalHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        SignalHandler(SignalHandler const&) noexcept = default;
        SignalHandler(SignalHandler&&) noexcept = default;
        SignalHandler& operator=(SignalHandler const&) & noexcept = default;
        SignalHandler& operator=(SignalHandler&&) & noexcept = default;
        template <typename L> SignalHandler(L lambda);
        template <typename F> SignalHandler(F* function);
        template <typename O, typename M> SignalHandler(O* object, M method);
        template <typename O, typename M> SignalHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SignalHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::System::Threading::Core::SignalNotifier const& signalNotifier, bool timedOut) const;
    };
    struct __declspec(empty_bases) PreallocatedWorkItem : Windows::System::Threading::Core::IPreallocatedWorkItem
    {
        PreallocatedWorkItem(std::nullptr_t) noexcept {}
        PreallocatedWorkItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Threading::Core::IPreallocatedWorkItem(ptr, take_ownership_from_abi) {}
        explicit PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler);
        PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority);
        PreallocatedWorkItem(Windows::System::Threading::WorkItemHandler const& handler, Windows::System::Threading::WorkItemPriority const& priority, Windows::System::Threading::WorkItemOptions const& options);
        PreallocatedWorkItem(PreallocatedWorkItem const&) noexcept = default;
        PreallocatedWorkItem(PreallocatedWorkItem&&) noexcept = default;
        PreallocatedWorkItem& operator=(PreallocatedWorkItem const&) & noexcept = default;
        PreallocatedWorkItem& operator=(PreallocatedWorkItem&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SignalNotifier : Windows::System::Threading::Core::ISignalNotifier
    {
        SignalNotifier(std::nullptr_t) noexcept {}
        SignalNotifier(void* ptr, take_ownership_from_abi_t) noexcept : Windows::System::Threading::Core::ISignalNotifier(ptr, take_ownership_from_abi) {}
        SignalNotifier(SignalNotifier const&) noexcept = default;
        SignalNotifier(SignalNotifier&&) noexcept = default;
        SignalNotifier& operator=(SignalNotifier const&) & noexcept = default;
        SignalNotifier& operator=(SignalNotifier&&) & noexcept = default;
        static auto AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler);
        static auto AttachToEvent(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout);
        static auto AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler);
        static auto AttachToSemaphore(param::hstring const& name, Windows::System::Threading::Core::SignalHandler const& handler, Windows::Foundation::TimeSpan const& timeout);
    };
}
#endif
