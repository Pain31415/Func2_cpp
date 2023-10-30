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
double power(double base, int exponent) {
    double result = 1.0;

    if (exponent >= 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    }
    else {
        for (int i = 0; i < -exponent; i++) {
            result /= base;
        }
    }

    return result;
}