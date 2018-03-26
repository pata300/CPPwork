/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	ScoreRater4.0.cpp
	Purpose:	This program takes the ScoreRater3.0 program and changes it to a switch statement

*/

#include <iostream>
using namespace std;

int main() 
{
    
    int score;//declare the int "score"
	cout << "Enter your score: ";//ask user for input
	cin >> score;//assign input to "score"
	
	switch (score)
    {
     
        case 1000 ... 50000:
            cout << "You scored 1000 or more. Impressive!\n";//statement is printed to user
            break;
            
        case 500 ... 999://"score" is less than 500 program will skip to next expression
            cout << "You scored 500 or more. Nice.\n";//if true, statement is printed to user  
            break;
            
        case 250 ... 499://if score is less than 250 program will skip to last else clause
            cout << "You scored 250 or more. Decent.\n";//if true, statement is printed to user
            break;
        
        default:
            cout << "You scored less than 250. Nothing to brag about.\n";
            
    }
        
    cin.get();
    cin.get();
    return 0;
    
}
