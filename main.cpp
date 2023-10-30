#include "func.h"
#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int result = max(num1, num2);
    std::cout << "The larger number is: " << result << std::endl;

    return 0;
}