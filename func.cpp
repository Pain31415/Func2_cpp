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
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        int result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}