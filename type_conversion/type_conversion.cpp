#include <iostream>

int main() {
    double x = (int) 3.14;
    std::cout << x << '\n';

    char y = 100;
    std::cout << y << '\n';

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;
    std::cout << score << "%";


    return 0;
}