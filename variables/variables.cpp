#include <iostream>

int main(){
    // whole number
    int x = 5;
    int y = 6;
    int sum = x + y;
    std::cout << sum << '\n';

    // including decimal
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    std::cout << price << '\n';

    // single character
    char grade = 'A';
    char initial = 'C';
    char currency = '$';
    std::cout << initial << '\n';

    // true or false
    bool student = false;
    bool power = true;
    std::cout << power << '\n';

    // string (sequence of text)
    std::string name = "Flavio";
    std::cout << "hello! My name is " << name << '\n';
    
    return x;
}