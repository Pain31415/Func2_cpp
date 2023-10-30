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
int sumInRange(int a, int b) {
    int sum = 0;
    int start = (a < b) ? a : b;
    int end = (a < b) ? b : a;

    for (int i = start + 1; i < end; i++) {
        sum += i;
    }

    return sum;
}