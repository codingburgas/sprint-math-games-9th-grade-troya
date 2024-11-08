#include <iostream>
#include<cstring>
#include "../include/mainMenu.h"
using namespace std;

void mainMenu() 
{


    // Design of Menu
    cout << "                ----------------------------------------------------------------------------------------------------------------------------------------                " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                            ----------------------------------------------------------------------------                                    " << endl;
    cout << "                                           |                                                                            |                                   " << endl;
    cout << "                                           |                          Solving adventures                                |                                   " << endl; // title
    cout << "                                           |                          ------------------                                |                                   " << endl;
    cout << "                                           |                            In wonderland                                   |                                   " << endl;
    cout << "                                           |                                                                            |                                   " << endl;
    cout << "                                            ----------------------------------------------------------------------------                                    " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                     ----------------------                                                              " << endl;
    cout << "                                                                    |        1.Start       |                                                              " << endl; // Start game
    cout << "                                                                     ----------------------                                                              " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                     ----------------------                                                              " << endl;
    cout << "                                                                    |       2. Story       |                                                             " << endl; // Start story
    cout << "                                                                     ----------------------                                                              " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                     ----------------------                                                              " << endl;
    cout << "                                                                    |       3. Credits     |                                                             " << endl; // Credits for the developers
    cout << "                                                                     ----------------------                                                              " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "                                                                                                                                                                        " << endl;
    cout << "              ----------------------------------------------------------------------------------------------------------------------------------------                          ";




 

}
void functionMenu()
{
    cout << endl;
    cout << endl;
    string username; //declaration of string username 
    cout << "Please enter your username: ";
    cin >> username; //enter username
    cout << "To Start press 1" << endl; //explanation of what is going to happen
    cout << "To read Story press 2" << endl;
    cout << "To see Credits press 3" << endl;
    int choice; //declaration of choice
    cin >> choice;
    if (choice == 1)
    {
        cout << "White Rabbit"; //needs to be worked on
    }
    else if (choice == 2)
    {
        //the story of the game
        cout << "You find yourself in a strange and twisted version of reality, a place that feels like a memory hidden just below the surface of your mind, where logic twists, turns, and tangles. Shadows flit at the edges of your vision, and a distant clock ticks with a rhythm that both pulls you forward and fills you with an uncomfortable sense of urgency." << endl << endl;

        cout << "It began innocently enough. A late night, a strange sense of restlessness, and the odd message that popped up on your screen: " << endl << endl;

        cout << "Curiosity opens many doors, but some paths are better left untraveled..." << endl << endl;

        cout << "Curiosity got the better of you. You clicked the link, and everything went black. When the world around you regained form, you weren’t in your room anymore. You were… somewhere else. The air is thick with fog, the ground is soft and shifting beneath your feet." << endl << endl;

        cout << "A voice echoes in the darkness." << endl << endl;

        cout << "Welcome, " << username << ". Time is ticking, and you're already late..." << endl << endl;
         
        cout << "And thus, your journey begins. You find yourself in a land both familiar and unfamiliar, a twisted reflection of Wonderland—one where nothing seems entirely as it should be, where whispers creep from behind the trees, and where every turn seems to lead you deeper into the unknown." << endl;
    }
    else if (choice == 3)
    {
        //needs to add credits
    }
    else
    {
        cout << "Not a valid value. Please try again. ";
    }
}