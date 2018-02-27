/*

	Programmer:	P. Griffin
	Date:		2/2/2017
	Filename:	GameStats.cpp
	Purpose:	This program demonstrates types and type modifiers

*/

#include <iostream>
using namespace std;

int main()
(

	//initiate variables
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;

	//assign variables
	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

	//print out variables on screen
	cout << "\nscore: "		<< score << endl;
	cout << "distance: "		<< distance << endl;
	cout << "playAgain: "		<< playAgain << endl;
	cout << "lives: "		<< lives << endl;
	cout << "aliensKilled: "		<< aliensKilled << endl;
	cout << "engineTemp: "		<< engineTemp << endl;

	//initiate a new int "fuel" and have the using assign it
	int fuel;
	cout << "\nHow much fuel?";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;

	return 0;

)