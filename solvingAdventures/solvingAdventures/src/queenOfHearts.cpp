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
        cin >> choice;

        if (choice == 1)
        {
            cout << "Solve this equation and say the result out loud." << endl;
            cout << "4*k*y*1/8*e*2 = ";
            cin >> answer;

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
    if (choice == 3)
    {
        cout << "yea you lose :(";
    }
        else if (choice == 4)
    {
        cout << "<math equation>";
        int a;
        cin >> a;
        //replace with mathematical question
        //formulate answer

        if (a == 0)
        {
            cout << "Right";
            doorsFiveAndSix();
        }
        else
        {
            cout << "Wrong";
        }
    }
        else {
        cout << "Incorrect input. Try again";
        cin >> choice;
    }

}
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

    if (choice == 6)
    {
        int a;
        cout << "solve this ";
        cin >> a;
        if (1 > 0)
        {
            cout << "woohoo you winnn";
        }
        else
        {
            cout << "oh no :( so close";
        }
    }
    else if (choice == 5)
    {
        cout << "you died woopsiess";
    }
    else {
        cout << "Incorrect input. Try again";
        cin >> choice;
    }
}