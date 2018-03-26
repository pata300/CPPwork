/*

	Programmer:	P. Griffin
	Date:		4/6/2017
	Filename:	PGriffin_ClassPart5_yes_or_no.cpp
	Purpose:	Demonstrates how return and parameters work with functions
	
*/

#include <iostream>
#include <string>

using namespace std;

char askYesNo1();//declare askYesNo1()
char askYesNo2(string question);//declare 'askYesNo2'; parameter string 'question'

int main()//start main()
{
    char answer1 = askYesNo1();//call 'askYesNo1()'; assign to char 'answer1'
    cout << "Thanks for answering: " << answer1 << "\n\n";//print 'answer1'

    char answer2 = askYesNo2("Do you wish to save your game?");//call 'askYesNo2()'; parameter with prompt; assign to char 'answer2'
    cout << "Thanks for answering: " << answer2 << "\n";//prints 'answer2'

    cin.get();
    cin.get();
    return 0;//ends program
}

char askYesNo1()//define 'askYesNo1()'
{
    char response1;//declare char 'response1'
    do//do while 'response1' isn't 'y' or 'n'
    {
        cout << "Please enter 'y' or 'n': ";//prompt user to enter 'y' or 'n'
        cin >> response1;//assign input to 'response1'
    } while (response1 != 'y' && response1 != 'n');//test

    return response1;//return 'response1' to main()
}

char askYesNo2(string question)//define 'askYesNo2()'
{
    char response2;//declare char 'response2'
    do//do while 'response2' isn't 'y' or 'n'
    {
        cout << question << " (y/n): ";//prompt user using parameter 'question'
        cin >> response2;//assign input to 'response2'
    } while (response2 != 'y' && response2 != 'n');//test

    return response2;//return 'response2' to main()
}


