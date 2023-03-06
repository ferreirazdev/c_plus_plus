#include <iostream>

int main() {
    int students = 20;

    students = students + 1;
    std::cout << students << '\n';
    
    students+=10;
    std::cout << students << '\n';

    students--;
    std::cout << students << '\n';
    
    students *= 4;
    std::cout << students << '\n';

    students /= 2;
    std::cout << students << '\n';

    int remainder = students % 2;
    std::cout << remainder << '\n';

    return 0;
}