// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Devices_Haptics_2_H
#define WINRT_Windows_Devices_Haptics_2_H
#include "winrt/impl/Windows.Devices.Haptics.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Haptics
{
    struct KnownSimpleHapticsControllerWaveforms
    {
        KnownSimpleHapticsControllerWaveforms() = delete;
        [[nodiscard]] static auto Click();
        [[nodiscard]] static auto BuzzContinuous();
        [[nodiscard]] static auto RumbleContinuous();
        [[nodiscard]] static auto Press();
        [[nodiscard]] static auto Release();
    };
    struct __declspec(empty_bases) SimpleHapticsController : Windows::Devices::Haptics::ISimpleHapticsController
    {
        SimpleHapticsController(std::nullptr_t) noexcept {}
        SimpleHapticsController(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Haptics::ISimpleHapticsController(ptr, take_ownership_from_abi) {}
        SimpleHapticsController(SimpleHapticsController const&) noexcept = default;
        SimpleHapticsController(SimpleHapticsController&&) noexcept = default;
        SimpleHapticsController& operator=(SimpleHapticsController const&) & noexcept = default;
        SimpleHapticsController& operator=(SimpleHapticsController&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SimpleHapticsControllerFeedback : Windows::Devices::Haptics::ISimpleHapticsControllerFeedback
    {
        SimpleHapticsControllerFeedback(std::nullptr_t) noexcept {}
        SimpleHapticsControllerFeedback(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Haptics::ISimpleHapticsControllerFeedback(ptr, take_ownership_from_abi) {}
        SimpleHapticsControllerFeedback(SimpleHapticsControllerFeedback const&) noexcept = default;
        SimpleHapticsControllerFeedback(SimpleHapticsControllerFeedback&&) noexcept = default;
        SimpleHapticsControllerFeedback& operator=(SimpleHapticsControllerFeedback const&) & noexcept = default;
        SimpleHapticsControllerFeedback& operator=(SimpleHapticsControllerFeedback&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VibrationDevice : Windows::Devices::Haptics::IVibrationDevice
    {
        VibrationDevice(std::nullptr_t) noexcept {}
        VibrationDevice(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Devices::Haptics::IVibrationDevice(ptr, take_ownership_from_abi) {}
        VibrationDevice(VibrationDevice const&) noexcept = default;
        VibrationDevice(VibrationDevice&&) noexcept = default;
        VibrationDevice& operator=(VibrationDevice const&) & noexcept = default;
        VibrationDevice& operator=(VibrationDevice&&) & noexcept = default;
        static auto RequestAccessAsync();
        static auto GetDeviceSelector();
        static auto FromIdAsync(param::hstring const& deviceId);
        static auto GetDefaultAsync();
        static auto FindAllAsync();
    };
}
#endif
