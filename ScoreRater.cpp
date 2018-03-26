/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	ScoreRater.cpp
	Purpose:	This program demonstrates how if statements work and how nested if statements work

*/

#include <iostream>
using namespace std;

int main() 
{
	if (true)//demonstrates that if statements always execute when true
	{
		cout << "This is always displayed.\n\n";
	}

	if (false)//demonstrates that if statements never execute when false
	{
		cout << "This is never displayed.\n\n";
	}

	int score = 1000;//declare an int named score and assign it 1000

	if (score)//this if statement will execute as long as you score more than zero
	{
		cout << "At least you didn't score zero.\n\n";//prints to the use informing them they scored more than zero
	}
	
	if (score >= 250)//this if statement executes if "score" is greater than or equal to 250
	{
        cout << "You scored 250 or more. Decent.\n\n";//prints to user; congrats on 250 or more
	}

    if (score >= 500)//this if statement executes if "score" is greater than or equal to 500
    {
        cout << "You scored 500 or more. Nice.\n\n";//prints to user; congrats on 500 or more

        if (score >= 1000)//nested if statement, executes if "score" is greater than or equal to 1000
		{
            cout << "You scored 1000 or more. Impressive!\n";//prints to user; impressive! more than or equal to 1000
		}
    }

    cin.get();
    return 0;//returns 0 to main(); ends program
}

