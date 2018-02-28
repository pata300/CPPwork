/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	ScoreRater3.0.cpp
	Purpose:	This program demonstrates how if else-if else statements work

*/

#include <iostream>
using namespace std;

int main() 
{
	int score;//declare the int "score"
	cout << "Enter your score: ";//ask user for input
	cin >> score;//assign input to "score"

    if (score >= 1000)//if "score is greater than or equal to 1000
	{
        cout << "You scored 1000 or more. Impressive!\n";//statement is printed to user
	}
	else if (score >= 500)//if "score" is less than 500 program will skip to next expression
	{
        cout << "You scored 500 or more. Nice.\n";//if true, statement is printed to user
	}
	else if (score >= 250)//using another "else-if" clause, if score is less than 250 program will skip to last else clause
	{
        cout << "You scored 250 or more. Decent.\n";//if true, statement is printed to user
	}
	else//if all other expressions are false this statement is printed
	{
		cout << "You scored less than 250. Nothing to brag about.\n";
	}

    cin.get();
    cin.get();
    return 0;//ends program
}

