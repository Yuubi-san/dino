// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Devices_WiFiDirect_2_H
#define WINRT_Windows_Devices_WiFiDirect_2_H
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.WiFiDirect.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::WiFiDirect
{
    struct __declspec(empty_bases) WiFiDirectAdvertisement : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement,
        impl::require<WiFiDirectAdvertisement, Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement2>
    {
        WiFiDirectAdvertisement(std::nullptr_t) noexcept {}
        WiFiDirectAdvertisement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisement(ptr, take_ownership_from_abi) {}
        WiFiDirectAdvertisement(WiFiDirectAdvertisement const&) noexcept = default;
        WiFiDirectAdvertisement(WiFiDirectAdvertisement&&) noexcept = default;
        WiFiDirectAdvertisement& operator=(WiFiDirectAdvertisement const&) & noexcept = default;
        WiFiDirectAdvertisement& operator=(WiFiDirectAdvertisement&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WiFiDirectAdvertisementPublisher : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher
    {
        WiFiDirectAdvertisementPublisher(std::nullptr_t) noexcept {}
        WiFiDirectAdvertisementPublisher(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisher(ptr, take_ownership_from_abi) {}
        WiFiDirectAdvertisementPublisher();
        WiFiDirectAdvertisementPublisher(WiFiDirectAdvertisementPublisher const&) noexcept = default;
        WiFiDirectAdvertisementPublisher(WiFiDirectAdvertisementPublisher&&) noexcept = default;
        WiFiDirectAdvertisementPublisher& operator=(WiFiDirectAdvertisementPublisher const&) & noexcept = default;
        WiFiDirectAdvertisementPublisher& operator=(WiFiDirectAdvertisementPublisher&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WiFiDirectAdvertisementPublisherStatusChangedEventArgs : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs
    {
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectAdvertisementPublisherStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs(WiFiDirectAdvertisementPublisherStatusChangedEventArgs const&) noexcept = default;
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs(WiFiDirectAdvertisementPublisherStatusChangedEventArgs&&) noexcept = default;
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs& operator=(WiFiDirectAdvertisementPublisherStatusChangedEventArgs const&) & noexcept = default;
        WiFiDirectAdvertisementPublisherStatusChangedEventArgs& operator=(WiFiDirectAdvertisementPublisherStatusChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WiFiDirectConnectionListener : Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener
    {
        WiFiDirectConnectionListener(std::nullptr_t) noexcept {}
        WiFiDirectConnectionListener(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionListener(ptr, take_ownership_from_abi) {}
        WiFiDirectConnectionListener();
        WiFiDirectConnectionListener(WiFiDirectConnectionListener const&) noexcept = default;
        WiFiDirectConnectionListener(WiFiDirectConnectionListener&&) noexcept = default;
        WiFiDirectConnectionListener& operator=(WiFiDirectConnectionListener const&) & noexcept = default;
        WiFiDirectConnectionListener& operator=(WiFiDirectConnectionListener&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WiFiDirectConnectionParameters : Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters,
        impl::require<WiFiDirectConnectionParameters, Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters2, Windows::Devices::Enumeration::IDevicePairingSettings>
    {
        WiFiDirectConnectionParameters(std::nullptr_t) noexcept {}
        WiFiDirectConnectionParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionParameters(ptr, take_ownership_from_abi) {}
        WiFiDirectConnectionParameters();
        WiFiDirectConnectionParameters(WiFiDirectConnectionParameters const&) noexcept = default;
        WiFiDirectConnectionParameters(WiFiDirectConnectionParameters&&) noexcept = default;
        WiFiDirectConnectionParameters& operator=(WiFiDirectConnectionParameters const&) & noexcept = default;
        WiFiDirectConnectionParameters& operator=(WiFiDirectConnectionParameters&&) & noexcept = default;
        static auto GetDevicePairingKinds(Windows::Devices::WiFiDirect::WiFiDirectConfigurationMethod const& configurationMethod);
    };
    struct __declspec(empty_bases) WiFiDirectConnectionRequest : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest
    {
        WiFiDirectConnectionRequest(std::nullptr_t) noexcept {}
        WiFiDirectConnectionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequest(ptr, take_ownership_from_abi) {}
        WiFiDirectConnectionRequest(WiFiDirectConnectionRequest const&) noexcept = default;
        WiFiDirectConnectionRequest(WiFiDirectConnectionRequest&&) noexcept = default;
        WiFiDirectConnectionRequest& operator=(WiFiDirectConnectionRequest const&) & noexcept = default;
        WiFiDirectConnectionRequest& operator=(WiFiDirectConnectionRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WiFiDirectConnectionRequestedEventArgs : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs
    {
        WiFiDirectConnectionRequestedEventArgs(std::nullptr_t) noexcept {}
        WiFiDirectConnectionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectConnectionRequestedEventArgs(ptr, take_ownership_from_abi) {}
        WiFiDirectConnectionRequestedEventArgs(WiFiDirectConnectionRequestedEventArgs const&) noexcept = default;
        WiFiDirectConnectionRequestedEventArgs(WiFiDirectConnectionRequestedEventArgs&&) noexcept = default;
        WiFiDirectConnectionRequestedEventArgs& operator=(WiFiDirectConnectionRequestedEventArgs const&) & noexcept = default;
        WiFiDirectConnectionRequestedEventArgs& operator=(WiFiDirectConnectionRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WiFiDirectDevice : Windows::Devices::WiFiDirect::IWiFiDirectDevice
    {
        WiFiDirectDevice(std::nullptr_t) noexcept {}
        WiFiDirectDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectDevice(ptr, take_ownership_from_abi) {}
        WiFiDirectDevice(WiFiDirectDevice const&) noexcept = default;
        WiFiDirectDevice(WiFiDirectDevice&&) noexcept = default;
        WiFiDirectDevice& operator=(WiFiDirectDevice const&) & noexcept = default;
        WiFiDirectDevice& operator=(WiFiDirectDevice&&) & noexcept = default;
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDeviceSelector(Windows::Devices::WiFiDirect::WiFiDirectDeviceSelectorType const& type);
        static auto FromIdAsync(param::hstring const& deviceId, Windows::Devices::WiFiDirect::WiFiDirectConnectionParameters const& connectionParameters);
    };
    struct __declspec(empty_bases) WiFiDirectInformationElement : Windows::Devices::WiFiDirect::IWiFiDirectInformationElement
    {
        WiFiDirectInformationElement(std::nullptr_t) noexcept {}
        WiFiDirectInformationElement(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectInformationElement(ptr, take_ownership_from_abi) {}
        WiFiDirectInformationElement();
        WiFiDirectInformationElement(WiFiDirectInformationElement const&) noexcept = default;
        WiFiDirectInformationElement(WiFiDirectInformationElement&&) noexcept = default;
        WiFiDirectInformationElement& operator=(WiFiDirectInformationElement const&) & noexcept = default;
        WiFiDirectInformationElement& operator=(WiFiDirectInformationElement&&) & noexcept = default;
        static auto CreateFromBuffer(Windows::Storage::Streams::IBuffer const& buffer);
        static auto CreateFromDeviceInformation(Windows::Devices::Enumeration::DeviceInformation const& deviceInformation);
    };
    struct __declspec(empty_bases) WiFiDirectLegacySettings : Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings
    {
        WiFiDirectLegacySettings(std::nullptr_t) noexcept {}
        WiFiDirectLegacySettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::WiFiDirect::IWiFiDirectLegacySettings(ptr, take_ownership_from_abi) {}
        WiFiDirectLegacySettings(WiFiDirectLegacySettings const&) noexcept = default;
        WiFiDirectLegacySettings(WiFiDirectLegacySettings&&) noexcept = default;
        WiFiDirectLegacySettings& operator=(WiFiDirectLegacySettings const&) & noexcept = default;
        WiFiDirectLegacySettings& operator=(WiFiDirectLegacySettings&&) & noexcept = default;
    };
}
#endif
