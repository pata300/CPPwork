/*

	Programmer:	P. Griffin
	Date:		2/2/2017
	Filename:	GameStats3.0.cpp
	Purpose:	This program demonstrates constants and enumerators

*/

#include <iostream>
using namespace std;

int main() {

	//initiate a constant ALIEN_POINTS, this variable can not be changed
	const int ALIEN_POINTS = 150;
	int alienKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "score: " << score << endl;

	//create two enumeration and assign them
	enum difficulty {NOVICE, EASY, NORMAL, HARD, UNBEATABLE};
	difficulty myDifficulty = EASY;

	enum shipCost {FIGHTER_COST = 25, BOMBER_COST, CRUISER_COST = 50};
	shipCost myShipCost = BOMBER_COST;

	//here we print what the enumeration CRUISER_COST(50) minus myShipCost(26) is
	cout << "\nTo upgrade my ship to a Cruiser will cost " << (CRUISER_COST - myShipCost) << " Resoruce Points.\n";

	return 0;

}