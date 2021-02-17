// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Graphics_Holographic_2_H
#define WINRT_Windows_Graphics_Holographic_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.UI.Core.2.h"
#include "winrt/impl/Windows.Graphics.Holographic.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Holographic
{
    struct HolographicAdapterId
    {
        uint32_t LowPart;
        int32_t HighPart;
    };
    inline bool operator==(HolographicAdapterId const& left, HolographicAdapterId const& right) noexcept
    {
        return left.LowPart == right.LowPart && left.HighPart == right.HighPart;
    }
    inline bool operator!=(HolographicAdapterId const& left, HolographicAdapterId const& right) noexcept
    {
        return !(left == right);
    }
    struct HolographicStereoTransform
    {
        Windows::Foundation::Numerics::float4x4 Left;
        Windows::Foundation::Numerics::float4x4 Right;
    };
    inline bool operator==(HolographicStereoTransform const& left, HolographicStereoTransform const& right) noexcept
    {
        return left.Left == right.Left && left.Right == right.Right;
    }
    inline bool operator!=(HolographicStereoTransform const& left, HolographicStereoTransform const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) HolographicCamera : Windows::Graphics::Holographic::IHolographicCamera,
        impl::require<HolographicCamera, Windows::Graphics::Holographic::IHolographicCamera2, Windows::Graphics::Holographic::IHolographicCamera3, Windows::Graphics::Holographic::IHolographicCamera4, Windows::Graphics::Holographic::IHolographicCamera5, Windows::Graphics::Holographic::IHolographicCamera6>
    {
        HolographicCamera(std::nullptr_t) noexcept {}
        HolographicCamera(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicCamera(ptr, take_ownership_from_abi) {}
        HolographicCamera(HolographicCamera const&) noexcept = default;
        HolographicCamera(HolographicCamera&&) noexcept = default;
        HolographicCamera& operator=(HolographicCamera const&) & noexcept = default;
        HolographicCamera& operator=(HolographicCamera&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicCameraPose : Windows::Graphics::Holographic::IHolographicCameraPose,
        impl::require<HolographicCameraPose, Windows::Graphics::Holographic::IHolographicCameraPose2>
    {
        HolographicCameraPose(std::nullptr_t) noexcept {}
        HolographicCameraPose(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicCameraPose(ptr, take_ownership_from_abi) {}
        HolographicCameraPose(HolographicCameraPose const&) noexcept = default;
        HolographicCameraPose(HolographicCameraPose&&) noexcept = default;
        HolographicCameraPose& operator=(HolographicCameraPose const&) & noexcept = default;
        HolographicCameraPose& operator=(HolographicCameraPose&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicCameraRenderingParameters : Windows::Graphics::Holographic::IHolographicCameraRenderingParameters,
        impl::require<HolographicCameraRenderingParameters, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters2, Windows::Graphics::Holographic::IHolographicCameraRenderingParameters3>
    {
        HolographicCameraRenderingParameters(std::nullptr_t) noexcept {}
        HolographicCameraRenderingParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicCameraRenderingParameters(ptr, take_ownership_from_abi) {}
        HolographicCameraRenderingParameters(HolographicCameraRenderingParameters const&) noexcept = default;
        HolographicCameraRenderingParameters(HolographicCameraRenderingParameters&&) noexcept = default;
        HolographicCameraRenderingParameters& operator=(HolographicCameraRenderingParameters const&) & noexcept = default;
        HolographicCameraRenderingParameters& operator=(HolographicCameraRenderingParameters&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicCameraViewportParameters : Windows::Graphics::Holographic::IHolographicCameraViewportParameters
    {
        HolographicCameraViewportParameters(std::nullptr_t) noexcept {}
        HolographicCameraViewportParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicCameraViewportParameters(ptr, take_ownership_from_abi) {}
        HolographicCameraViewportParameters(HolographicCameraViewportParameters const&) noexcept = default;
        HolographicCameraViewportParameters(HolographicCameraViewportParameters&&) noexcept = default;
        HolographicCameraViewportParameters& operator=(HolographicCameraViewportParameters const&) & noexcept = default;
        HolographicCameraViewportParameters& operator=(HolographicCameraViewportParameters&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicDisplay : Windows::Graphics::Holographic::IHolographicDisplay,
        impl::require<HolographicDisplay, Windows::Graphics::Holographic::IHolographicDisplay2, Windows::Graphics::Holographic::IHolographicDisplay3>
    {
        HolographicDisplay(std::nullptr_t) noexcept {}
        HolographicDisplay(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicDisplay(ptr, take_ownership_from_abi) {}
        HolographicDisplay(HolographicDisplay const&) noexcept = default;
        HolographicDisplay(HolographicDisplay&&) noexcept = default;
        HolographicDisplay& operator=(HolographicDisplay const&) & noexcept = default;
        HolographicDisplay& operator=(HolographicDisplay&&) & noexcept = default;
        static auto GetDefault();
    };
    struct __declspec(empty_bases) HolographicFrame : Windows::Graphics::Holographic::IHolographicFrame,
        impl::require<HolographicFrame, Windows::Graphics::Holographic::IHolographicFrame2>
    {
        HolographicFrame(std::nullptr_t) noexcept {}
        HolographicFrame(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFrame(ptr, take_ownership_from_abi) {}
        HolographicFrame(HolographicFrame const&) noexcept = default;
        HolographicFrame(HolographicFrame&&) noexcept = default;
        HolographicFrame& operator=(HolographicFrame const&) & noexcept = default;
        HolographicFrame& operator=(HolographicFrame&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicFramePrediction : Windows::Graphics::Holographic::IHolographicFramePrediction
    {
        HolographicFramePrediction(std::nullptr_t) noexcept {}
        HolographicFramePrediction(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFramePrediction(ptr, take_ownership_from_abi) {}
        HolographicFramePrediction(HolographicFramePrediction const&) noexcept = default;
        HolographicFramePrediction(HolographicFramePrediction&&) noexcept = default;
        HolographicFramePrediction& operator=(HolographicFramePrediction const&) & noexcept = default;
        HolographicFramePrediction& operator=(HolographicFramePrediction&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicFramePresentationMonitor : Windows::Graphics::Holographic::IHolographicFramePresentationMonitor
    {
        HolographicFramePresentationMonitor(std::nullptr_t) noexcept {}
        HolographicFramePresentationMonitor(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFramePresentationMonitor(ptr, take_ownership_from_abi) {}
        HolographicFramePresentationMonitor(HolographicFramePresentationMonitor const&) noexcept = default;
        HolographicFramePresentationMonitor(HolographicFramePresentationMonitor&&) noexcept = default;
        HolographicFramePresentationMonitor& operator=(HolographicFramePresentationMonitor const&) & noexcept = default;
        HolographicFramePresentationMonitor& operator=(HolographicFramePresentationMonitor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicFramePresentationReport : Windows::Graphics::Holographic::IHolographicFramePresentationReport
    {
        HolographicFramePresentationReport(std::nullptr_t) noexcept {}
        HolographicFramePresentationReport(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicFramePresentationReport(ptr, take_ownership_from_abi) {}
        HolographicFramePresentationReport(HolographicFramePresentationReport const&) noexcept = default;
        HolographicFramePresentationReport(HolographicFramePresentationReport&&) noexcept = default;
        HolographicFramePresentationReport& operator=(HolographicFramePresentationReport const&) & noexcept = default;
        HolographicFramePresentationReport& operator=(HolographicFramePresentationReport&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicQuadLayer : Windows::Graphics::Holographic::IHolographicQuadLayer,
        impl::require<HolographicQuadLayer, Windows::Foundation::IClosable>
    {
        HolographicQuadLayer(std::nullptr_t) noexcept {}
        HolographicQuadLayer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicQuadLayer(ptr, take_ownership_from_abi) {}
        explicit HolographicQuadLayer(Windows::Foundation::Size const& size);
        HolographicQuadLayer(Windows::Foundation::Size const& size, Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat);
        HolographicQuadLayer(HolographicQuadLayer const&) noexcept = default;
        HolographicQuadLayer(HolographicQuadLayer&&) noexcept = default;
        HolographicQuadLayer& operator=(HolographicQuadLayer const&) & noexcept = default;
        HolographicQuadLayer& operator=(HolographicQuadLayer&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicQuadLayerUpdateParameters : Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters,
        impl::require<HolographicQuadLayerUpdateParameters, Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters2>
    {
        HolographicQuadLayerUpdateParameters(std::nullptr_t) noexcept {}
        HolographicQuadLayerUpdateParameters(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicQuadLayerUpdateParameters(ptr, take_ownership_from_abi) {}
        HolographicQuadLayerUpdateParameters(HolographicQuadLayerUpdateParameters const&) noexcept = default;
        HolographicQuadLayerUpdateParameters(HolographicQuadLayerUpdateParameters&&) noexcept = default;
        HolographicQuadLayerUpdateParameters& operator=(HolographicQuadLayerUpdateParameters const&) & noexcept = default;
        HolographicQuadLayerUpdateParameters& operator=(HolographicQuadLayerUpdateParameters&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicSpace : Windows::Graphics::Holographic::IHolographicSpace,
        impl::require<HolographicSpace, Windows::Graphics::Holographic::IHolographicSpace2>
    {
        HolographicSpace(std::nullptr_t) noexcept {}
        HolographicSpace(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicSpace(ptr, take_ownership_from_abi) {}
        HolographicSpace(HolographicSpace const&) noexcept = default;
        HolographicSpace(HolographicSpace&&) noexcept = default;
        HolographicSpace& operator=(HolographicSpace const&) & noexcept = default;
        HolographicSpace& operator=(HolographicSpace&&) & noexcept = default;
        static auto CreateForCoreWindow(Windows::UI::Core::CoreWindow const& window);
        [[nodiscard]] static auto IsSupported();
        [[nodiscard]] static auto IsAvailable();
        static auto IsAvailableChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        using IsAvailableChanged_revoker = impl::factory_event_revoker<Windows::Graphics::Holographic::IHolographicSpaceStatics2, &impl::abi_t<Windows::Graphics::Holographic::IHolographicSpaceStatics2>::remove_IsAvailableChanged>;
        [[nodiscard]] static IsAvailableChanged_revoker IsAvailableChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler);
        static auto IsAvailableChanged(winrt::event_token const& token);
        [[nodiscard]] static auto IsConfigured();
    };
    struct __declspec(empty_bases) HolographicSpaceCameraAddedEventArgs : Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs
    {
        HolographicSpaceCameraAddedEventArgs(std::nullptr_t) noexcept {}
        HolographicSpaceCameraAddedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicSpaceCameraAddedEventArgs(ptr, take_ownership_from_abi) {}
        HolographicSpaceCameraAddedEventArgs(HolographicSpaceCameraAddedEventArgs const&) noexcept = default;
        HolographicSpaceCameraAddedEventArgs(HolographicSpaceCameraAddedEventArgs&&) noexcept = default;
        HolographicSpaceCameraAddedEventArgs& operator=(HolographicSpaceCameraAddedEventArgs const&) & noexcept = default;
        HolographicSpaceCameraAddedEventArgs& operator=(HolographicSpaceCameraAddedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicSpaceCameraRemovedEventArgs : Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs
    {
        HolographicSpaceCameraRemovedEventArgs(std::nullptr_t) noexcept {}
        HolographicSpaceCameraRemovedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicSpaceCameraRemovedEventArgs(ptr, take_ownership_from_abi) {}
        HolographicSpaceCameraRemovedEventArgs(HolographicSpaceCameraRemovedEventArgs const&) noexcept = default;
        HolographicSpaceCameraRemovedEventArgs(HolographicSpaceCameraRemovedEventArgs&&) noexcept = default;
        HolographicSpaceCameraRemovedEventArgs& operator=(HolographicSpaceCameraRemovedEventArgs const&) & noexcept = default;
        HolographicSpaceCameraRemovedEventArgs& operator=(HolographicSpaceCameraRemovedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) HolographicViewConfiguration : Windows::Graphics::Holographic::IHolographicViewConfiguration
    {
        HolographicViewConfiguration(std::nullptr_t) noexcept {}
        HolographicViewConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Graphics::Holographic::IHolographicViewConfiguration(ptr, take_ownership_from_abi) {}
        HolographicViewConfiguration(HolographicViewConfiguration const&) noexcept = default;
        HolographicViewConfiguration(HolographicViewConfiguration&&) noexcept = default;
        HolographicViewConfiguration& operator=(HolographicViewConfiguration const&) & noexcept = default;
        HolographicViewConfiguration& operator=(HolographicViewConfiguration&&) & noexcept = default;
    };
}
#endif
