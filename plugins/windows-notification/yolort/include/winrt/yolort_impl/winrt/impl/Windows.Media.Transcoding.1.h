// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Media_Transcoding_1_H
#define WINRT_Windows_Media_Transcoding_1_H
#include "winrt/impl/Windows.Media.Transcoding.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::Transcoding
{
    struct __declspec(empty_bases) IMediaTranscoder :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTranscoder>
    {
        IMediaTranscoder(std::nullptr_t = nullptr) noexcept {}
        IMediaTranscoder(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaTranscoder(IMediaTranscoder const&) noexcept = default;
        IMediaTranscoder(IMediaTranscoder&&) noexcept = default;
        IMediaTranscoder& operator=(IMediaTranscoder const&) & noexcept = default;
        IMediaTranscoder& operator=(IMediaTranscoder&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IMediaTranscoder2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTranscoder2>
    {
        IMediaTranscoder2(std::nullptr_t = nullptr) noexcept {}
        IMediaTranscoder2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IMediaTranscoder2(IMediaTranscoder2 const&) noexcept = default;
        IMediaTranscoder2(IMediaTranscoder2&&) noexcept = default;
        IMediaTranscoder2& operator=(IMediaTranscoder2 const&) & noexcept = default;
        IMediaTranscoder2& operator=(IMediaTranscoder2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IPrepareTranscodeResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IPrepareTranscodeResult>
    {
        IPrepareTranscodeResult(std::nullptr_t = nullptr) noexcept {}
        IPrepareTranscodeResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IPrepareTranscodeResult(IPrepareTranscodeResult const&) noexcept = default;
        IPrepareTranscodeResult(IPrepareTranscodeResult&&) noexcept = default;
        IPrepareTranscodeResult& operator=(IPrepareTranscodeResult const&) & noexcept = default;
        IPrepareTranscodeResult& operator=(IPrepareTranscodeResult&&) & noexcept = default;
    };
}
#endif