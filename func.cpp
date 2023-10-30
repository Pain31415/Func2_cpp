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
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}