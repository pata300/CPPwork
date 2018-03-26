/*

    Programmer: P. Griffin
    Date:       4/20/2017
    Filename:   PGriffin_CP6_SwapPointer2.0.cpp
    Purpose:    Demonstrates how passing pointers to functions alters variables outside of the function now with user input
    
*/

#include <iostream>

using namespace std;

void badSwap(int x, int y);//declare 'badSwap()'; no return (void); int x, y as parameter
void goodSwap(int* const pX, int* const pY);//declare 'goodSwap()'; no return; int constatn pointers as parameter

int main()//main() starts
{
    int myScore = 0;//declare 'myScore'; assign 0
    int yourScore = 0;//declare 'yourScore'; assign 0
    cout << "Original values\n";
    cout << "Please input my score: ";
    cin >> myScore;//assign input to 'myScore'
    cout << "Please input your score: ";
    cin >> yourScore;
    cout << "myScore: " << myScore << "\n";//print 'myScore'
    cout << "yourScore: " << yourScore << "\n\n";//print 'yourScore'
    
    cout << "Calling badSwap()\n";
    badSwap(myScore, yourScore);//call 'badSwap()'; no change to 'myScore' and 'yourScore'
    cout << "myScore: " << myScore << "\n";//print 'myScore'; no change
    cout << "yourScore: " << yourScore << "\n\n";//print 'yourScore'; no change
        
    cout << "Calling goodSwap()\n";
    goodSwap(&myScore, &yourScore);//call 'goodSwap()'; variable's addresses as parameters
    cout << "myScore: " << myScore << "\n";//print new scores passed 
    cout << "yourScore: " << yourScore << "\n";

    cin.get();
    cin.get();
    
    return 0;//program ends
}

//define void 'badSwap'; parameter int x, y; swaps the values inside function's scope
void badSwap(int x, int y)
{
    int temp = x;//declare int 'temp'; assigned x
    x = y;//x assigned y; swapped
    y = temp;//temp is assigned to y
}

//define void 'goodSwap'; parameter constant pointers pX, pY
void goodSwap(int* const pX, int* const pY)    
{
    int temp = *pX;//declare int 'temp'; assign with pointer pX
    
    *pX = *pY;//pointer pX is passed to pY
        
    *pY = temp;//passes 'temp' value to pY address
}

