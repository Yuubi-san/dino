#include <stringapiset.h>

#include "converter.hpp"

// Convert a wide Unicode string to an UTF8 string
char* wsview_to_char(const std::wstring_view wstr)
{
    return wsview_to_cstr(wstr).release();
}

template<typename String>
static String wsview_to(const std::wstring_view wstr)
{
    int final_size = WideCharToMultiByte(CP_UTF8, 0, wstr.data(), (int)wstr.size(), nullptr, 0, nullptr, nullptr);
    String strTo(final_size, '\0');
    WideCharToMultiByte(CP_UTF8, 0, wstr.data(), (int)wstr.size(), strTo.data(), final_size, nullptr, nullptr);
    return strTo;
}

std::string wsview_to_str(const std::wstring_view wstr)
{
    return wsview_to<std::string>(wstr);
}

glib::string_ptr wsview_to_gstr(const std::wstring_view wstr)
{
    struct adaptor
    {
        glib::string_ptr s;

        adaptor(const std::size_t sz, char /*ignored_fill*/)
            : s{g_string_sized_new(sz)}
        {
            g_string_set_size(s.get(), sz);
        }

        auto data() const { return s->str; }
        auto size() const { return s->len; }
    };
    return wsview_to<adaptor>(wstr).s;
}

glib::unique_ptr<gchar[]> wsview_to_cstr(const std::wstring_view wstr)
{
    struct adaptor
    {
        glib::unique_ptr<gchar[]> s;
        std::size_t sz;  // not counting the terminator

        adaptor(const std::size_t sz, char /*ignored_fill*/)
            : s{g_try_new(gchar, sz+1)}  // +1 for the terminator
            , sz{sz}
        {
            if (not s)
                throw std::bad_alloc{};
            s[sz] = '\0';
        }

        auto data() const { return s.get(); }
        auto size() const { return sz; }
    };
    return wsview_to<adaptor>(wstr).s;
}


// Convert an UTF8 string to a wide Unicode String
std::wstring sview_to_wstr(const std::string_view str)
{
    if(str.empty())
    {
        return std::wstring();
    }
    int final_size = MultiByteToWideChar(CP_UTF8, 0, str.data(), (int)str.size(), nullptr, 0);
    std::wstring wstrTo(final_size, 0);
    MultiByteToWideChar(CP_UTF8, 0, str.data(), (int)str.size(), wstrTo.data(), final_size);
    return wstrTo;
}
