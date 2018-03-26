/*

	Programmer:	P. Griffin
	Date:		3/3/2017
	Filename:	PGriffin_ClassPart4_hangman.cpp
	Purpose:	Creates a hangman game using what we've learned of vectors
	
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>//used to parse char to uppercase

using namespace std;

int main()
{
    
    const int MAX_WRONG = 8;//declare a constant int 'MAX_WRONG', assign 8 to it

    vector<string> words;//declare string vector 'words'
    words.push_back("GUESS");//add 3 strings to vector 'words'
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));//seed random()
    random_shuffle(words.begin(), words.end());//shuffle elements in 'words' vector
    const string THE_WORD = words[0];//reference the newly shuffled element
    int wrong = 0;//declare int 'wrong', assign 0
    string soFar(THE_WORD.size(), '-');//declare string 'soFar', assign "-" at the size of the chosen word
    string used = "";//declare string 'used' to hold all characters used

    cout << "Welcome to Hangman.  Good luck!\n";

    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))//while wrong guesses haven't reached MAX AND the word hasn't been correctly guessed
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrong);//player is informed of guess amount left
		cout << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;//player is informed of used letters
        cout << "\nSo far, the word is:\n" << soFar << endl;//shows which letters are filled out in the word

        char guess;//declare char 'guess'
        cout << "\n\nEnter your guess: ";
        cin >> guess;//assigns input to 'guess'
        guess = toupper(guess);//parses 'guess' to uppercase
        while (used.find(guess) != string::npos)//test to see if character was used already
        {
            cout << "\nYou've already guessed " << guess << endl;//player is informed of previous use and asked to guess again
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        used += guess;//guess is added to used

        if (THE_WORD.find(guess) != string::npos)//test if guess is part of the word
        {
            cout << "That's right! " << guess << " is in the word.\n";//player is informed of correct choice

            for (unsigned int i = 0; i < THE_WORD.length(); ++i)//iterates thru word
			{
                if (THE_WORD[i] == guess)//if the word matches w/ guess
				{
                    soFar[i] = guess;//updates "-" to guess
				}
			}
        }
        else//else wrong input
        {
            cout << "Sorry, " << guess << " isn't in the word.\n";
            ++wrong;
        }
    }

    if (wrong == MAX_WRONG)//test if player has made too many wrong choices
    {
        cout << "\nYou've been hanged!";//inform user of failure
    }
    else//else they won
    {
        cout << "\nYou guessed it!";//good job
    }
    
    cout << "\nThe word was " << THE_WORD << endl;//user is told THE_WORD

    cin.get();
    cin.get();
    return 0;
}
