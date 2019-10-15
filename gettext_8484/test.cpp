#include <libintl.h>
#include <locale.h>
#ifdef _MSC_VER
#include <direct.h>
#define getcwd(a, b) _getcwd(a, b)
#else
#include <unistd.h>
#endif
#include <iostream>

int main()
{

    setlocale(LC_ALL, "");

    char cwd[256];
    getcwd(cwd, 255);

    std::cout << bindtextdomain("test", cwd) << '\n';
    std::cout << bind_textdomain_codeset("test", "UTF-8") << '\n';
    std::cout << textdomain("test") << '\n';

    std::cout << bind_textdomain_codeset("test", "GB2312") << '\n';
    std::cout << gettext("test\n");
}
