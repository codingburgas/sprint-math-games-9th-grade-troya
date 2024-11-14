#include <iostream>
#include "../include/cheshireCat.h"

using namespace std;

void mathFunction2()//make the math question
{

}
void appearance(){ // not sure what the problem here is, contant bojidar for assistance 
	cout << "                       |\                      /|       " << endl;
	cout << "                       /\                     /\       " << endl;
	cout << "                      /  \                   /  \ " << endl;
	cout << "                     |    \                 /    |" << endl;
	cout << "                     |      \              /     |" << endl;
	cout << "                    /________\             /_______\ " << endl << endl;
	cout << "                         ___                 ___" << endl;
	cout << "                        / | \              / | \ " << endl;
	cout << "                       |  |  |            |  |  |" << endl;
	cout << "                       |  |  |            |  |  |" << endl;
	cout << "                        \_|_/              \_|_/" << endl;
	cout << "                     -\__________________________/-" << endl;
	cout << "                       `\_ \   /\ /\  \   \  /_/`" << endl;
	cout << "                          `\_\/  \/ \/ \ / _/`" << endl;
	cout << "                             `\__________/`" << endl;

	}
void cheshireCat(){
	int choice;
	cout << "______________________________________________________________________________________________________________________________" << endl;
	cout << "      0\____________                                                                              ______/" << endl;
	cout << "                0  ``\__                                                                       /``0       0" << endl;
	cout << "        0         0     \                                                                     /`                       0  0" << endl;
	cout << "                        0`\                                                                 /`0   0 " << endl;
	cout << "   0                      ``\___                                                         /`                             0" << endl;
	cout << "    0           0            0 `---___                                                   |_-`0         0             0" << endl;
	cout << "                    0 0          0  0  \                                                / 0                  0" << endl;
	cout << "       0                               0|                                               |0 0          0" << endl;
	cout << "    0                             0     0\                                            /                   0               0" << endl;
	cout << "        0             0  0               0|                                          | 0          0" << endl;
	cout << "                   0                     /                                           \ 0       0                   0" << endl;
	cout << "                  0                     /                                             \                     0" << endl;
	cout << "     0                   0            0|                                               |0                0" << endl;
	cout << "                           0        0 /                                                 ``\0        0" << endl;
	cout << "                     0             0 /`                                                    ```\0 " << endl;
	cout << "0         0           0          0 /``                                                           `\__   0     0" << endl;
	cout << "_____________________________---`/`                                                                 `````----__________________" << endl;
	cout << "                |    /                                                                                               \           " << endl;
	cout << " |             |    /                                                                                                 \ "<< endl;
	cout << "  \             |  |                                                                                                   |    |  " << endl;
	cout << "   |               |                                                                                                   |         " << endl;
	cout << "          |        |                                                                                                   |" << endl;
	cout << "           |       |                                                                                                   |    |  " << endl;
	cout << "           |       `|                                                                                                  |`     |" << endl;
	cout << "                    `|                                                                                                 |`   |" << endl;
	cout << "                  | `|_                                                                                               |`   |" << endl;
	cout << "   |             |    `|                                                                                            _|`" << endl;
	cout << "                       `\                                                                                         _|`            |    " << endl;
	cout << "==================================--------_____________                           ______________________________/`              |" << endl;
	cout << "                                         1              =============================                            /``" << endl;
	cout << "              1                                                 1                          ``=========================---------/-__ " << endl;
	cout << endl << "                                      1                                                                          1           " << endl;
	cout << "                                                                                     1                                        " << endl;
	cout << "           1                                                                                             1                      " << endl << endl;
	cout << "______________________________________________________________________________________________________________________________" << endl;
	cout << "After wandering around for hours, you come across a forest. Although something doesnt seem quite right about it..." << endl;
	cout << "You decide to take the risk and walk further into the endless trees and darkness. After walking for what felt like hours, you spot some light that seems to be the exit." << endl;
	cout << "Suddenly you bump into something. You closed your eyes before you bumped into whatever it was and fell to the ground from the impact. You hear a strange voice, which you can barely understand." << endl;
	cout << "_________________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "???: Why H3ll0 th3r3! F4ncy s33!ng n3w f4c3s 4r0und h3r3!" << endl;
	cout << "_________________________________________________________________________________________________________________________________________________________________" << endl;
	cout << "Open your eyes?(Yes/No)"; // make the user write an answer
	cin >> choice;// make choice a char type and string
	if (choice == 1) //if user chooses yes, cheshire cat appears and asks them the question, if not then it forces them to open their eyes or shows up in their subconcious
	{
		appearance();
	}
	//make an if else for the user to choose yes or no
}
