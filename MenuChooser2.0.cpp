/*

	Programmer:	P. Griffin
	Date:		2/21/2017
	Filename:	MenuChooser2.0.cpp
	Purpose:	This program demonstrates the MenuChooser program using a enumorator to display the difficulty

*/

#include <iostream>
using namespace std;

int main() 
{
	//the following 4 lines prints to the user; displays which numbers should be typed in for desired outcome
    cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";
	
	int choice;//declare the int "choice"
	char finalChoice;//declare char "finalChoice" for do/while loop
	
	do {//do while the final choice is "n"
        
	   cout << "Choice: ";//ask user for their "choice", those being 1-3
	   cin >> choice;//assigns user input to "choice"
	   
	   cout << "Is that your final choice? y/n ";//ask user if they are comfortable with their choice
	   cin >> finalChoice;//assign user input to "finalChoice"
	   
    } while(finalChoice == 'n');//while "finalChoice" is equal to n it will repeat
	
	enum difficulty {EASY = 1, NORMAL, HARD};//declare the three enumerators for difficulty
    
    //set up if if-else else statements to determine what is printed to the screen according to user input
	if (choice == EASY) {//if "choice" is 1 it will be equal to the enumorator EASY
        
        cout << "\nYour difficulty is easy.";
    
    } else if (choice == NORMAL) {//if "choice" is 2 it will be equal to the enumorator NORMAL
        
        cout << "\nYour difficulty is normal!";
        
    } else if (choice == HARD) {//if "choice" is 3 it will be equal to the enumorator HARD
        
        cout << "\nYour difficulty is hard! Good luck!";
        
    } else {//else all other choice are invalid
        
        cout << "\nInvalid choice. Try again.";
        
    }

    cin.get();
    cin.get();
    return 0;//ends program
}
