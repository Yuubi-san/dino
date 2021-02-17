// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Devices_Sms_2_H
#define WINRT_Windows_Devices_Sms_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Devices.Sms.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Sms
{
    struct SmsDeviceStatusChangedEventHandler : Windows::Foundation::IUnknown
    {
        SmsDeviceStatusChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        SmsDeviceStatusChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        SmsDeviceStatusChangedEventHandler(SmsDeviceStatusChangedEventHandler const&) noexcept = default;
        SmsDeviceStatusChangedEventHandler(SmsDeviceStatusChangedEventHandler&&) noexcept = default;
        SmsDeviceStatusChangedEventHandler& operator=(SmsDeviceStatusChangedEventHandler const&) & noexcept = default;
        SmsDeviceStatusChangedEventHandler& operator=(SmsDeviceStatusChangedEventHandler&&) & noexcept = default;
        template <typename L> SmsDeviceStatusChangedEventHandler(L lambda);
        template <typename F> SmsDeviceStatusChangedEventHandler(F* function);
        template <typename O, typename M> SmsDeviceStatusChangedEventHandler(O* object, M method);
        template <typename O, typename M> SmsDeviceStatusChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SmsDeviceStatusChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Devices::Sms::SmsDevice const& sender) const;
    };
    struct SmsMessageReceivedEventHandler : Windows::Foundation::IUnknown
    {
        SmsMessageReceivedEventHandler(std::nullptr_t = nullptr) noexcept {}
        SmsMessageReceivedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        SmsMessageReceivedEventHandler(SmsMessageReceivedEventHandler const&) noexcept = default;
        SmsMessageReceivedEventHandler(SmsMessageReceivedEventHandler&&) noexcept = default;
        SmsMessageReceivedEventHandler& operator=(SmsMessageReceivedEventHandler const&) & noexcept = default;
        SmsMessageReceivedEventHandler& operator=(SmsMessageReceivedEventHandler&&) & noexcept = default;
        template <typename L> SmsMessageReceivedEventHandler(L lambda);
        template <typename F> SmsMessageReceivedEventHandler(F* function);
        template <typename O, typename M> SmsMessageReceivedEventHandler(O* object, M method);
        template <typename O, typename M> SmsMessageReceivedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> SmsMessageReceivedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(Windows::Devices::Sms::SmsDevice const& sender, Windows::Devices::Sms::SmsMessageReceivedEventArgs const& e) const;
    };
    struct SmsEncodedLength
    {
        uint32_t SegmentCount;
        uint32_t CharacterCountLastSegment;
        uint32_t CharactersPerSegment;
        uint32_t ByteCountLastSegment;
        uint32_t BytesPerSegment;
    };
    inline bool operator==(SmsEncodedLength const& left, SmsEncodedLength const& right) noexcept
    {
        return left.SegmentCount == right.SegmentCount && left.CharacterCountLastSegment == right.CharacterCountLastSegment && left.CharactersPerSegment == right.CharactersPerSegment && left.ByteCountLastSegment == right.ByteCountLastSegment && left.BytesPerSegment == right.BytesPerSegment;
    }
    inline bool operator!=(SmsEncodedLength const& left, SmsEncodedLength const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) DeleteSmsMessageOperation : Windows::Foundation::IAsyncAction
    {
        DeleteSmsMessageOperation(std::nullptr_t) noexcept {}
        DeleteSmsMessageOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncAction(ptr, take_ownership_from_abi) {}
        DeleteSmsMessageOperation(DeleteSmsMessageOperation const&) noexcept = default;
        DeleteSmsMessageOperation(DeleteSmsMessageOperation&&) noexcept = default;
        DeleteSmsMessageOperation& operator=(DeleteSmsMessageOperation const&) & noexcept = default;
        DeleteSmsMessageOperation& operator=(DeleteSmsMessageOperation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DeleteSmsMessagesOperation : Windows::Foundation::IAsyncAction
    {
        DeleteSmsMessagesOperation(std::nullptr_t) noexcept {}
        DeleteSmsMessagesOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncAction(ptr, take_ownership_from_abi) {}
        DeleteSmsMessagesOperation(DeleteSmsMessagesOperation const&) noexcept = default;
        DeleteSmsMessagesOperation(DeleteSmsMessagesOperation&&) noexcept = default;
        DeleteSmsMessagesOperation& operator=(DeleteSmsMessagesOperation const&) & noexcept = default;
        DeleteSmsMessagesOperation& operator=(DeleteSmsMessagesOperation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GetSmsDeviceOperation : Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice>
    {
        GetSmsDeviceOperation(std::nullptr_t) noexcept {}
        GetSmsDeviceOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::SmsDevice>(ptr, take_ownership_from_abi) {}
        GetSmsDeviceOperation(GetSmsDeviceOperation const&) noexcept = default;
        GetSmsDeviceOperation(GetSmsDeviceOperation&&) noexcept = default;
        GetSmsDeviceOperation& operator=(GetSmsDeviceOperation const&) & noexcept = default;
        GetSmsDeviceOperation& operator=(GetSmsDeviceOperation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GetSmsMessageOperation : Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::ISmsMessage>
    {
        GetSmsMessageOperation(std::nullptr_t) noexcept {}
        GetSmsMessageOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncOperation<Windows::Devices::Sms::ISmsMessage>(ptr, take_ownership_from_abi) {}
        GetSmsMessageOperation(GetSmsMessageOperation const&) noexcept = default;
        GetSmsMessageOperation(GetSmsMessageOperation&&) noexcept = default;
        GetSmsMessageOperation& operator=(GetSmsMessageOperation const&) & noexcept = default;
        GetSmsMessageOperation& operator=(GetSmsMessageOperation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GetSmsMessagesOperation : Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsMessage>, int32_t>
    {
        GetSmsMessagesOperation(std::nullptr_t) noexcept {}
        GetSmsMessagesOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncOperationWithProgress<Windows::Foundation::Collections::IVectorView<Windows::Devices::Sms::ISmsMessage>, int32_t>(ptr, take_ownership_from_abi) {}
        GetSmsMessagesOperation(GetSmsMessagesOperation const&) noexcept = default;
        GetSmsMessagesOperation(GetSmsMessagesOperation&&) noexcept = default;
        GetSmsMessagesOperation& operator=(GetSmsMessagesOperation const&) & noexcept = default;
        GetSmsMessagesOperation& operator=(GetSmsMessagesOperation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SendSmsMessageOperation : Windows::Foundation::IAsyncAction
    {
        SendSmsMessageOperation(std::nullptr_t) noexcept {}
        SendSmsMessageOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncAction(ptr, take_ownership_from_abi) {}
        SendSmsMessageOperation(SendSmsMessageOperation const&) noexcept = default;
        SendSmsMessageOperation(SendSmsMessageOperation&&) noexcept = default;
        SendSmsMessageOperation& operator=(SendSmsMessageOperation const&) & noexcept = default;
        SendSmsMessageOperation& operator=(SendSmsMessageOperation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsAppMessage : Windows::Devices::Sms::ISmsAppMessage
    {
        SmsAppMessage(std::nullptr_t) noexcept {}
        SmsAppMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsAppMessage(ptr, take_ownership_from_abi) {}
        SmsAppMessage();
        SmsAppMessage(SmsAppMessage const&) noexcept = default;
        SmsAppMessage(SmsAppMessage&&) noexcept = default;
        SmsAppMessage& operator=(SmsAppMessage const&) & noexcept = default;
        SmsAppMessage& operator=(SmsAppMessage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsBinaryMessage : Windows::Devices::Sms::ISmsBinaryMessage
    {
        SmsBinaryMessage(std::nullptr_t) noexcept {}
        SmsBinaryMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsBinaryMessage(ptr, take_ownership_from_abi) {}
        SmsBinaryMessage();
        SmsBinaryMessage(SmsBinaryMessage const&) noexcept = default;
        SmsBinaryMessage(SmsBinaryMessage&&) noexcept = default;
        SmsBinaryMessage& operator=(SmsBinaryMessage const&) & noexcept = default;
        SmsBinaryMessage& operator=(SmsBinaryMessage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsBroadcastMessage : Windows::Devices::Sms::ISmsBroadcastMessage
    {
        SmsBroadcastMessage(std::nullptr_t) noexcept {}
        SmsBroadcastMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsBroadcastMessage(ptr, take_ownership_from_abi) {}
        SmsBroadcastMessage(SmsBroadcastMessage const&) noexcept = default;
        SmsBroadcastMessage(SmsBroadcastMessage&&) noexcept = default;
        SmsBroadcastMessage& operator=(SmsBroadcastMessage const&) & noexcept = default;
        SmsBroadcastMessage& operator=(SmsBroadcastMessage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsDevice : Windows::Devices::Sms::ISmsDevice
    {
        SmsDevice(std::nullptr_t) noexcept {}
        SmsDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsDevice(ptr, take_ownership_from_abi) {}
        SmsDevice(SmsDevice const&) noexcept = default;
        SmsDevice(SmsDevice&&) noexcept = default;
        SmsDevice& operator=(SmsDevice const&) & noexcept = default;
        SmsDevice& operator=(SmsDevice&&) & noexcept = default;
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDefaultAsync();
        static auto FromNetworkAccountIdAsync(param::hstring const& networkAccountId);
    };
    struct __declspec(empty_bases) SmsDevice2 : Windows::Devices::Sms::ISmsDevice2
    {
        SmsDevice2(std::nullptr_t) noexcept {}
        SmsDevice2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsDevice2(ptr, take_ownership_from_abi) {}
        SmsDevice2(SmsDevice2 const&) noexcept = default;
        SmsDevice2(SmsDevice2&&) noexcept = default;
        SmsDevice2& operator=(SmsDevice2 const&) & noexcept = default;
        SmsDevice2& operator=(SmsDevice2&&) & noexcept = default;
        static auto GetDeviceSelector();
        static auto FromId(param::hstring const& deviceId);
        static auto GetDefault();
        static auto FromParentId(param::hstring const& parentDeviceId);
    };
    struct __declspec(empty_bases) SmsDeviceMessageStore : Windows::Devices::Sms::ISmsDeviceMessageStore
    {
        SmsDeviceMessageStore(std::nullptr_t) noexcept {}
        SmsDeviceMessageStore(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsDeviceMessageStore(ptr, take_ownership_from_abi) {}
        SmsDeviceMessageStore(SmsDeviceMessageStore const&) noexcept = default;
        SmsDeviceMessageStore(SmsDeviceMessageStore&&) noexcept = default;
        SmsDeviceMessageStore& operator=(SmsDeviceMessageStore const&) & noexcept = default;
        SmsDeviceMessageStore& operator=(SmsDeviceMessageStore&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsFilterRule : Windows::Devices::Sms::ISmsFilterRule
    {
        SmsFilterRule(std::nullptr_t) noexcept {}
        SmsFilterRule(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsFilterRule(ptr, take_ownership_from_abi) {}
        explicit SmsFilterRule(Windows::Devices::Sms::SmsMessageType const& messageType);
        SmsFilterRule(SmsFilterRule const&) noexcept = default;
        SmsFilterRule(SmsFilterRule&&) noexcept = default;
        SmsFilterRule& operator=(SmsFilterRule const&) & noexcept = default;
        SmsFilterRule& operator=(SmsFilterRule&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsFilterRules : Windows::Devices::Sms::ISmsFilterRules
    {
        SmsFilterRules(std::nullptr_t) noexcept {}
        SmsFilterRules(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsFilterRules(ptr, take_ownership_from_abi) {}
        explicit SmsFilterRules(Windows::Devices::Sms::SmsFilterActionType const& actionType);
        SmsFilterRules(SmsFilterRules const&) noexcept = default;
        SmsFilterRules(SmsFilterRules&&) noexcept = default;
        SmsFilterRules& operator=(SmsFilterRules const&) & noexcept = default;
        SmsFilterRules& operator=(SmsFilterRules&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsMessageReceivedEventArgs : Windows::Devices::Sms::ISmsMessageReceivedEventArgs
    {
        SmsMessageReceivedEventArgs(std::nullptr_t) noexcept {}
        SmsMessageReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsMessageReceivedEventArgs(ptr, take_ownership_from_abi) {}
        SmsMessageReceivedEventArgs(SmsMessageReceivedEventArgs const&) noexcept = default;
        SmsMessageReceivedEventArgs(SmsMessageReceivedEventArgs&&) noexcept = default;
        SmsMessageReceivedEventArgs& operator=(SmsMessageReceivedEventArgs const&) & noexcept = default;
        SmsMessageReceivedEventArgs& operator=(SmsMessageReceivedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsMessageReceivedTriggerDetails : Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails
    {
        SmsMessageReceivedTriggerDetails(std::nullptr_t) noexcept {}
        SmsMessageReceivedTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails(ptr, take_ownership_from_abi) {}
        SmsMessageReceivedTriggerDetails(SmsMessageReceivedTriggerDetails const&) noexcept = default;
        SmsMessageReceivedTriggerDetails(SmsMessageReceivedTriggerDetails&&) noexcept = default;
        SmsMessageReceivedTriggerDetails& operator=(SmsMessageReceivedTriggerDetails const&) & noexcept = default;
        SmsMessageReceivedTriggerDetails& operator=(SmsMessageReceivedTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsMessageRegistration : Windows::Devices::Sms::ISmsMessageRegistration
    {
        SmsMessageRegistration(std::nullptr_t) noexcept {}
        SmsMessageRegistration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsMessageRegistration(ptr, take_ownership_from_abi) {}
        SmsMessageRegistration(SmsMessageRegistration const&) noexcept = default;
        SmsMessageRegistration(SmsMessageRegistration&&) noexcept = default;
        SmsMessageRegistration& operator=(SmsMessageRegistration const&) & noexcept = default;
        SmsMessageRegistration& operator=(SmsMessageRegistration&&) & noexcept = default;
        [[nodiscard]] static auto AllRegistrations();
        static auto Register(param::hstring const& id, Windows::Devices::Sms::SmsFilterRules const& filterRules);
    };
    struct __declspec(empty_bases) SmsReceivedEventDetails : Windows::Devices::Sms::ISmsReceivedEventDetails,
        impl::require<SmsReceivedEventDetails, Windows::Devices::Sms::ISmsReceivedEventDetails2>
    {
        SmsReceivedEventDetails(std::nullptr_t) noexcept {}
        SmsReceivedEventDetails(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsReceivedEventDetails(ptr, take_ownership_from_abi) {}
        SmsReceivedEventDetails(SmsReceivedEventDetails const&) noexcept = default;
        SmsReceivedEventDetails(SmsReceivedEventDetails&&) noexcept = default;
        SmsReceivedEventDetails& operator=(SmsReceivedEventDetails const&) & noexcept = default;
        SmsReceivedEventDetails& operator=(SmsReceivedEventDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsSendMessageResult : Windows::Devices::Sms::ISmsSendMessageResult
    {
        SmsSendMessageResult(std::nullptr_t) noexcept {}
        SmsSendMessageResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsSendMessageResult(ptr, take_ownership_from_abi) {}
        SmsSendMessageResult(SmsSendMessageResult const&) noexcept = default;
        SmsSendMessageResult(SmsSendMessageResult&&) noexcept = default;
        SmsSendMessageResult& operator=(SmsSendMessageResult const&) & noexcept = default;
        SmsSendMessageResult& operator=(SmsSendMessageResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsStatusMessage : Windows::Devices::Sms::ISmsStatusMessage
    {
        SmsStatusMessage(std::nullptr_t) noexcept {}
        SmsStatusMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsStatusMessage(ptr, take_ownership_from_abi) {}
        SmsStatusMessage(SmsStatusMessage const&) noexcept = default;
        SmsStatusMessage(SmsStatusMessage&&) noexcept = default;
        SmsStatusMessage& operator=(SmsStatusMessage const&) & noexcept = default;
        SmsStatusMessage& operator=(SmsStatusMessage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsTextMessage : Windows::Devices::Sms::ISmsTextMessage
    {
        SmsTextMessage(std::nullptr_t) noexcept {}
        SmsTextMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsTextMessage(ptr, take_ownership_from_abi) {}
        SmsTextMessage();
        SmsTextMessage(SmsTextMessage const&) noexcept = default;
        SmsTextMessage(SmsTextMessage&&) noexcept = default;
        SmsTextMessage& operator=(SmsTextMessage const&) & noexcept = default;
        SmsTextMessage& operator=(SmsTextMessage&&) & noexcept = default;
        static auto FromBinaryMessage(Windows::Devices::Sms::SmsBinaryMessage const& binaryMessage);
        static auto FromBinaryData(Windows::Devices::Sms::SmsDataFormat const& format, array_view<uint8_t const> value);
    };
    struct __declspec(empty_bases) SmsTextMessage2 : Windows::Devices::Sms::ISmsTextMessage2
    {
        SmsTextMessage2(std::nullptr_t) noexcept {}
        SmsTextMessage2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsTextMessage2(ptr, take_ownership_from_abi) {}
        SmsTextMessage2();
        SmsTextMessage2(SmsTextMessage2 const&) noexcept = default;
        SmsTextMessage2(SmsTextMessage2&&) noexcept = default;
        SmsTextMessage2& operator=(SmsTextMessage2 const&) & noexcept = default;
        SmsTextMessage2& operator=(SmsTextMessage2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsVoicemailMessage : Windows::Devices::Sms::ISmsVoicemailMessage
    {
        SmsVoicemailMessage(std::nullptr_t) noexcept {}
        SmsVoicemailMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsVoicemailMessage(ptr, take_ownership_from_abi) {}
        SmsVoicemailMessage(SmsVoicemailMessage const&) noexcept = default;
        SmsVoicemailMessage(SmsVoicemailMessage&&) noexcept = default;
        SmsVoicemailMessage& operator=(SmsVoicemailMessage const&) & noexcept = default;
        SmsVoicemailMessage& operator=(SmsVoicemailMessage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SmsWapMessage : Windows::Devices::Sms::ISmsWapMessage
    {
        SmsWapMessage(std::nullptr_t) noexcept {}
        SmsWapMessage(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Sms::ISmsWapMessage(ptr, take_ownership_from_abi) {}
        SmsWapMessage(SmsWapMessage const&) noexcept = default;
        SmsWapMessage(SmsWapMessage&&) noexcept = default;
        SmsWapMessage& operator=(SmsWapMessage const&) & noexcept = default;
        SmsWapMessage& operator=(SmsWapMessage&&) & noexcept = default;
    };
}
#endif
