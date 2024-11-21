#include <iostream>
#include "../include/queenOfHearts.h"
using namespace std;

void queenOfHearts()
{
    cout << "As you walk past the bridge, you realize you should find something related to hearts. " << endl;
    cout << "You wander around the forest and suddenly a huge castle appears in front of you. " << endl;
    cout << "You really want to return home, so you decide to get into the castle and find a way out of this crazy world. " << endl;
    cout << "As you walk in, two doors appear in front of you with a sign that says 'You should choose only one'. " << endl << endl;
    cout << "Are you ready for another adventure? (Yes/No) ";

    string choice;

    // User chooses to continue or not
    while (true)
    {
        cin >> choice;

        if (choice == "No" || choice == "no")
        {
            cout << "Well, guess you'll be trapped forever..." << endl;
            break; // Exit the loop and end the adventure
        }
        else if (choice == "Yes" || choice == "yes")
        {
            doorsOneAndTwo();
            break; // Exit the loop after finishing `doors`
        }
        else
        {
            cout << "Invalid input! Please try again: ";
        }
    }
}
//function for the doors number 1 and 2
void doorsOneAndTwo()
{
    cout << endl << "      ______________________________________________________________________________________________________" << endl << endl;
    cout << endl << "            _________________________                          _________________________" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |             .           |                        |           ...           |" << endl;
    cout << "            |            ..           |                        |          .   .          |" << endl;
    cout << "            |           . .           |                        |             .           |" << endl;
    cout << "            |             .           |                        |            .            |" << endl;
    cout << "            |           .....         |                        |          ......         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                     _   |                        |   _                     |" << endl;
    cout << "            |                    |_|  |                        |  |_|                    |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |_________________________|                        |_________________________|" << endl;
    cout << "           -                           -                      -                            - " << endl;
    cout << "          -                             -                   -                               -" << endl;
    cout << "        -                                -                -                                  -" << endl;
    cout << "      ______________________________________________________________________________________________________" << endl;

    cout << "Try your chance. Door 1 or Door 2? ";
    int choice;
    string answer;

    while (true)
    {
        //user writes their choice
        cin >> choice;

        //what happens if the user choose 1
        if (choice == 1)
        {
            cout << "Solve this equation and say the result out loud." << endl;
            cout << "4*k*y*1/8*e*2 = ";
            cin >> answer;

            //check if the user guess right the word
            if (answer == "key")
            {
                cout << "Remember this word. You will need it to get out." << endl;
                doorsThreeAndFour();
                break; // Exit the loop after success
            }
            else
            {
                cout << "Your answer is wrong. The guard caught you and locked you up in a cage." << endl;
                break; // End the game
            }
        }
        else if (choice == 2)
        {
            cout << "You chose the wrong door. You will stay in this world forever..." << endl;
            break; // End the game
        }
        else
        {
            cout << "Invalid input! Please try again: ";
        }
    }
}
//function for the doors number 3 and 4
void doorsThreeAndFour()
{
    cout << "It seems like youre getting closer to the exit and your freedom! But yet an another set of door greets you." << endl << endl;
    cout << endl << "      ______________________________________________________________________________________________________" << endl << endl;
    cout << endl << "            _________________________                          _________________________" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |            ...          |                        |          .   .          |" << endl;
    cout << "            |               .         |                        |          .   .          |" << endl;
    cout << "            |             ..          |                        |          .....          |" << endl;
    cout << "            |               .         |                        |              .          |" << endl;
    cout << "            |            ...          |                        |              .          |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                     _   |                        |   _                     |" << endl;
    cout << "            |                    |_|  |                        |  |_|                    |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |_________________________|                        |_________________________|" << endl;
    cout << "           -                           -                      -                            - " << endl;
    cout << "          -                             -                   -                               -" << endl;
    cout << "        -                                -                -                                  -" << endl;
    cout << "      ______________________________________________________________________________________________________" << endl;
    cout << endl << "Which door would you like to open? ";
    int choice;
    cin >> choice;
    //what happens if user's choice is 3
    if (choice == 3)
    {
        cout << "yea you lose :(";
    }
    //what happens if the user's choice is 4
    else if (choice == 4)
    {
        cout << "2*f*1/4*o*2*r = ";
        string answer;
        cin >> answer;

        //check if the user's answer is right
        if (answer == "for")
        {
            cout << "That's right remember that word too! ";
            doorsFiveAndSix();
        }
        else
        {
            cout << "That's wrong. You loose. :(";
        }
    }
    else {
        cout << "Incorrect input. Try again";
        cin >> choice;
    }

}
//function for the doors number 5 and 6
void doorsFiveAndSix()
{
    cout << "It seems like youre getting closer to the exit and your freedom! But yet an another set of door greets you." << endl << endl;
    cout << endl << "      ______________________________________________________________________________________________________" << endl << endl;
    cout << endl << "            _________________________                          _________________________" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |           ...           |                        |             .           |" << endl;
    cout << "            |           .             |                        |            .            |" << endl;
    cout << "            |           ...           |                        |           ...           |" << endl;
    cout << "            |              .          |                        |          .   .          |" << endl;
    cout << "            |           ...           |                        |           ...           |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                     _   |                        |   _                     |" << endl;
    cout << "            |                    |_|  |                        |  |_|                    |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |                         |                        |                         |" << endl;
    cout << "            |_________________________|                        |_________________________|" << endl;
    cout << "           -                           -                      -                            - " << endl;
    cout << "          -                             -                   -                               -" << endl;
    cout << "        -                                -                -                                  -" << endl;
    cout << "      ______________________________________________________________________________________________________" << endl;
    cout << endl << "Which door would you like to open? ";
    int choice;
    cin >> choice;

    //what happens if the user's choice is 6
    if (choice == 6)
    {
        string answer;
        cout << "3*w*o*n*1/9*d*e*r*3*l*a*n*d: ";
        cin >> answer;

        //check if the user's answer is right
        if (answer == "wonderland")
        {
            string phrase;
            cout << "That is right! Now make a phrase from all the words in previous doors.(write them without space): ";
            cin >> phrase;
            if (phrase == "keyforwonderland")
            {
                cout << "Congratulations!!! You survive and win the game!";
            }
            else
            {
                cout << "Sorry, but you loose.";
            }
        }
        else
        {
            cout << "oh no :( so close";
        }
    }

    //what happens if the user's choice is 5
    else if (choice == 5)
    {
        cout << "you died woopsiess";
    }
    else {
        cout << "Incorrect input. Try again";
        cin >> choice;
    }
}