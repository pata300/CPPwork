/*

	Programmer:	P. Griffin
	Date:		3/3/2017
	Filename:	WordJumble2.0.cpp
	Purpose:	Uses multidimentional array to create an word jumble game that allows user to guess and ask for hints
	
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    enum fields {WORD, HINT, NUM_FIELDS};//create placeholders for later use thru an enumerator
    const int NUM_WORDS = 5;//declare constant int NUM_WORDS to 5
    //declare multidimentional string array 'WORDS' [5] and [2]
    const string WORDS[NUM_WORDS][NUM_FIELDS] =
    {
        //words to be scrambled w/ hints
        {"wall", "Do you feel you're banging your head against something?"},
        {"glasses", "These might help you see the answer."},
        {"labored", "Going slowly, is it?"},
        {"persistent", "Keep at it."},
        {"jumble", "It's what the game is all about."}
    };

	srand(static_cast<unsigned int>(time(0)));//seeds rand() function
	int choice = (rand() % NUM_WORDS);//declare int 'choice'; assign a random word
    string theWord = WORDS[choice][WORD];//declare 'theWord' and 'theHint'; 
    string theHint = WORDS[choice][HINT];

    string jumble = theWord;//declare string 'jumble', assign 'theWord'
    int length = jumble.size();//delcare int 'length', assign 'jumble' size() member function
    for (int i=0; i<length; ++i)//loop for the length of the 'choice' word
    {
        int index1 = (rand() % length);//declare int index1, assign random in length range
        int index2 = (rand() % length);//same for int index2
        char temp = jumble[index1];////declare char temp, assign 'jumble' array position from index1
        jumble[index1] = jumble[index2];//index1 char is moved to index2 position
        jumble[index2] = temp;//new 'jumble' is assigned to temp; process continues for length of the word
    }

    //user is greeted and instructed how to play
    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint.\n";
    cout << "Enter 'quit' to quit the game.\n\n";
    cout << "The jumble is: " << jumble;//prints 'jumble'

    string guess;//declare string 'guess'
    cout << "\n\nYour guess: ";//ask user for 'guess'
    cin >> guess;//input 'guess'
    
    bool success;//declare 'success' for do/while loop

    do
    {
        if (guess == "hint")//if 'guess' is equal to "hint"
		{
            cout << theHint;//output 'theHint'
            success = false;
            
		} else if (guess == theWord) {//if 'guess' is equal to theWord the loop becomes false and ends
            
                success = true;
                break;
            
            } else if (guess == "quit") {//if 'guess' is equal to "quit" the loop becomes false and ends
                
            success = true;
            break;
        
        } else//else invalid input
		{
            cout << "Sorry, that's not it.";
            success = false;
		}

        cout <<"\n\nYour guess: ";//ask user to guess again
        cin >> guess;//prompts user
        
    } while (!success);//while 'success' is not true the loop continues

    if (guess == theWord)//if 'guess' is equal to 'theWord'
	{
        cout << "\nThat's it!  You guessed it!\n";//player is congradulated
	}

    cout << "\nThanks for playing.\n";//users is thanked

    cin.get();
    cin.get();
    return 0;//ends program
}
