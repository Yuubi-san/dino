// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_ApplicationModel_Resources_Core_0_H
#define WINRT_Windows_ApplicationModel_Resources_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename TResult> struct __declspec(empty_bases) IAsyncOperation;
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IIterable;
    template <typename T> struct __declspec(empty_bases) IIterator;
    template <typename K, typename V> struct __declspec(empty_bases) IKeyValuePair;
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename K, typename V> struct __declspec(empty_bases) IObservableMap;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Storage
{
    struct IStorageFile;
    struct StorageFile;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct UIContext;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources::Core
{
    enum class ResourceCandidateKind : int32_t
    {
        String = 0,
        File = 1,
        EmbeddedData = 2,
    };
    enum class ResourceQualifierPersistence : int32_t
    {
        None = 0,
        LocalMachine = 1,
    };
    struct INamedResource;
    struct IResourceCandidate;
    struct IResourceCandidate2;
    struct IResourceCandidate3;
    struct IResourceContext;
    struct IResourceContextStatics;
    struct IResourceContextStatics2;
    struct IResourceContextStatics3;
    struct IResourceContextStatics4;
    struct IResourceManager;
    struct IResourceManager2;
    struct IResourceManagerStatics;
    struct IResourceMap;
    struct IResourceQualifier;
    struct NamedResource;
    struct ResourceCandidate;
    struct ResourceCandidateVectorView;
    struct ResourceContext;
    struct ResourceContextLanguagesVectorView;
    struct ResourceManager;
    struct ResourceMap;
    struct ResourceMapIterator;
    struct ResourceMapMapView;
    struct ResourceMapMapViewIterator;
    struct ResourceQualifier;
    struct ResourceQualifierMapView;
    struct ResourceQualifierObservableMap;
    struct ResourceQualifierVectorView;
    struct ResourceLayoutInfo;
}
namespace winrt::impl
{
    template <> struct category<Windows::ApplicationModel::Resources::Core::INamedResource>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceCandidate>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceCandidate3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContext>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceManager>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceManager2>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceMap>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::IResourceQualifier>{ using type = interface_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::NamedResource>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceCandidate>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceContext>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceManager>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMap>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMapIterator>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMapMapView>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifier>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView>{ using type = class_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceCandidateKind>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence>{ using type = enum_category; };
    template <> struct category<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo>{ using type = struct_category<uint32_t, uint32_t, uint32_t, uint32_t, int32_t>; };
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::NamedResource> = L"Windows.ApplicationModel.Resources.Core.NamedResource";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceCandidate> = L"Windows.ApplicationModel.Resources.Core.ResourceCandidate";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView> = L"Windows.ApplicationModel.Resources.Core.ResourceCandidateVectorView";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceContext> = L"Windows.ApplicationModel.Resources.Core.ResourceContext";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView> = L"Windows.ApplicationModel.Resources.Core.ResourceContextLanguagesVectorView";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceManager> = L"Windows.ApplicationModel.Resources.Core.ResourceManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceMap> = L"Windows.ApplicationModel.Resources.Core.ResourceMap";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceMapIterator> = L"Windows.ApplicationModel.Resources.Core.ResourceMapIterator";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceMapMapView> = L"Windows.ApplicationModel.Resources.Core.ResourceMapMapView";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator> = L"Windows.ApplicationModel.Resources.Core.ResourceMapMapViewIterator";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceQualifier> = L"Windows.ApplicationModel.Resources.Core.ResourceQualifier";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView> = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierMapView";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap> = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierObservableMap";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView> = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierVectorView";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceCandidateKind> = L"Windows.ApplicationModel.Resources.Core.ResourceCandidateKind";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence> = L"Windows.ApplicationModel.Resources.Core.ResourceQualifierPersistence";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo> = L"Windows.ApplicationModel.Resources.Core.ResourceLayoutInfo";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::INamedResource> = L"Windows.ApplicationModel.Resources.Core.INamedResource";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceCandidate> = L"Windows.ApplicationModel.Resources.Core.IResourceCandidate";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceCandidate2> = L"Windows.ApplicationModel.Resources.Core.IResourceCandidate2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceCandidate3> = L"Windows.ApplicationModel.Resources.Core.IResourceCandidate3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceContext> = L"Windows.ApplicationModel.Resources.Core.IResourceContext";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceContextStatics> = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2> = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3> = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics3";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4> = L"Windows.ApplicationModel.Resources.Core.IResourceContextStatics4";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceManager> = L"Windows.ApplicationModel.Resources.Core.IResourceManager";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceManager2> = L"Windows.ApplicationModel.Resources.Core.IResourceManager2";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics> = L"Windows.ApplicationModel.Resources.Core.IResourceManagerStatics";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceMap> = L"Windows.ApplicationModel.Resources.Core.IResourceMap";
    template <> inline constexpr auto& name_v<Windows::ApplicationModel::Resources::Core::IResourceQualifier> = L"Windows.ApplicationModel.Resources.Core.IResourceQualifier";
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::INamedResource>{ 0x1C98C219,0x0B13,0x4240,{ 0x89,0xA5,0xD4,0x95,0xDC,0x18,0x9A,0x00 } }; // 1C98C219-0B13-4240-89A5-D495DC189A00
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceCandidate>{ 0xAF5207D9,0xC433,0x4764,{ 0xB3,0xFD,0x8F,0xA6,0xBF,0xBC,0xBA,0xDC } }; // AF5207D9-C433-4764-B3FD-8FA6BFBCBADC
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>{ 0x69E5B468,0xF6FC,0x4013,{ 0xAA,0xA2,0xD5,0x3F,0x17,0x57,0xD3,0xB5 } }; // 69E5B468-F6FC-4013-AAA2-D53F1757D3B5
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceCandidate3>{ 0x08AE97F8,0x517A,0x4674,{ 0x95,0x8C,0x4A,0x3C,0x7C,0xD2,0xCC,0x6B } }; // 08AE97F8-517A-4674-958C-4A3C7CD2CC6B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceContext>{ 0x2FA22F4B,0x707E,0x4B27,{ 0xAD,0x0D,0xD0,0xD8,0xCD,0x46,0x8F,0xD2 } }; // 2FA22F4B-707E-4B27-AD0D-D0D8CD468FD2
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>{ 0x98BE9D6C,0x6338,0x4B31,{ 0x99,0xDF,0xB2,0xB4,0x42,0xF1,0x71,0x49 } }; // 98BE9D6C-6338-4B31-99DF-B2B442F17149
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>{ 0x41F752EF,0x12AF,0x41B9,{ 0xAB,0x36,0xB1,0xEB,0x4B,0x51,0x24,0x60 } }; // 41F752EF-12AF-41B9-AB36-B1EB4B512460
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>{ 0x20CF492C,0xAF0F,0x450B,{ 0x9D,0xA6,0x10,0x6D,0xD0,0xC2,0x9A,0x39 } }; // 20CF492C-AF0F-450B-9DA6-106DD0C29A39
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4>{ 0x22EB9CCD,0xFB31,0x4BFA,{ 0xB8,0x6B,0xDF,0x9D,0x9D,0x7B,0xDC,0x39 } }; // 22EB9CCD-FB31-4BFA-B86B-DF9D9D7BDC39
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceManager>{ 0xF744D97B,0x9988,0x44FB,{ 0xAB,0xD6,0x53,0x78,0x84,0x4C,0xFA,0x8B } }; // F744D97B-9988-44FB-ABD6-5378844CFA8B
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceManager2>{ 0x9D66FE6C,0xA4D7,0x4C23,{ 0x9E,0x85,0x67,0x5F,0x30,0x4C,0x25,0x2D } }; // 9D66FE6C-A4D7-4C23-9E85-675F304C252D
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>{ 0x1CC0FDFC,0x69EE,0x4E43,{ 0x99,0x01,0x47,0xF1,0x26,0x87,0xBA,0xF7 } }; // 1CC0FDFC-69EE-4E43-9901-47F12687BAF7
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceMap>{ 0x72284824,0xDB8C,0x42F8,{ 0xB0,0x8C,0x53,0xFF,0x35,0x7D,0xAD,0x82 } }; // 72284824-DB8C-42F8-B08C-53FF357DAD82
    template <> inline constexpr guid guid_v<Windows::ApplicationModel::Resources::Core::IResourceQualifier>{ 0x785DA5B2,0x4AFD,0x4376,{ 0xA8,0x88,0xC5,0xF9,0xA6,0xB7,0xA0,0x5C } }; // 785DA5B2-4AFD-4376-A888-C5F9A6B7A05C
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::NamedResource>{ using type = Windows::ApplicationModel::Resources::Core::INamedResource; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceCandidate>{ using type = Windows::ApplicationModel::Resources::Core::IResourceCandidate; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceCandidateVectorView>{ using type = Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceContext>{ using type = Windows::ApplicationModel::Resources::Core::IResourceContext; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceContextLanguagesVectorView>{ using type = Windows::Foundation::Collections::IVectorView<hstring>; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceManager>{ using type = Windows::ApplicationModel::Resources::Core::IResourceManager; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMap>{ using type = Windows::ApplicationModel::Resources::Core::IResourceMap; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMapIterator>{ using type = Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::NamedResource>>; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMapMapView>{ using type = Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceMapMapViewIterator>{ using type = Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>>; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifier>{ using type = Windows::ApplicationModel::Resources::Core::IResourceQualifier; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifierMapView>{ using type = Windows::Foundation::Collections::IMapView<hstring, hstring>; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifierObservableMap>{ using type = Windows::Foundation::Collections::IObservableMap<hstring, hstring>; };
    template <> struct default_interface<Windows::ApplicationModel::Resources::Core::ResourceQualifierVectorView>{ using type = Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier>; };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::INamedResource>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall get_Candidates(void**) noexcept = 0;
            virtual int32_t __stdcall Resolve(void**) noexcept = 0;
            virtual int32_t __stdcall ResolveForContext(void*, void**) noexcept = 0;
            virtual int32_t __stdcall ResolveAll(void**) noexcept = 0;
            virtual int32_t __stdcall ResolveAllForContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceCandidate>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Qualifiers(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsMatch(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMatchAsDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ValueAsString(void**) noexcept = 0;
            virtual int32_t __stdcall GetValueAsFileAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetQualifierValue(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetValueAsStreamAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceCandidate3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContext>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QualifierValues(void**) noexcept = 0;
            virtual int32_t __stdcall Reset() noexcept = 0;
            virtual int32_t __stdcall ResetQualifierValues(void*) noexcept = 0;
            virtual int32_t __stdcall OverrideToMatch(void*) noexcept = 0;
            virtual int32_t __stdcall Clone(void**) noexcept = 0;
            virtual int32_t __stdcall get_Languages(void**) noexcept = 0;
            virtual int32_t __stdcall put_Languages(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateMatchingContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
            virtual int32_t __stdcall SetGlobalQualifierValue(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ResetGlobalQualifierValues() noexcept = 0;
            virtual int32_t __stdcall ResetGlobalQualifierValuesForSpecifiedQualifiers(void*) noexcept = 0;
            virtual int32_t __stdcall GetForViewIndependentUse(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall SetGlobalQualifierValueWithPersistence(void*, void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUIContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MainResourceMap(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllResourceMaps(void**) noexcept = 0;
            virtual int32_t __stdcall get_DefaultContext(void**) noexcept = 0;
            virtual int32_t __stdcall LoadPriFiles(void*) noexcept = 0;
            virtual int32_t __stdcall UnloadPriFiles(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAllNamedResourcesForPackage(void*, struct struct_Windows_ApplicationModel_Resources_Core_ResourceLayoutInfo, void**) noexcept = 0;
            virtual int32_t __stdcall GetAllSubtreesForPackage(void*, struct struct_Windows_ApplicationModel_Resources_Core_ResourceLayoutInfo, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall IsResourceReference(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceMap>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall GetValue(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetValueForContext(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetSubtree(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::IResourceQualifier>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_QualifierName(void**) noexcept = 0;
            virtual int32_t __stdcall get_QualifierValue(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsDefault(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsMatch(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Score(double*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_INamedResource
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) Uri() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>) Candidates() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceCandidate) Resolve() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceCandidate) Resolve(Windows::ApplicationModel::Resources::Core::ResourceContext const& resourceContext) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>) ResolveAll() const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceCandidate>) ResolveAll(Windows::ApplicationModel::Resources::Core::ResourceContext const& resourceContext) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::INamedResource>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_INamedResource<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceQualifier>) Qualifiers() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMatch() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMatchAsDefault() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDefault() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ValueAsString() const;
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile>) GetValueAsFileAsync() const;
        WINRT_IMPL_AUTO(hstring) GetQualifierValue(param::hstring const& qualifierName) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceCandidate>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream>) GetValueAsStreamAsync() const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceCandidate2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceCandidateKind) Kind() const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceCandidate3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceCandidate3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContext
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IObservableMap<hstring, hstring>) QualifierValues() const;
        WINRT_IMPL_AUTO(void) Reset() const;
        WINRT_IMPL_AUTO(void) Reset(param::iterable<hstring> const& qualifierNames) const;
        WINRT_IMPL_AUTO(void) OverrideToMatch(param::iterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> const& result) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceContext) Clone() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) Languages() const;
        WINRT_IMPL_AUTO(void) Languages(param::async_vector_view<hstring> const& languages) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContext>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContext<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceContext) CreateMatchingContext(param::iterable<Windows::ApplicationModel::Resources::Core::ResourceQualifier> const& result) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics2
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceContext) GetForCurrentView() const;
        WINRT_IMPL_AUTO(void) SetGlobalQualifierValue(param::hstring const& key, param::hstring const& value) const;
        WINRT_IMPL_AUTO(void) ResetGlobalQualifierValues() const;
        WINRT_IMPL_AUTO(void) ResetGlobalQualifierValues(param::iterable<hstring> const& qualifierNames) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceContext) GetForViewIndependentUse() const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics3
    {
        WINRT_IMPL_AUTO(void) SetGlobalQualifierValue(param::hstring const& key, param::hstring const& value, Windows::ApplicationModel::Resources::Core::ResourceQualifierPersistence const& persistence) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics3>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics4
    {
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceContext) GetForUIContext(Windows::UI::UIContext const& context) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceContextStatics4>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceContextStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceManager
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceMap) MainResourceMap() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::ApplicationModel::Resources::Core::ResourceMap>) AllResourceMaps() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceContext) DefaultContext() const;
        WINRT_IMPL_AUTO(void) LoadPriFiles(param::iterable<Windows::Storage::IStorageFile> const& files) const;
        WINRT_IMPL_AUTO(void) UnloadPriFiles(param::iterable<Windows::Storage::IStorageFile> const& files) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceManager>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceManager<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceManager2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::NamedResource>) GetAllNamedResourcesForPackage(param::hstring const& packageName, Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo const& resourceLayoutInfo) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Resources::Core::ResourceMap>) GetAllSubtreesForPackage(param::hstring const& packageName, Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo const& resourceLayoutInfo) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceManager2>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceManager2<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceManagerStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceManager) Current() const;
        WINRT_IMPL_AUTO(bool) IsResourceReference(param::hstring const& resourceReference) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceMap
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Uri) Uri() const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceCandidate) GetValue(param::hstring const& resource) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceCandidate) GetValue(param::hstring const& resource, Windows::ApplicationModel::Resources::Core::ResourceContext const& context) const;
        WINRT_IMPL_AUTO(Windows::ApplicationModel::Resources::Core::ResourceMap) GetSubtree(param::hstring const& reference) const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceMap>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceMap<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_Resources_Core_IResourceQualifier
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) QualifierName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) QualifierValue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDefault() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsMatch() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Score() const;
    };
    template <> struct consume<Windows::ApplicationModel::Resources::Core::IResourceQualifier>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_Resources_Core_IResourceQualifier<D>;
    };
    struct struct_Windows_ApplicationModel_Resources_Core_ResourceLayoutInfo
    {
        uint32_t MajorVersion;
        uint32_t MinorVersion;
        uint32_t ResourceSubtreeCount;
        uint32_t NamedResourceCount;
        int32_t Checksum;
    };
    template <> struct abi<Windows::ApplicationModel::Resources::Core::ResourceLayoutInfo>
    {
        using type = struct_Windows_ApplicationModel_Resources_Core_ResourceLayoutInfo;
    };
}
#endif
