#include "func.h"
#include <iostream>

using namespace std;

int main() {
    int height, width;

    // ������ ������ ������������
    cout << "Enter the height of the rectangle: ";
    cin >> height;

    // ������ ������ ������������
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    printRectangle(height, width); // ������ ������� ��� ����������� ������������
    return 0;
}