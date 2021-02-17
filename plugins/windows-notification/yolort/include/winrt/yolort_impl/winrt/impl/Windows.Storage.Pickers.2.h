// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Storage_Pickers_2_H
#define WINRT_Windows_Storage_Pickers_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Storage.Pickers.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Pickers
{
    struct __declspec(empty_bases) FileExtensionVector : Windows::Foundation::Collections::IVector<hstring>
    {
        FileExtensionVector(std::nullptr_t) noexcept {}
        FileExtensionVector(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVector<hstring>(ptr, take_ownership_from_abi) {}
        FileExtensionVector(FileExtensionVector const&) noexcept = default;
        FileExtensionVector(FileExtensionVector&&) noexcept = default;
        FileExtensionVector& operator=(FileExtensionVector const&) & noexcept = default;
        FileExtensionVector& operator=(FileExtensionVector&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileOpenPicker : Windows::Storage::Pickers::IFileOpenPicker,
        impl::require<FileOpenPicker, Windows::Storage::Pickers::IFileOpenPicker2, Windows::Storage::Pickers::IFileOpenPickerWithOperationId, Windows::Storage::Pickers::IFileOpenPicker3>
    {
        FileOpenPicker(std::nullptr_t) noexcept {}
        FileOpenPicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Pickers::IFileOpenPicker(ptr, take_ownership_from_abi) {}
        FileOpenPicker();
        FileOpenPicker(FileOpenPicker const&) noexcept = default;
        FileOpenPicker(FileOpenPicker&&) noexcept = default;
        FileOpenPicker& operator=(FileOpenPicker const&) & noexcept = default;
        FileOpenPicker& operator=(FileOpenPicker&&) & noexcept = default;
        using Windows::Storage::Pickers::IFileOpenPicker::PickSingleFileAsync;
        using impl::consume_t<FileOpenPicker, Windows::Storage::Pickers::IFileOpenPickerWithOperationId>::PickSingleFileAsync;
        static auto ResumePickSingleFileAsync();
        static auto CreateForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) FilePickerFileTypesOrderedMap : Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>
    {
        FilePickerFileTypesOrderedMap(std::nullptr_t) noexcept {}
        FilePickerFileTypesOrderedMap(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IMap<hstring, Windows::Foundation::Collections::IVector<hstring>>(ptr, take_ownership_from_abi) {}
        FilePickerFileTypesOrderedMap(FilePickerFileTypesOrderedMap const&) noexcept = default;
        FilePickerFileTypesOrderedMap(FilePickerFileTypesOrderedMap&&) noexcept = default;
        FilePickerFileTypesOrderedMap& operator=(FilePickerFileTypesOrderedMap const&) & noexcept = default;
        FilePickerFileTypesOrderedMap& operator=(FilePickerFileTypesOrderedMap&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FilePickerSelectedFilesArray : Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>
    {
        FilePickerSelectedFilesArray(std::nullptr_t) noexcept {}
        FilePickerSelectedFilesArray(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::Collections::IVectorView<Windows::Storage::StorageFile>(ptr, take_ownership_from_abi) {}
        FilePickerSelectedFilesArray(FilePickerSelectedFilesArray const&) noexcept = default;
        FilePickerSelectedFilesArray(FilePickerSelectedFilesArray&&) noexcept = default;
        FilePickerSelectedFilesArray& operator=(FilePickerSelectedFilesArray const&) & noexcept = default;
        FilePickerSelectedFilesArray& operator=(FilePickerSelectedFilesArray&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileSavePicker : Windows::Storage::Pickers::IFileSavePicker,
        impl::require<FileSavePicker, Windows::Storage::Pickers::IFileSavePicker2, Windows::Storage::Pickers::IFileSavePicker3, Windows::Storage::Pickers::IFileSavePicker4>
    {
        FileSavePicker(std::nullptr_t) noexcept {}
        FileSavePicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Pickers::IFileSavePicker(ptr, take_ownership_from_abi) {}
        FileSavePicker();
        FileSavePicker(FileSavePicker const&) noexcept = default;
        FileSavePicker(FileSavePicker&&) noexcept = default;
        FileSavePicker& operator=(FileSavePicker const&) & noexcept = default;
        FileSavePicker& operator=(FileSavePicker&&) & noexcept = default;
        static auto CreateForUser(Windows::System::User const& user);
    };
    struct __declspec(empty_bases) FolderPicker : Windows::Storage::Pickers::IFolderPicker,
        impl::require<FolderPicker, Windows::Storage::Pickers::IFolderPicker2, Windows::Storage::Pickers::IFolderPicker3>
    {
        FolderPicker(std::nullptr_t) noexcept {}
        FolderPicker(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Pickers::IFolderPicker(ptr, take_ownership_from_abi) {}
        FolderPicker();
        FolderPicker(FolderPicker const&) noexcept = default;
        FolderPicker(FolderPicker&&) noexcept = default;
        FolderPicker& operator=(FolderPicker const&) & noexcept = default;
        FolderPicker& operator=(FolderPicker&&) & noexcept = default;
        static auto CreateForUser(Windows::System::User const& user);
    };
}
#endif
