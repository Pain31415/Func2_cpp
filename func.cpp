#include "func.h"
#include <iostream>

using namespace std;

void printRectangle() {
    
}
void showTriangle() {

}
void showCircle() {

}
void showSquare() {

}
bool isLuckyNumber(int number) {
    string numStr = std::to_string(number);
    if (numStr.length() != 6) {
        return false;
    }

    int sumFirstHalf = 0;
    int sumSecondHalf = 0;

    for (int i = 0; i < 3; ++i) {
        sumFirstHalf += numStr[i] - '0';
        sumSecondHalf += numStr[i + 3] - '0';
    }

    return sumFirstHalf == sumSecondHalf;
}