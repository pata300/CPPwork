/*

	Programmer:	P. Griffin
	Date:		2/2/2017
	Filename:	GameAverage.cpp
	Purpose:	This program will ask the user for 3 game scores and give the average of those scores.

*/

#include <iostream>
using namespace std;

int main() {

	//here we declare score1, score2, score3 variables that will hold the values for the 3 game scores
	int score1, score2, score3;
	//the average varaible holds the value for the total of the 3 scores divided by 3
	int average = (score1 + score2 + score3) / 3;

	//we instruct the user to only use whole numbers & ask for the 3 scores in seperate lines
	cout << "Please enter all game scores as whole numbers!";
	cout << "Enter score of game 1.";
	cin >> score1;

	cout << "Enter score of game 2.";
	cin >> score2;

	cout << "Enter score of game 3.";
	cin >> score3;

	//we then output the average of the 3 scores
	cout << "The average of the 3 games are" << average << ".";

	return 0;

}