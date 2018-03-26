/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	PlayAgain.cpp
	Purpose:	This program demonstrates how a while loop works by asking the user a simple yes/no question

*/

#include <iostream>
using namespace std;

int main() 
{
	char again = 'y';//declare the character "again" and assign it "y" for yes
	while (again == 'y')//this while loop is execute as long as "again" is equal to "y" for yes
	{
		//the next two lines inform the player that they have played an exciting game and ask if they would like to play again
        cout << "\n**Played an exciting game**";
		cout << "\nDo you want to play again? (y/n): ";
		cin >> again;//the user inputs either "y" for yes or "n" for no
	}

	cout << "\nOkay, bye.";//if "n" is inputed by the user the while loop becomes false and this line is printed

    cin.get();
    cin.get();
    return 0;//ends program
}
