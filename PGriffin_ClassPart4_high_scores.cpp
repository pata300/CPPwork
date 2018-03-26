/*

	Programmer:	P. Griffin
	Date:		3/23/2017
	Filename:	PGriffin_ClassPart4_high_scores.cpp
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

    cout << "Creating a list of scores.";
    vector<int> scores;//declare int vector 'scores'
    scores.push_back(1500);//add 3 int to 'scores' vector
    scores.push_back(3500);
    scores.push_back(7500);

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
