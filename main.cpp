#include "func.h"
#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a six-digit number: ";
    cin >> number;

    if (isLuckyNumber(number)) {
        cout << "The number is a lucky number!" << endl;
    }
    else {
        cout << "The number is not a lucky number." << endl;
    }

    return 0;
}