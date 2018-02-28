/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	MenuChooser.cpp
	Purpose:	This program demonstrates how the switch statement works through a simple menu system

*/

#include <iostream>
using namespace std;

int main() 
{
	//the following 4 lines prints to the user; displays which numbers should be typed in for desired outcome
    cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";

	int choice;//declare the in "choice"
	cout << "Choice: ";//ask user for their "choice", those being 1-3
	cin >> choice;//assigns user input to "choice"

	switch (choice)//choice is tested in the switch statement
	{
		case 1:	//if 1 is typed
			cout << "You picked Easy.\n";//user is informed of picking easy
			break;//the switch statement exits
		case 2:	//if 2 is typed
			cout << "You picked Normal.\n";//user is informed of picking normal
			break;//the switch statement exits
		case 3:	//if 3 is typed
			cout << "You picked Hard.\n";//user is informed of picking hard
			break;//the switch statement exits
		default://if an invalid value is entered
			cout << "You made an illegal choice.\n";//user is informed of illegal choice
	}

    cin.get();
    cin.get();
    return 0;//ends program
}
