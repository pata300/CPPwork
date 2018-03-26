/*

	Programmer:	P. Griffin
	Date:		3/3/2017
	Filename:	Counter.cpp
	Purpose:	This program demonstrates for loops and different ways to execute them
	
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Counting forward:\n";
    for (int i = 0; i < 10; ++i)//declare int 'i' to 0; for loop prints 'i' until it is greater than 10, incremented after each loop
	{
        cout << i << " ";//prints 'i', 0 thru 9
	}

    cout << "\n\nCounting backward:\n";
    for (int i = 9; i >= 0; --i)//declare int 'i' to 9; loops til 'i' is less than or equal to 0; decrements each loop
	{
        cout << i << " ";//prints 'i', 9 thru 0
	}

    cout << "\n\nCounting by fives:\n";
    for (int i = 0; i <= 50; i += 5)//declare int 'i' to 0; loops as long as 'i' is less than or equal to 50; increments 'i' by 5 each loop
	{
        cout << i << " ";//prints 'i' by 5's to 50
	}

    cout << "\n\nCounting with null statements:\n";
    int count = 0;//declare null int 'count'
    for ( ; count < 10; )//exclusively uses 'count' as a test
    {
        cout << count << " ";//prints 'count'
        ++count;//increments 'count' before looping over
    }

    cout << "\n\nCounting with nested for loops:\n";
    const int ROWS = 5;//declare constant int 'ROWS' to 5
    const int COLUMNS = 3;//declare constant int 'COLUMNS' to 3
    for (int i = 0; i < ROWS; ++i)//delcare int 'i' to 0; loops as long as 'i' is less than 'ROWS' (5); increments 'i', creates 5 "rows"
    {
        for (int j = 0; j < COLUMNS; ++j)//delcare int 'j' to 0; loops as long as 'j' is less than 'COLUMNS' (3); increments 'j', creates 3 "columns" per "row"
		{
            cout << i << "," << j << "  ";//prints current 'i' and 'j' ints during each "column" loop
		}

        cout << endl;//once 'j'/column for loop ends the line ends; loop starts over again
    }

    cin.get();
	return 0;//ends program
}
