#include "func.h"
#include <iostream>
#include <vector>

using namespace std;

void printRectangle() {
    
}
void showTriangle() {

}
void showCircle() {

}
void showSquare() {

}
bool isPerfect(int number) {
    int sum = 1;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            if (i * i != number) {
                sum = sum + i + number / i;
            }
            else {
                sum = sum + i;
            }
        }
    }
    return sum == number && number != 1;
}

std::vector<int> findPerfectNumbers(int start, int end) {
    std::vector<int> perfectNumbers;
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            perfectNumbers.push_back(i);
        }
    }
    return perfectNumbers;
}