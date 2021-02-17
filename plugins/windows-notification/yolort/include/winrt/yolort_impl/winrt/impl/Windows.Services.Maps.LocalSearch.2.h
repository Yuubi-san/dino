// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Services_Maps_LocalSearch_2_H
#define WINRT_Windows_Services_Maps_LocalSearch_2_H
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
#include "winrt/impl/Windows.Services.Maps.LocalSearch.1.h"
WINRT_EXPORT namespace winrt::Windows::Services::Maps::LocalSearch
{
    struct LocalCategories
    {
        LocalCategories() = delete;
        [[nodiscard]] static auto BankAndCreditUnions();
        [[nodiscard]] static auto EatDrink();
        [[nodiscard]] static auto Hospitals();
        [[nodiscard]] static auto HotelsAndMotels();
        [[nodiscard]] static auto All();
        [[nodiscard]] static auto Parking();
        [[nodiscard]] static auto SeeDo();
        [[nodiscard]] static auto Shop();
    };
    struct __declspec(empty_bases) LocalLocation : Windows::Services::Maps::LocalSearch::ILocalLocation,
        impl::require<LocalLocation, Windows::Services::Maps::LocalSearch::ILocalLocation2>
    {
        LocalLocation(std::nullptr_t) noexcept {}
        LocalLocation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::LocalSearch::ILocalLocation(ptr, take_ownership_from_abi) {}
        LocalLocation(LocalLocation const&) noexcept = default;
        LocalLocation(LocalLocation&&) noexcept = default;
        LocalLocation& operator=(LocalLocation const&) & noexcept = default;
        LocalLocation& operator=(LocalLocation&&) & noexcept = default;
    };
    struct LocalLocationFinder
    {
        LocalLocationFinder() = delete;
        static auto FindLocalLocationsAsync(param::hstring const& searchTerm, Windows::Devices::Geolocation::Geocircle const& searchArea, param::hstring const& localCategory, uint32_t maxResults);
    };
    struct __declspec(empty_bases) LocalLocationFinderResult : Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult
    {
        LocalLocationFinderResult(std::nullptr_t) noexcept {}
        LocalLocationFinderResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::LocalSearch::ILocalLocationFinderResult(ptr, take_ownership_from_abi) {}
        LocalLocationFinderResult(LocalLocationFinderResult const&) noexcept = default;
        LocalLocationFinderResult(LocalLocationFinderResult&&) noexcept = default;
        LocalLocationFinderResult& operator=(LocalLocationFinderResult const&) & noexcept = default;
        LocalLocationFinderResult& operator=(LocalLocationFinderResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LocalLocationHoursOfOperationItem : Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem
    {
        LocalLocationHoursOfOperationItem(std::nullptr_t) noexcept {}
        LocalLocationHoursOfOperationItem(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::LocalSearch::ILocalLocationHoursOfOperationItem(ptr, take_ownership_from_abi) {}
        LocalLocationHoursOfOperationItem(LocalLocationHoursOfOperationItem const&) noexcept = default;
        LocalLocationHoursOfOperationItem(LocalLocationHoursOfOperationItem&&) noexcept = default;
        LocalLocationHoursOfOperationItem& operator=(LocalLocationHoursOfOperationItem const&) & noexcept = default;
        LocalLocationHoursOfOperationItem& operator=(LocalLocationHoursOfOperationItem&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LocalLocationRatingInfo : Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo
    {
        LocalLocationRatingInfo(std::nullptr_t) noexcept {}
        LocalLocationRatingInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Services::Maps::LocalSearch::ILocalLocationRatingInfo(ptr, take_ownership_from_abi) {}
        LocalLocationRatingInfo(LocalLocationRatingInfo const&) noexcept = default;
        LocalLocationRatingInfo(LocalLocationRatingInfo&&) noexcept = default;
        LocalLocationRatingInfo& operator=(LocalLocationRatingInfo const&) & noexcept = default;
        LocalLocationRatingInfo& operator=(LocalLocationRatingInfo&&) & noexcept = default;
    };
    struct PlaceInfoHelper
    {
        PlaceInfoHelper() = delete;
        static auto CreateFromLocalLocation(Windows::Services::Maps::LocalSearch::LocalLocation const& location);
    };
}
#endif
