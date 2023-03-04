#include <iostream>

namespace fisrt{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    using namespace fisrt;

    std::cout << x << '\n';
    std::cout << second::x;

    return 0;
}