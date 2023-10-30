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
    // Додати логіку перевірки правильності введених даних
    // Наприклад, перевірити чи введена карта має правильний формат або чи є вона в списку доступних карт
    // Повернути true, якщо карта є допустимою, інакше - false
    return true; // Поки що повертаємо true як псевдо-валідацію
}

void displayCard(const std::string& card) {
    if (isValidCard(card)) {
        std::cout << "Your card is: " << card << std::endl;
    }
    else {
        std::cout << "Invalid card. Please enter a valid card." << std::endl;
    }
}