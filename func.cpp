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
bool isValidCard(const std::string& card) {
    // ������ ����� �������� ����������� �������� �����
    // ���������, ��������� �� ������� ����� �� ���������� ������ ��� �� � ���� � ������ ��������� ����
    // ��������� true, ���� ����� � ����������, ������ - false
    return true; // ���� �� ��������� true �� ������-��������
}

void displayCard(const std::string& card) {
    if (isValidCard(card)) {
        std::cout << "Your card is: " << card << std::endl;
    }
    else {
        std::cout << "Invalid card. Please enter a valid card." << std::endl;
    }
}