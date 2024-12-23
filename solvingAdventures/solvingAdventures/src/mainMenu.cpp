#include <iostream>
#include <string>
#include "../include/whiteRabbit.h"
#include "../include/mainMenu.h"
using namespace std;

void mainMenu() 
{
    // Design of Menu
    cout << "                              ---------------------------------------------------------------------------------------- " << endl;
    cout << "                             |       ----------------------------------------------------------------------------     |" << endl;
    cout << "                             |      |                                                                            |    |" << endl;
    cout << "                             |      |                           Solving adventures                               |    |" << endl; // title
    cout << "                             |      |                           ------------------                               |    |" << endl;
    cout << "                             |      |                             In wonderland                                  |    |" << endl;
    cout << "                             |      |                                                                            |    |" << endl;
    cout << "                             |       ----------------------------------------------------------------------------     |" << endl;
    cout << "                             |                                ----------------------                                  |" << endl;
    cout << "                             |                                      1.Start                                           |" << endl; // Start game
    cout << "                             |                                ----------------------                                  |" << endl;
    cout << "                             |                                ----------------------                                  |" << endl;
    cout << "                             |                                      2. Story                                          |" << endl; // Start story
    cout << "                             |                                ----------------------                                  |" << endl;
    cout << "                             |                                ----------------------                                  |" << endl;
    cout << "                             |                                      3. Credits                                        |" << endl; // Credits for the developers
    cout << "                             |                                ----------------------                                  |" << endl;
    cout << "                              ---------------------------------------------------------------------------------------- ";

    functionMenu();

}
void functionMenu()
{
    cout << endl;
    string username; //Declaration of string username 

    cout << "Please enter your username: ";

    getline(cin, username); //Enter username

    cout << "To Start press 1" << endl; //Start of level 1 (whiteRabbit)

    cout << "To read Story press 2" << endl; //Explanation of what is going to happen
    cout << "To see Credits press 3" << endl; //Creadits to all the developers
    int choiceOne; 
    cin >> choiceOne; //declaration of choice
    if (choiceOne == 1)
    {
        //Will send you directly to level 1
        whiteRabbit();
    }
    else if (choiceOne == 2)
    {
        cout << endl << endl;

        //the story of the game
        cout << "You find yourself in a strange and twisted version of reality, a place that feels like a memory hidden just below the surface of your mind, where logic twists, turns, and tangles. Shadows flit at the edges of your vision, and a distant clock ticks with a rhythm that both pulls you forward and fills you with an uncomfortable sense of urgency." << endl << endl;

        cout << "It began innocently enough. A late night, a strange sense of restlessness, and the odd message that popped up on your screen: " << endl << endl;

        cout << "Curiosity opens many doors, but some paths are better left untraveled..." << endl << endl;

        cout << "Curiosity got the better of you. You clicked the link, and everything went black. When the world around you regained form, you weren�t in your room anymore. You were� somewhere else. The air is thick with fog, the ground is soft and shifting beneath your feet." << endl << endl;

        cout << "A voice echoes in the darkness." << endl << endl;

        cout << "Welcome, " << username << ". Time is ticking, and you're already late..." << endl << endl;

        whiteRabbit(); //Directly starting game after the back-story
    }
    else if (choiceOne == 3)
    {
        cout << "Ulvie Mustafa (9g) - Scrum trainer" << endl;
        cout << "Created working environment then she did the backend of level 1 and 2. Finally she did the presentation." << endl;
        cout << endl;
        cout << "Sheniz Ali (9b) - Backend developer" << endl;
        cout << "Made the main menu basics then she made backend of level 3 and 4. Finally she did the documentation." << endl;
        cout << endl;
        cout << "Martin Dimarov (9v) - Frontend developer" << endl;
        cout << "Made the main menu details then he made the frontend of level 1 and 3 and also helped for backend level 3." << endl;
        cout << endl;
        cout << "Ameliia Dorosh (9g) - Designer" << endl;
        cout << "Made the design of all the levels and frontend of level 2 and 4 then she made the logos." << endl;

        whiteRabbit();

    }
    else
    {
        cout << "Not a valid value. Please try again. ";
    }
}