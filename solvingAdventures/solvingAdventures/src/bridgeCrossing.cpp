#include <iostream>
#include <string>
#include <algorithm>
#include "../include/bridgeCrossing.h"

using namespace std;

void bridge() {
    // Chosen word to be guessed by the user
    string originalWord = "stairs";

    // Create a backwards version of the chosen word
    string reversedWord = originalWord;
    reverse(reversedWord.begin(), reversedWord.end());

    // Width of the space to place the word (30 characters for the bridge width)
    int bridgeWidth = 30;
    int wordLength = reversedWord.length();

    // Calculate spaces needed to center the word
    int spacesBefore = (bridgeWidth - wordLength) / 2;
    int spacesAfter = bridgeWidth - wordLength - spacesBefore;

    // Displaying the bridge structure with the reversed word centered
    cout << "     __________________________      \n";
    cout << "    |                          |     \n";
    cout << "  |";

    // Print the spaces before the word
    for (int i = 0; i < spacesBefore; i++) {
        cout << " ";
    }

    // Print the reversed word
    cout << reversedWord;

    // Print the spaces after the word
    for (int i = 0; i < spacesAfter; i++) {
        cout << " ";
    }

    cout << "|\n";
    cout << "    |                          |\n";
    cout << "     --------------------------       \n";
    cout << "            |        |                \n";
    cout << "           /          \\               \n";
    cout << "          /            \\              \n";
    cout << "         /              \\             \n";
    cout << "        /________________\\            \n";
    cout << "       |                  |           \n";
    cout << "       |__________________|           \n";
    cout << "\n";

    // Blank for the user to guess the original word
    string userGuess;
    cout << "Guess the original word: ";
    cin >> userGuess;

    // Check if the guess is correct
    if (userGuess == originalWord) {
        cout << "Congratulations! You guessed the word correctly: " << originalWord << "!\n";
    }
    else {
        cout << "Sorry, that's incorrect. The correct word was: " << originalWord << ".\n";
    }
}
