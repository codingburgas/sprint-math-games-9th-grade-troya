#include <iostream>
#include "../include/mainMenu.h"
#include "../include/whiteRabbit.h"
using namespace std;

void levelOne(); //Declaration of function for level 1

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
}