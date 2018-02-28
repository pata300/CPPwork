/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	FinickyCounter.cpp
	Purpose:	This program demonstrates the break and continue statements by counting to 10 but skipping 5

*/

#include <iostream>
using namespace std;

int main() 
{
	int count = 0;//declare the int "count" an assign 0 to it
	while (true)//while is set to true, essentially creating an infinite loop
	{
		count += 1;//count is incremented at the beginning of the loop

		//if count is greater than 10 the while loop will "break" or exit the loop
		if (count > 10)
		{
			break;
		}

		//if count is equal to 5 the while loop "continues", meaning it loops back to the top
		if (count == 5)
		{
			continue;
		}

		cout << count << endl;//each iteration prints out the current count of "count"
	}

    cin.get();
    return 0;//ends program
}
