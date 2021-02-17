// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Devices_Lights_0_H
#define WINRT_Windows_Devices_Lights_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    template <typename T> struct __declspec(empty_bases) IReference;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
}
WINRT_EXPORT namespace winrt::Windows::System
{
    enum class VirtualKey : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Lights
{
    enum class LampArrayKind : int32_t
    {
        Undefined = 0,
        Keyboard = 1,
        Mouse = 2,
        GameController = 3,
        Peripheral = 4,
        Scene = 5,
        Notification = 6,
        Chassis = 7,
        Wearable = 8,
        Furniture = 9,
        Art = 10,
    };
    enum class LampPurposes : uint32_t
    {
        Undefined = 0,
        Control = 0x1,
        Accent = 0x2,
        Branding = 0x4,
        Status = 0x8,
        Illumination = 0x10,
        Presentation = 0x20,
    };
    struct ILamp;
    struct ILampArray;
    struct ILampArrayStatics;
    struct ILampAvailabilityChangedEventArgs;
    struct ILampInfo;
    struct ILampStatics;
    struct Lamp;
    struct LampArray;
    struct LampAvailabilityChangedEventArgs;
    struct LampInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::Devices::Lights::ILamp>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::ILampArray>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::ILampArrayStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::ILampInfo>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::ILampStatics>{ using type = interface_category; };
    template <> struct category<Windows::Devices::Lights::Lamp>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::LampArray>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::LampAvailabilityChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::LampInfo>{ using type = class_category; };
    template <> struct category<Windows::Devices::Lights::LampArrayKind>{ using type = enum_category; };
    template <> struct category<Windows::Devices::Lights::LampPurposes>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::Lamp> = L"Windows.Devices.Lights.Lamp";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::LampArray> = L"Windows.Devices.Lights.LampArray";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::LampAvailabilityChangedEventArgs> = L"Windows.Devices.Lights.LampAvailabilityChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::LampInfo> = L"Windows.Devices.Lights.LampInfo";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::LampArrayKind> = L"Windows.Devices.Lights.LampArrayKind";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::LampPurposes> = L"Windows.Devices.Lights.LampPurposes";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::ILamp> = L"Windows.Devices.Lights.ILamp";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::ILampArray> = L"Windows.Devices.Lights.ILampArray";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::ILampArrayStatics> = L"Windows.Devices.Lights.ILampArrayStatics";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs> = L"Windows.Devices.Lights.ILampAvailabilityChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::ILampInfo> = L"Windows.Devices.Lights.ILampInfo";
    template <> inline constexpr auto& name_v<Windows::Devices::Lights::ILampStatics> = L"Windows.Devices.Lights.ILampStatics";
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::ILamp>{ 0x047D5B9A,0xEA45,0x4B2B,{ 0xB1,0xA2,0x14,0xDF,0xF0,0x0B,0xDE,0x7B } }; // 047D5B9A-EA45-4B2B-B1A2-14DFF00BDE7B
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::ILampArray>{ 0x7ACE9787,0xC8A0,0x4E95,{ 0xA1,0xE0,0xD5,0x86,0x76,0x53,0x86,0x49 } }; // 7ACE9787-C8A0-4E95-A1E0-D58676538649
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::ILampArrayStatics>{ 0x7BB8C98D,0x5FC1,0x452D,{ 0xBB,0x1F,0x4A,0xD4,0x10,0xD3,0x98,0xFF } }; // 7BB8C98D-5FC1-452D-BB1F-4AD410D398FF
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>{ 0x4F6E3DED,0x07A2,0x499D,{ 0x92,0x60,0x67,0xE3,0x04,0x53,0x2B,0xA4 } }; // 4F6E3DED-07A2-499D-9260-67E304532BA4
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::ILampInfo>{ 0x30BB521C,0x0ACF,0x49DA,{ 0x8C,0x10,0x15,0x0B,0x9C,0xF6,0x27,0x13 } }; // 30BB521C-0ACF-49DA-8C10-150B9CF62713
    template <> inline constexpr guid guid_v<Windows::Devices::Lights::ILampStatics>{ 0xA822416C,0x8885,0x401E,{ 0xB8,0x21,0x8E,0x8B,0x38,0xA8,0xE8,0xEC } }; // A822416C-8885-401E-B821-8E8B38A8E8EC
    template <> struct default_interface<Windows::Devices::Lights::Lamp>{ using type = Windows::Devices::Lights::ILamp; };
    template <> struct default_interface<Windows::Devices::Lights::LampArray>{ using type = Windows::Devices::Lights::ILampArray; };
    template <> struct default_interface<Windows::Devices::Lights::LampAvailabilityChangedEventArgs>{ using type = Windows::Devices::Lights::ILampAvailabilityChangedEventArgs; };
    template <> struct default_interface<Windows::Devices::Lights::LampInfo>{ using type = Windows::Devices::Lights::ILampInfo; };
    template <> struct abi<Windows::Devices::Lights::ILamp>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_BrightnessLevel(float*) noexcept = 0;
            virtual int32_t __stdcall put_BrightnessLevel(float) noexcept = 0;
            virtual int32_t __stdcall get_IsColorSettable(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall add_AvailabilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AvailabilityChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampArray>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_HardwareVendorId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_HardwareProductId(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_HardwareVersion(uint16_t*) noexcept = 0;
            virtual int32_t __stdcall get_LampArrayKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_LampCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MinUpdateInterval(int64_t*) noexcept = 0;
            virtual int32_t __stdcall get_BoundingBox(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_IsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_BrightnessLevel(double*) noexcept = 0;
            virtual int32_t __stdcall put_BrightnessLevel(double) noexcept = 0;
            virtual int32_t __stdcall get_IsConnected(bool*) noexcept = 0;
            virtual int32_t __stdcall get_SupportsVirtualKeys(bool*) noexcept = 0;
            virtual int32_t __stdcall GetLampInfo(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetIndicesForKey(int32_t, uint32_t* __resultSize, int32_t**) noexcept = 0;
            virtual int32_t __stdcall GetIndicesForPurposes(uint32_t, uint32_t* __resultSize, int32_t**) noexcept = 0;
            virtual int32_t __stdcall SetColor(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall SetColorForIndex(int32_t, struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall SetSingleColorForIndices(struct struct_Windows_UI_Color, uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetColorsForIndices(uint32_t, struct struct_Windows_UI_Color*, uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetColorsForKey(struct struct_Windows_UI_Color, int32_t) noexcept = 0;
            virtual int32_t __stdcall SetColorsForKeys(uint32_t, struct struct_Windows_UI_Color*, uint32_t, int32_t*) noexcept = 0;
            virtual int32_t __stdcall SetColorsForPurposes(struct struct_Windows_UI_Color, uint32_t) noexcept = 0;
            virtual int32_t __stdcall SendMessageAsync(int32_t, void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestMessageAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampArrayStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsAvailable(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Index(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Purposes(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(Windows::Foundation::Numerics::float3*) noexcept = 0;
            virtual int32_t __stdcall get_RedLevelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_GreenLevelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BlueLevelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_GainLevelCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_FixedColor(void**) noexcept = 0;
            virtual int32_t __stdcall GetNearestSupportedColor(struct struct_Windows_UI_Color, struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall get_UpdateLatency(int64_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Devices::Lights::ILampStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelector(void**) noexcept = 0;
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDefaultAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILamp
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(float) BrightnessLevel() const;
        WINRT_IMPL_AUTO(void) BrightnessLevel(float value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsColorSettable() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::UI::Color const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) AvailabilityChanged(Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> const& handler) const;
        using AvailabilityChanged_revoker = impl::event_revoker<Windows::Devices::Lights::ILamp, &impl::abi_t<Windows::Devices::Lights::ILamp>::remove_AvailabilityChanged>;
        [[nodiscard]] AvailabilityChanged_revoker AvailabilityChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Devices::Lights::Lamp, Windows::Devices::Lights::LampAvailabilityChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) AvailabilityChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::Devices::Lights::ILamp>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILamp<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampArray
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DeviceId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) HardwareVendorId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) HardwareProductId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint16_t) HardwareVersion() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Lights::LampArrayKind) LampArrayKind() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) LampCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) MinUpdateInterval() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) BoundingBox() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsEnabled() const;
        WINRT_IMPL_AUTO(void) IsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) BrightnessLevel() const;
        WINRT_IMPL_AUTO(void) BrightnessLevel(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsConnected() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SupportsVirtualKeys() const;
        WINRT_IMPL_AUTO(Windows::Devices::Lights::LampInfo) GetLampInfo(int32_t lampIndex) const;
        WINRT_IMPL_AUTO(com_array<int32_t>) GetIndicesForKey(Windows::System::VirtualKey const& key) const;
        WINRT_IMPL_AUTO(com_array<int32_t>) GetIndicesForPurposes(Windows::Devices::Lights::LampPurposes const& purposes) const;
        WINRT_IMPL_AUTO(void) SetColor(Windows::UI::Color const& desiredColor) const;
        WINRT_IMPL_AUTO(void) SetColorForIndex(int32_t lampIndex, Windows::UI::Color const& desiredColor) const;
        WINRT_IMPL_AUTO(void) SetSingleColorForIndices(Windows::UI::Color const& desiredColor, array_view<int32_t const> lampIndexes) const;
        WINRT_IMPL_AUTO(void) SetColorsForIndices(array_view<Windows::UI::Color const> desiredColors, array_view<int32_t const> lampIndexes) const;
        WINRT_IMPL_AUTO(void) SetColorsForKey(Windows::UI::Color const& desiredColor, Windows::System::VirtualKey const& key) const;
        WINRT_IMPL_AUTO(void) SetColorsForKeys(array_view<Windows::UI::Color const> desiredColors, array_view<Windows::System::VirtualKey const> keys) const;
        WINRT_IMPL_AUTO(void) SetColorsForPurposes(Windows::UI::Color const& desiredColor, Windows::Devices::Lights::LampPurposes const& purposes) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) SendMessageAsync(int32_t messageId, Windows::Storage::Streams::IBuffer const& message) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IBuffer>) RequestMessageAsync(int32_t messageId) const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampArray>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampArray<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampArrayStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::LampArray>) FromIdAsync(param::hstring const& deviceId) const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampArrayStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampArrayStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsAvailable() const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampAvailabilityChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampAvailabilityChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Index() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Devices::Lights::LampPurposes) Purposes() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float3) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) RedLevelCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) GreenLevelCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) BlueLevelCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) GainLevelCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::UI::Color>) FixedColor() const;
        WINRT_IMPL_AUTO(Windows::UI::Color) GetNearestSupportedColor(Windows::UI::Color const& desiredColor) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::TimeSpan) UpdateLatency() const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampInfo>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Lights_ILampStatics
    {
        WINRT_IMPL_AUTO(hstring) GetDeviceSelector() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp>) FromIdAsync(param::hstring const& deviceId) const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Devices::Lights::Lamp>) GetDefaultAsync() const;
    };
    template <> struct consume<Windows::Devices::Lights::ILampStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Lights_ILampStatics<D>;
    };
}
#endif
