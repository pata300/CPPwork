/*

	Programmer:	P. Griffin
	Date:		4/6/2017
	Filename:	PGriffin_ClassPart5_instructions.cpp
	Purpose:	Demonstrates the use of functions by printing out simple instructions
	
*/

#include <iostream>

using namespace std;

void instructions();//declare/prototype instructions() which returns nothing making it void

int main()//main() starts
{
    instructions();//call instructions()

    cin.get();
    return 0;//ends program
}

void instructions()//define instruction()
{
    cout << "Welcome to the most fun you've ever had with text!\n\n";//prints two lines
    cout << "Here's how to play the game...\n";
}


