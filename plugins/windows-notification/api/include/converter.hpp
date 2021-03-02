#pragma once

#include <string>
#include <string_view>
#include <memory>
#include <type_traits>
#include <glib.h>

namespace glib
{
    template<typename T>
    struct deleter
    {
        static_assert(std::is_trivially_destructible_v<std::remove_extent_t<T>>);
        void operator()(gpointer const p) const
        {
            g_free(p);
        }
    };

    struct string_deleter
    {
        void operator()(GString* const s) const
        {
            if (s)
                g_string_free(s,TRUE);
        }
    };

    template<typename T>
    using unique_ptr = std::unique_ptr<T, deleter<T>>;
    using string_ptr = std::unique_ptr<GString, string_deleter>;
}

std::string wsview_to_str(std::wstring_view wstr);
glib::string_ptr wsview_to_gstr(std::wstring_view wstr);
glib::unique_ptr<gchar[]> wsview_to_cstr(std::wstring_view wstr);

[[deprecated("leaky")]] gchar* wsview_to_char(std::wstring_view wstr);

std::wstring sview_to_wstr(std::string_view str);
inline std::wstring gstr_to_wstr(const GString* const str)
{
    return sview_to_wstr({str->str, str->len});
}
