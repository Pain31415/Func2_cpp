#include "func.h"
#include <iostream>

using namespace std;

int main() {
    int num;

    std::cout << "Enter a number to find its factorial: ";
    std::cin >> num;

    int result = factorial(num);
    std::cout << "Factorial of " << num << " is: " << result << std::endl;

    return 0;
}