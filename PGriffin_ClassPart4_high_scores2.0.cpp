/*

	Programmer:	P. Griffin
	Date:		3/23/2017
	Filename:	PGriffin_ClassPart4_high_scores2.0.cpp
	Purpose:	Uses algorithms to demonstrate simplicity due to STL
	
*/

#include <iostream>
#include <vector>//includes necessary libraries for vectors and algorithms
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int>::const_iterator iter;//declare constant int vector 'iter'

    cout << "Create a list of scores.";
    vector<int> scores;//declare int vector 'scores'
    int score1, score2, score3 = 0;//declare int 'score' to hold the user's input

    cout << "\nPlease enter a score: ";//next 3 sections will as the user for score input and add it to 'scores' vector
    cin >> score1;
    scores.push_back(score1);//add score to 'scores' vector

    cout << "\nPlease enter a second score: ";
    cin >> score2;
    scores.push_back(score2);

    cout << "\nPlease enter a final score: ";
    cin >> score3;
    scores.push_back(score3);

    cout << "\nHigh Scores:\n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)//iterate thru 'scores' vector using 'iter'
	{
        cout << *iter << endl;
	}
        
    cout << "\nFinding a score.";
    int score;//declare int 'score'
    cout << "\nEnter a score to find: ";//ask user for score
    cin >> score;//assign input to 'score'
    iter = find(scores.begin(), scores.end(), score);//use score in find algorithm; which is ref to iter
    if (iter != scores.end())//if 'iter' is not equal to scores.end(); if iter finds a match
	{
        cout << "Score found.\n";//inform user
	}
    else//else, no match
	{
        cout << "Score not found.\n";
	}

    cout << "\nRandomizing scores.";
	srand(static_cast<unsigned int>(time(0)));//seed random()
    random_shuffle(scores.begin(), scores.end());//use 'random_shuffle' algorithm to shuffle 'scores' vector
    cout << "\nHigh Scores:\n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)//loops thru and prints new shuffle order
	{
        cout << *iter << endl;
	}

    cout << "\nSorting scores.";
    sort(scores.begin(), scores.end());//sort algorithm is given beginning and end of 'scores' vectors; arranges them in ascending order
    cout << "\nHigh Scores:\n";
    for (iter = scores.begin(); iter != scores.end(); ++iter)//iterates thru 'scores' vector
	{
        cout << *iter << endl;
	}
    
	cin.get();
	cin.get();
	return 0;
}
