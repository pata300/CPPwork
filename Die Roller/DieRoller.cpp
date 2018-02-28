/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	DieRoller.cpp
	Purpose:	This program demonstrates a random number generator by simulating a die roll

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));//srand is used to seed the random number generator

	int randomNumber = rand();//the int "randomNumber" is declared and assigned to the rand() function; this is where the random numbers are stored

	int die = (randomNumber % 6) + 1;//the int "die" is declared and assigned to the modulus of any positive number divided by 6 plus 1; can only be numbers between 1 and 6
	cout << "You rolled a " << die << endl;//the random number assigned to "die" is printed

    cin.get();
    return 0;//ends program
}
