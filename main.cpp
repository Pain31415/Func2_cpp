#include "func.h"
#include <iostream>

using namespace std;

int main() {
    string userCard;

    cout << "Enter your card (e.g., 'Ace of Spades', 'King of Hearts', etc.): ";
    getline(cin, userCard);

    displayCard(userCard);

    return 0;
}