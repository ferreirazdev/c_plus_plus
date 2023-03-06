#include <iostream>

int main() {
    int students = 20;

    std::string name;
    std::cout << "tell me your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "hello " << name;
    return 0;
}