/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	GuessMyNumber.cpp
	Purpose:	This program demonstrates a random number generator this time through a guessing game where the user must guess a number from 1 to 100

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));//srand is used to seed the random number generator to the computer's current date and time

	int secretNumber = rand() % 100 + 1;//the int "secretNumber" is declared and assigned to the modulus of any positive number divided by 100 plus 1; can only be numbers between 1 and 100
	int tries = 0;//declare the int "tries" and assign it 0
	int guess;//declare the int "guess"
    
	cout << "\tWelcome to Guess My Number\n\n";//intro/title prints

	do//do loops while "guess" is not equal to "secretNumber"
	{
		cout << "Enter a guess: ";//ask user for guess
		cin >> guess;//assigns input to "guess"
		++tries;//increments "tries"

		if (guess > secretNumber)//if "guess" is greater than "secretNumber" user is told too high, else it skips
		{
			cout << "Too high!\n\n";
		}
		else if (guess < secretNumber)//if "guess" is less than "secretNumber" user is told too low, else it skips
		{
			cout << "Too low!\n\n";
		}
		else//if other expressions are false then the guess was right
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";//user is told of their success and how many tries it took them
		}

	} while (guess != secretNumber);//while is true while "guess" is not equal to "secretNumber"

    cin.get();
    cin.get();
    return 0;
}
