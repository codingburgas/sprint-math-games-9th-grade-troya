#include <iostream>
#include "../include/mainMenu.h"
#include "../include/whiteRabbit.h"
using namespace std;

void levelOne(); //Declaration of function for level 1
void displayMathProblem(); //Function declaration for math problem
void displayHint(int hintNumber); //Function declaration for hints


void whiteRabbit()
{
	cout << "And thus, your journey begins. You find yourself in a land both familiar and unfamiliar, a twisted reflection of Wonderland—one where nothing seems entirely as it should be, where whispers creep from behind the trees, and where every turn seems to lead you deeper into the unknown." << endl << endl;

	cout << "Are you sure you want to continue down this path...? (Yes/No):   ";

	string choice;/*Player will choose weather they want to continue playing or not
	the story of the game*/

	cin >> choice;

	if (choice == "No")
	{
		cout << "Guess you'll stay here forever and ever, and ever, and ever..." << endl;
	}
	else if (choice == "Yes")
	{
		levelOne();
	}
	else
	{
		cout << "Invalid chice please write Yes or No" << endl;
	}
}

//Defining levelone()
void levelOne()
{
	string username = "Ulvie";
	cout << "Oh look, isn't that the white rabbit. Let's see if we can get their help..." << endl << endl;

	cout << "As you approached the white rabbit you noticed he was in a big rush." << endl << endl << endl;

	cout << username << ": Hey Mr. White Rabbit. Can I-" << endl;

	cout << "White Rabbit: There's no time. There's no time, I need to solve this quickly" << endl << "There's no time." << endl;

	cout << username << ": Wait, wait hold on.. what's going on.." << endl;

	cout << "White Rabbit: The Queen of Hearts she's gonna kill me, she's gonna kill me... She gave me this math equation..." << endl;

	cout << username << ": Wai-... What math equation" << endl;

    mathFunction();

}

// Main function
void mathFunction() {
    string answer;         // User's answer
    int hintRequest;       // User's hint request
    int hintCounter = 1;   // Hint counter

    // Display math problem and rabbit art
    cout << "Math Problem:\n\n";
    displayMathProblem();

    // Loop to show hints
    while (hintCounter <= 3) {
        cout << "\nPress " << hintCounter << " to reveal Hint " << hintCounter << ", or type '0' to skip: ";
        cin >> hintRequest;

        if (hintRequest == hintCounter) {
            displayHint(hintCounter);
            hintCounter++;
        }
        else if (hintRequest == 0) {
            break;
        }
        else {
            cout << "Invalid input. Try again.\n";
        }
    }

    // Get and check answer
    cout << "\nAnswer: ";
    cin >> answer;

    if (answer == "5" || answer == "five" || answer == "Five") {
        cout << "\nCorrect! The last digit is 5.\n";
    }
    else {
        cout << "\nOops! The correct answer is 5.\n";
    }
}

// Display math problem
void displayMathProblem() {
    cout << "5. What is the last digit of the equation (5^5 + 2021)(5^10 + 2023)(5^15 + 2027)?\n";
    cout << "   A) 1      B) 5      C) 6      D) 8      E) 9\n\n";
}

// Display hints
void displayHint(int hintNumber) {
    switch (hintNumber) {
    case 1:
        cout << "\nHint 1: Focus on the last digit of each term.\n";
        break;
    case 2:
        cout << "\nHint 2: Find the last digit before multiplying.\n";
        break;
    case 3:
        cout << "\nHint 3: Powers of 5 always end in 5.\n";
        break;
    default:
        cout << "\nNo more hints.\n";
    }
}
