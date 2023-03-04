#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
using text_t = std::string ;
using number_t = int;

int main() {

    text_t fisrtName = "Flavio"; 
    number_t age = 21; 

    std::cout << "My name is " << fisrtName << '\n';
    std::cout << "and i'm " << age << '\n';

    return 0;
}