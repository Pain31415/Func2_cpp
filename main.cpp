#include "func.h"
#include <iostream>

using namespace std;

int main() {
    int num;

    std::cout << "Enter a number to calculate its cube: ";
    std::cin >> num;

    int result = cube(num);
    std::cout << "The cube of " << num << " is: " << result << std::endl;

    return 0;
}