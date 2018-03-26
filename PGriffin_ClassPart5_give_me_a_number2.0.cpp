/*

	Programmer:	P. Griffin
	Date:		4/6/2017
	Filename:	PGriffin_ClassPart5_give_me_a_number2.0.cpp
	Purpose:	This program demonstrates how default function arguments are used
	
*/

#include <iostream>
#include <string>

using namespace std;

int askNumber(int high, int low = 1);//declare function 'askNumber'; parameters of int 'high' & default argument 'low' assigned 1

int main()
{
    int number = askNumber(100);//call 'askNumber()' w/ 'high' assigned 5; default of 1 assiged to 'low'
    cout << "Thanks for entering: " << number << "\n\n";//output 'number'
    
    number = askNumber(1000, 500);//call 'askNumber()' w/ new parameters; assign 10 to 'high' & 5 to 'low'
    cout << "Thanks for entering: " << number << "\n\n";//output new 'number'

    cin.get();
    cin.get();
    return 0;//end program
}

int askNumber(int high, int low)//define int askNumber(); parameters of int high, low
{
    int num;//declare int 'num'
    do//do while 'num' is greater than 'high' or less than 'low'
    {
        cout << "Please enter a number" << " (" << low << " - " << high << "): ";//prompt user of 'high and 'low'
        cin >> num;//assign input to 'num'
    } while (num > high || num < low);//test

    return num;//return 'num' to main()
}
