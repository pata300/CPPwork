/*

	Programmer:	P. Griffin
	Date:		2/2/2017
	Filename:	GameStats2.0.cpp
	Purpose:	This program demonstrates different ways to increment variables

*/

#include <iostream>
using namespace std;

int main() {

	unsigned int score = 5000;
	cout << "score: " << score << endl;

	//demonstrates different ways to assign score to 100
	score = score + 100;
	cout << "score: " << score << endl;

	score += 100;
	cout << "score: " << score << endl;

	//demonstrates how incrementing works depending on where you place the ++
	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;

	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;

	lives = 3;
	bonus = lives++ * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;

	//deomonstrates integer wrap around
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;

	return 0;

}