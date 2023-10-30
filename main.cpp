#include "func.h"
#include <iostream>

using namespace std;

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    bool result = isPositive(num);
    if (result) {
        std::cout << "The number is positive." << std::endl;
    }
    else {
        std::cout << "The number is not positive (zero or negative)." << std::endl;
    }

    return 0;
}