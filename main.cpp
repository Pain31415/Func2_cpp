#include "func.h"
#include <iostream>

using namespace std;

int main() {
    int height, width;

    // Ввести висоту прямокутника
    cout << "Enter the height of the rectangle: ";
    cin >> height;

    // Ввести ширину прямокутника
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    printRectangle(height, width); // Виклик функції для відображення прямокутника
    return 0;
}