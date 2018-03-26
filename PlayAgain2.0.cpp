/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	PlayAgain2.0.cpp
	Purpose:	This program demonstrates a do loop by asking the user a simple yes/no question

*/

#include <iostream>
using namespace std;

int main() 
{
	char again;//declare character "again"
	do //do loops until "again" isn't "y" for yes
	{
		//the following two lines inform the user on an exciting game and ask if they want to play again
        cout << "\n**Played an exciting game**";
		cout << "\nDo you want to play again? (y/n): ";
		cin >> again;//user inputs "y" for yes or "n" for no, input is assigned to "again"
	} while (again == 'y');//while "again" is equal to "y" do continues to loop

	cout << "\nOkay, bye.";//when the loop ends this is printed to the screen

	cin.get();
	cin.get();
    return 0;//ends program
}
