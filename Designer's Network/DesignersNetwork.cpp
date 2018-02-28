/*

	Programmer:	P. Griffin
	Date:		2/16/2017
	Filename:	DesignersNetwork.cpp
	Purpose:	This program demonstrates logical operators by using a log in databank

*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
	string username;//declare the string for "username"
	string password;//declare the string for "password"
	bool success;//declare the boolean "success"

	cout << "\tGame Designer's Network\n";//simple title/heading

	do//do loops as long as success is not true
	{
		cout << "\nUsername: ";
		cin >> username; //ask user for their username; assigning to "username"

		cout << "Password: ";
		cin >> password; //ask user for their password; assigning to "password"

		if (username == "S.Meier" && password == "civilization")//if username is equal to "S.Meier" AND password is equal to "civilization"; else it skips
		{
			cout << "\nHey, Sid.";//will print the following greeting
			success = true;//and assign "success" to true
		}

		else if (username == "S.Miyamoto" && password == "mariobros")//if username is equal to "S.Miyamoto" AND password is equal to "mariobros"; else it skips
		{
			cout << "\nWhat's up, Shigeru?";//will print the following greeting
			success = true;//and assign "success" to true
		}

		else if (username == "W.Wright" && password == "thesims")//if username is equal to "W.Wright" AND password is equal to "thesims"; else it skips
		{
			cout << "\nHow goes it, Will?";//will print the following greeting
			success = true;//assign "success" to true
		}

		else if (username == "guest" || password == "guest")//if username is equal to "guest" OR password is equal to "guest"; else it skips
		{
			cout << "\nWelcome, guest.";//prints the following greeting
			success = true;//assign "success" to true
		}

		else//if all other expressions are false
		{
			cout << "\nYour login failed.";//user is informed of failed login
			success = false;//assign "success to false
		}
	} while (!success);//loops while "success" is NOT false

    cin.get();
    cin.get();
    return 0;//ends program
}
