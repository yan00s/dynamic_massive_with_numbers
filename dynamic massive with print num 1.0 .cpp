#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex exp("\\d+");
    std::smatch res;
    std::string str = "aboe3ddsa21d vsuv221sda 9s 21sad3s2a";

    while (regex_search(str, res, exp)) {
        std::cout << res[0] << std::endl;
        str = res.suffix();
    }
}