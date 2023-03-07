#include <iostream>

void happyBirthday(std::string name, int age_count) {
    std::cout << age_count << " Happy Birthday to you, " << name << "!\n";
} 

int main () {
    int age;
    std::string name;

    std::cout << "Whats your name?\n";
    std::getline(std::cin >> std::ws, name);
    
    std::cout << "How old are you turning?\n";
    std::cin >> age;

    for (int i = 1; i <= age; i++) {    
        happyBirthday(name, i);
    }

    return 0;
}