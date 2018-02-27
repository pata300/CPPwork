/*

	Programmer:	P. Griffin
	Date:		1/31/2017
	Filename:	expensive_calculator.cpp
	Purpose:	This program demonstrates simple arithmetic operations.

*/

#include <iostream>
using namespace std;

int main()
{

	//the following lines will display a mathematical equation on the screen and proceed to solve the equation and print the result
	//the first four will demonstrate addition, subtraction, multiplication, and division
	cout << "7+3=" << 7+3 << endl;
	cout << "7-3=" << 7-3 << endl;
	cout << "7*3=" << 7*3 << endl;
	cout << "7/3=" << 7/3 << endl;

	//this line demonstrates division with a floating point
	cout << "7.0/3.0=" << 7.0/3.0 << endl;

	//this line demonstrates the modulus operator which displays the remainder of 7 divided by 3
	cout << "7%3=" << 7%3 << endl;

	//the following two lines demonstrate order of operations
	cout << "7+3*5=" << 7+3*5 << endl;
	cout << "(7+3)*5=" << (7+3)*5 << endl;

	return 0;

}