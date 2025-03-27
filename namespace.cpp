#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}
int main() {
    int x = 0;  //Or there we can use (using namespace ...) For example: "using namespace first" → and we don't need to write first::

    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    std::cout << x << '\n';
}