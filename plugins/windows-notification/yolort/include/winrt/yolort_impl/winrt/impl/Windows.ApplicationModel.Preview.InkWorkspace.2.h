// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210122.3

#ifndef WINRT_Windows_ApplicationModel_Preview_InkWorkspace_2_H
#define WINRT_Windows_ApplicationModel_Preview_InkWorkspace_2_H
#include "winrt/impl/Windows.ApplicationModel.Preview.InkWorkspace.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Preview::InkWorkspace
{
    struct __declspec(empty_bases) InkWorkspaceHostedAppManager : Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager
    {
        InkWorkspaceHostedAppManager(std::nullptr_t) noexcept {}
        InkWorkspaceHostedAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager(ptr, take_ownership_from_abi) {}
        InkWorkspaceHostedAppManager(InkWorkspaceHostedAppManager const&) noexcept = default;
        InkWorkspaceHostedAppManager(InkWorkspaceHostedAppManager&&) noexcept = default;
        InkWorkspaceHostedAppManager& operator=(InkWorkspaceHostedAppManager const&) & noexcept = default;
        InkWorkspaceHostedAppManager& operator=(InkWorkspaceHostedAppManager&&) & noexcept = default;
        static auto GetForCurrentApp();
    };
}
#endif
