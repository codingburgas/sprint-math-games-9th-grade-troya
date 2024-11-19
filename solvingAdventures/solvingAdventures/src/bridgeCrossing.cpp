#include <iostream>
#include <string>
#include <algorithm>
#include "../include/bridgeCrossing.h"
#include "../include/queenOfHearts.h"

using namespace std;

void bridge() {
    cout << "The Cheshire Cat let you go on your way, giving you a map to the Wonder bridge." << endl << endl;
    cout << "---------------------------------------------------------------------------------" << endl << endl;
    cout << "As you walk you found a bridge that looked just like the Wonder bridge" << endl << endl;
    cout << "You try to pass the bridge, but it suddenly moves." << endl << endl;
    cout << "Wonder Bridge: Keyword pleaseee. - the bridge says" << endl << endl;
    cout << "After you've been throught all these things you weren't suprised even a bit" << endl << endl;
    cout << "You: Can I pass?" << endl << endl;
    cout << "Wonder Bridge: NO! Keyword please!!" << endl << endl;
    cout << "What could be the keyword... you thought, you were headed to the exit of this world, but where could the end be..." << endl << endl << endl;
    // Chosen word to be guessed by the user
    string originalWord = "hearts";

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
    cout << "    |";

    // Print the spaces before the word
    for (int i = 0; i < spacesBefore - 4; i++) {
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
        queenOfHearts();
    }
    else {
        cout << "Sorry, that's incorrect. The correct word was: " << originalWord << ".\n";
    }
}
