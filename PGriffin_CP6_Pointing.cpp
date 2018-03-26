/*

    Programmer: P. Griffin
    Date:       4/20/2017
    Filename:   PGriffin_CP6_Pointing.cpp
    Purpose:    This program demonstrates how pointers are used
    
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int* pAPointer;//declare pointer 'pAPointer'
    
    int* pScore = 0;//declare pointer 'pScore' assign 0; null pointer
        
    int score = 1000;//declare int 'score', assign 1000

    pScore = &score;//assign pointer 'pScore' address of 'score'

    cout << "Assigning &score to pScore\n";//print to user
    cout << "&score is: " << &score << "\n";//prints address of 'score'
    cout << "pScore is: " << pScore << "\n";//prints address stored in pointer 'pScore'
    cout << "score is: " << score << "\n";//prints 'score' value
    cout << "*pScore is: " << *pScore << "\n\n";//prints value 'pScore" points to 
   
    cout << "Adding 500 to score\n";
    score += 500;//add 500 to 'score'
    cout << "score is: " << score << "\n";//prints new 'score' value
    cout << "*pScore is: " << *pScore << "\n\n";//prints new value with pointer

    cout << "Adding 500 to *pScore\n";
    *pScore += 500;//add 500 to value pointer
    cout << "score is: " << score << "\n";//prints 'score', showing value change thru pointer
    cout << "*pScore is: " << *pScore << "\n\n";//prints pointer 'pScore'

    cout << "Assigning &newScore to pScore\n";    
    int newScore = 5000;//declare int 'newScore', assign 5000
    pScore = &newScore;//assign pointer to 'newScore' address
    cout << "&newScore is: " << &newScore << "\n";//print 'newScore' address
    cout << "pScore is: " << pScore << "\n";//print new pointer address
    cout << "newScore is: " << newScore << "\n";//print 'newScore' value
    cout << "*pScore is: " << *pScore << "\n\n";//print 'pScore' value
    
    cout << "Assigning &str to pStr\n";
    string str = "score";//declare string 'str'; initialize with 'score'
    string* pStr = &str;//declare pointer 'pStr'; assign to string object
    cout << "str is: " << str << "\n";//print 'str'
    cout << "*pStr is: " << *pStr << "\n";//print pointer
    cout << "(*pStr).size() is: " << (*pStr).size() << "\n";//demonstrate size() with pointer
    cout << "pStr->size() is: " << pStr->size() << "\n";//demonstrate indirect member selector
  
    cin.get();
    
    return 0;
}
