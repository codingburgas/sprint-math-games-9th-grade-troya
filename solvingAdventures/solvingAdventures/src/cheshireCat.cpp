#include <iostream>
#include <string>
#include <algorithm>
#include "../include/bridgeCrossing.h"
#include "../include/cheshireCat.h"

using namespace std;

void printFeedback(const string& guess, const string& secretWord) {
    for (size_t i = 0; i < guess.size(); ++i) {
        if (guess[i] == secretWord[i]) {
            cout << guess[i] << " "; // Correct letter in the correct position
        }
        else if (secretWord.find(guess[i]) != string::npos) {
            cout << "* "; // Correct letter in the wrong position
        }
        else {
            cout << "  "; // Incorrect letter
        }
    }
    cout << endl;
}

void appearance() {
    cout << "______________________________________________________________________________________________________________________________" << endl;
    cout << "                       |\                      /|       " << endl;
    cout << "                       /\                     /\       " << endl;
    cout << "                      /  \\                   /  \\ " << endl;
    cout << "                     |    \\                 /    |" << endl;
    cout << "                     |      \\              /     |" << endl;
    cout << "                    /________\\             /_______\\ " << endl << endl;
    cout << "                         ___                 ___" << endl;
    cout << "                        / | \\              / | \\ " << endl;
    cout << "                       |  |  |            |  |  |" << endl;
    cout << "                       |  |  |            |  |  |" << endl;
    cout << "                        \\_|_/              \\_|_/" << endl;
    cout << "                     -\\__________________________/-" << endl;
    cout << "                       `\\_ \\   /\\ /\\  \\   \\  /_/`" << endl;
    cout << "                          `\\_\\/  \\/ \\/ \\ / _/`" << endl;
    cout << "                             `\\__________/`" << endl;
    cheshireCat();
}

void cheshireCat() {
    string choice;
    cout << "______________________________________________________________________________________________________________________________" << endl;
    cout << "After wandering around for hours, you come across a forest. Although something doesnt seem quite right about it..." << endl;
    cout << "You decide to take the risk and walk further into the endless trees and darkness. After walking for what felt like hours, you spot some light that seems to be the exit." << endl;
    cout << "Suddenly you bump into something. You closed your eyes before you bumped into whatever it was and fell to the ground from the impact. You hear a strange voice, which you can barely understand." << endl;
    cout << "???: Why H3ll0 th3r3! F4ncy s33!ng n3w f4c3s 4r0und h3r3!" << endl;
    cout << "Open your eyes? (Yes/No): ";
    while (true) {
        cin >> choice;
        transform(choice.begin(), choice.end(), choice.begin(), ::tolower); // Convert input to lowercase

        if (choice == "yes") {
            const string secretWord = "WLAND"; // The word to guess
            const int maxAttempts = 6; // Maximum number of attempts
            const size_t wordLength = secretWord.length();

            cout << "Guess the " << wordLength << "-letter word. You have " << maxAttempts << " attempts." << endl;

            for (int attempt = 1; attempt <= maxAttempts; attempt++) {
                cout << "Attempt " << attempt << ": ";
                string guess;
                cin >> guess;

                // Convert guess to uppercase for consistency
                transform(guess.begin(), guess.end(), guess.begin(), ::toupper);

                if (guess.length() != wordLength) {
                    cout << "Invalid guess! Please enter a " << wordLength << "-letter word." << endl;
                    attempt--; // Don't count invalid attempts
                    continue;
                }

                if (guess == secretWord) {
                    cout << "Congratulations! You guessed the word: " << secretWord << endl;
                    bridge();
                    return;
                }
                printFeedback(guess, secretWord);
            }

            cout << "Sorry, you've used all attempts! The word was: " << secretWord << endl;
            break; // End after the word guessing game
        }
        else if (choice == "no") {
            cout << "You refuse to open your eyes, but the Cheshire Cat appears in your subconscious anyway." << endl;
            break; // End the loop after the subconscious response
        }
        else {
            cout << "Invalid choice. Please type 'Yes' or 'No'." << endl;
        }
    }
}

