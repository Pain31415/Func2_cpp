#include "func.h"
#include <iostream>

using namespace std;

int main() {
    int num;

    std::cout << "Enter a number to check if it's prime: ";
    std::cin >> num;

    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    }
    else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}