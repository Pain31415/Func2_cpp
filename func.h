#include <iostream>
#include <string>

using namespace std;

void printRectangle();
void showTriangle();
void showCircle();
void showSquare();
enum class CardSuit {
    SPADES,
    HEARTS,
    DIAMONDS,
    CLUBS
};

enum class CardValue {
    ACE,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

bool isValidCard(const std::string& card);
void displayCard(const std::string& card);