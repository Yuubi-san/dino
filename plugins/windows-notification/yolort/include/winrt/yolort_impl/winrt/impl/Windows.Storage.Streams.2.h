// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_Storage_Streams_2_H
#define WINRT_Windows_Storage_Streams_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct __declspec(empty_bases) Buffer : Windows::Storage::Streams::IBuffer
    {
        Buffer(std::nullptr_t) noexcept {}
        Buffer(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IBuffer(ptr, take_ownership_from_abi) {}
        explicit Buffer(uint32_t capacity);
        Buffer(Buffer const&) noexcept = default;
        Buffer(Buffer&&) noexcept = default;
        Buffer& operator=(Buffer const&) & noexcept = default;
        Buffer& operator=(Buffer&&) & noexcept = default;
        static auto CreateCopyFromMemoryBuffer(Windows::Foundation::IMemoryBuffer const& input);
        static auto CreateMemoryBufferOverIBuffer(Windows::Storage::Streams::IBuffer const& input);
    };
    struct __declspec(empty_bases) DataReader : Windows::Storage::Streams::IDataReader,
        impl::require<DataReader, Windows::Foundation::IClosable>
    {
        DataReader(std::nullptr_t) noexcept {}
        DataReader(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IDataReader(ptr, take_ownership_from_abi) {}
        explicit DataReader(Windows::Storage::Streams::IInputStream const& inputStream);
        DataReader(DataReader const&) noexcept = default;
        DataReader(DataReader&&) noexcept = default;
        DataReader& operator=(DataReader const&) & noexcept = default;
        DataReader& operator=(DataReader&&) & noexcept = default;
        static auto FromBuffer(Windows::Storage::Streams::IBuffer const& buffer);
    };
    struct __declspec(empty_bases) DataReaderLoadOperation : Windows::Foundation::IAsyncOperation<uint32_t>
    {
        DataReaderLoadOperation(std::nullptr_t) noexcept {}
        DataReaderLoadOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncOperation<uint32_t>(ptr, take_ownership_from_abi) {}
        DataReaderLoadOperation(DataReaderLoadOperation const&) noexcept = default;
        DataReaderLoadOperation(DataReaderLoadOperation&&) noexcept = default;
        DataReaderLoadOperation& operator=(DataReaderLoadOperation const&) & noexcept = default;
        DataReaderLoadOperation& operator=(DataReaderLoadOperation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DataWriter : Windows::Storage::Streams::IDataWriter,
        impl::require<DataWriter, Windows::Foundation::IClosable>
    {
        DataWriter(std::nullptr_t) noexcept {}
        DataWriter(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IDataWriter(ptr, take_ownership_from_abi) {}
        DataWriter();
        explicit DataWriter(Windows::Storage::Streams::IOutputStream const& outputStream);
        DataWriter(DataWriter const&) noexcept = default;
        DataWriter(DataWriter&&) noexcept = default;
        DataWriter& operator=(DataWriter const&) & noexcept = default;
        DataWriter& operator=(DataWriter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DataWriterStoreOperation : Windows::Foundation::IAsyncOperation<uint32_t>
    {
        DataWriterStoreOperation(std::nullptr_t) noexcept {}
        DataWriterStoreOperation(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IAsyncOperation<uint32_t>(ptr, take_ownership_from_abi) {}
        DataWriterStoreOperation(DataWriterStoreOperation const&) noexcept = default;
        DataWriterStoreOperation(DataWriterStoreOperation&&) noexcept = default;
        DataWriterStoreOperation& operator=(DataWriterStoreOperation const&) & noexcept = default;
        DataWriterStoreOperation& operator=(DataWriterStoreOperation&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileInputStream : Windows::Storage::Streams::IInputStream
    {
        FileInputStream(std::nullptr_t) noexcept {}
        FileInputStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IInputStream(ptr, take_ownership_from_abi) {}
        FileInputStream(FileInputStream const&) noexcept = default;
        FileInputStream(FileInputStream&&) noexcept = default;
        FileInputStream& operator=(FileInputStream const&) & noexcept = default;
        FileInputStream& operator=(FileInputStream&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileOutputStream : Windows::Storage::Streams::IOutputStream
    {
        FileOutputStream(std::nullptr_t) noexcept {}
        FileOutputStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IOutputStream(ptr, take_ownership_from_abi) {}
        FileOutputStream(FileOutputStream const&) noexcept = default;
        FileOutputStream(FileOutputStream&&) noexcept = default;
        FileOutputStream& operator=(FileOutputStream const&) & noexcept = default;
        FileOutputStream& operator=(FileOutputStream&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FileRandomAccessStream : Windows::Storage::Streams::IRandomAccessStream
    {
        FileRandomAccessStream(std::nullptr_t) noexcept {}
        FileRandomAccessStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IRandomAccessStream(ptr, take_ownership_from_abi) {}
        FileRandomAccessStream(FileRandomAccessStream const&) noexcept = default;
        FileRandomAccessStream(FileRandomAccessStream&&) noexcept = default;
        FileRandomAccessStream& operator=(FileRandomAccessStream const&) & noexcept = default;
        FileRandomAccessStream& operator=(FileRandomAccessStream&&) & noexcept = default;
        static auto OpenAsync(param::hstring const& filePath, Windows::Storage::FileAccessMode const& accessMode);
        static auto OpenAsync(param::hstring const& filePath, Windows::Storage::FileAccessMode const& accessMode, Windows::Storage::StorageOpenOptions const& sharingOptions, Windows::Storage::Streams::FileOpenDisposition const& openDisposition);
        static auto OpenTransactedWriteAsync(param::hstring const& filePath);
        static auto OpenTransactedWriteAsync(param::hstring const& filePath, Windows::Storage::StorageOpenOptions const& openOptions, Windows::Storage::Streams::FileOpenDisposition const& openDisposition);
        static auto OpenForUserAsync(Windows::System::User const& user, param::hstring const& filePath, Windows::Storage::FileAccessMode const& accessMode);
        static auto OpenForUserAsync(Windows::System::User const& user, param::hstring const& filePath, Windows::Storage::FileAccessMode const& accessMode, Windows::Storage::StorageOpenOptions const& sharingOptions, Windows::Storage::Streams::FileOpenDisposition const& openDisposition);
        static auto OpenTransactedWriteForUserAsync(Windows::System::User const& user, param::hstring const& filePath);
        static auto OpenTransactedWriteForUserAsync(Windows::System::User const& user, param::hstring const& filePath, Windows::Storage::StorageOpenOptions const& openOptions, Windows::Storage::Streams::FileOpenDisposition const& openDisposition);
    };
    struct __declspec(empty_bases) InMemoryRandomAccessStream : Windows::Storage::Streams::IRandomAccessStream
    {
        InMemoryRandomAccessStream(std::nullptr_t) noexcept {}
        InMemoryRandomAccessStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IRandomAccessStream(ptr, take_ownership_from_abi) {}
        InMemoryRandomAccessStream();
        InMemoryRandomAccessStream(InMemoryRandomAccessStream const&) noexcept = default;
        InMemoryRandomAccessStream(InMemoryRandomAccessStream&&) noexcept = default;
        InMemoryRandomAccessStream& operator=(InMemoryRandomAccessStream const&) & noexcept = default;
        InMemoryRandomAccessStream& operator=(InMemoryRandomAccessStream&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InputStreamOverStream : Windows::Storage::Streams::IInputStream
    {
        InputStreamOverStream(std::nullptr_t) noexcept {}
        InputStreamOverStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IInputStream(ptr, take_ownership_from_abi) {}
        InputStreamOverStream(InputStreamOverStream const&) noexcept = default;
        InputStreamOverStream(InputStreamOverStream&&) noexcept = default;
        InputStreamOverStream& operator=(InputStreamOverStream const&) & noexcept = default;
        InputStreamOverStream& operator=(InputStreamOverStream&&) & noexcept = default;
    };
    struct __declspec(empty_bases) OutputStreamOverStream : Windows::Storage::Streams::IOutputStream
    {
        OutputStreamOverStream(std::nullptr_t) noexcept {}
        OutputStreamOverStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IOutputStream(ptr, take_ownership_from_abi) {}
        OutputStreamOverStream(OutputStreamOverStream const&) noexcept = default;
        OutputStreamOverStream(OutputStreamOverStream&&) noexcept = default;
        OutputStreamOverStream& operator=(OutputStreamOverStream const&) & noexcept = default;
        OutputStreamOverStream& operator=(OutputStreamOverStream&&) & noexcept = default;
    };
    struct RandomAccessStream
    {
        RandomAccessStream() = delete;
        static auto CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination);
        static auto CopyAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination, uint64_t bytesToCopy);
        static auto CopyAndCloseAsync(Windows::Storage::Streams::IInputStream const& source, Windows::Storage::Streams::IOutputStream const& destination);
    };
    struct __declspec(empty_bases) RandomAccessStreamOverStream : Windows::Storage::Streams::IRandomAccessStream
    {
        RandomAccessStreamOverStream(std::nullptr_t) noexcept {}
        RandomAccessStreamOverStream(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IRandomAccessStream(ptr, take_ownership_from_abi) {}
        RandomAccessStreamOverStream(RandomAccessStreamOverStream const&) noexcept = default;
        RandomAccessStreamOverStream(RandomAccessStreamOverStream&&) noexcept = default;
        RandomAccessStreamOverStream& operator=(RandomAccessStreamOverStream const&) & noexcept = default;
        RandomAccessStreamOverStream& operator=(RandomAccessStreamOverStream&&) & noexcept = default;
    };
    struct __declspec(empty_bases) RandomAccessStreamReference : Windows::Storage::Streams::IRandomAccessStreamReference
    {
        RandomAccessStreamReference(std::nullptr_t) noexcept {}
        RandomAccessStreamReference(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Storage::Streams::IRandomAccessStreamReference(ptr, take_ownership_from_abi) {}
        RandomAccessStreamReference(RandomAccessStreamReference const&) noexcept = default;
        RandomAccessStreamReference(RandomAccessStreamReference&&) noexcept = default;
        RandomAccessStreamReference& operator=(RandomAccessStreamReference const&) & noexcept = default;
        RandomAccessStreamReference& operator=(RandomAccessStreamReference&&) & noexcept = default;
        static auto CreateFromFile(Windows::Storage::IStorageFile const& file);
        static auto CreateFromUri(Windows::Foundation::Uri const& uri);
        static auto CreateFromStream(Windows::Storage::Streams::IRandomAccessStream const& stream);
    };
}
#endif