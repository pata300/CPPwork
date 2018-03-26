/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	ScoreRater2.0.cpp
	Purpose:	This program demonstrates how if/else statements work

*/

#include <iostream>
using namespace std;

int main() 
{
	int score;//declare the int "score"
	cout << "Enter your score: ";//ask user for a number
	cin >> score;//assign input to "score"

    if (score >= 1000)//executes if "score" is greater than or equal to 1000
	{
        cout << "You scored 1000 or more. Impressive!\n";//prints to user
	}
	else//executes if less than 1000
	{
		cout << "You scored less than 1000.\n";//prints to user, informs that score is less than 1000
	}

    cin.get();
    cin.get();
    return 0;//ends program
}

