/*

    Programmer: P. Griffin
    Date:       4/13/2017
    Filename:   PatrickGriffin_HW5_Hangman2.0.cpp
    Purpose:    A rethinking of the hangman program in chapter 4 using functions
    
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>//used to parse char to uppercase

using namespace std;

char userGuess(string prompt);
void matchGuess(char guess);
void giveUp(string prompt);

//global variables
const int MAX_WRONG = 8;//declare a constant int 'MAX_WRONG', assign 8 to it
int wrongCount = 0;//declare int 'wrongCount', assign 0
string usedLetters = "";//declare string 'usedLetters' to hold all characters used
vector<string> words;//declare string vector 'words'

int main()
{
    
    words.push_back("PATRICK");//add 5 strings to vector 'words'
    words.push_back("GAMES");
    words.push_back("COLLEGE");
    words.push_back("PROGRAM");
    words.push_back("FUNCTION");

    srand(static_cast<unsigned int>(time(0)));//seed random()
    random_shuffle(words.begin(), words.end());//shuffle elements in 'words' vector
    
    const string THE_WORD = words[0];//reference the newly shuffled element
    string soFar(THE_WORD.size(), '-');//string 'soFar' assigned "-" at the size of the chosen word
    
    cout << "The name of the game is Hangman.  Can you prevail?!\n";

    while ((wrongCount < MAX_WRONG) && (soFar != THE_WORD))//while wrong guesses haven't reached MAX AND the word hasn't been correctly guessed
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrongCount);//player is informed of guess amount left
		cout << " incorrect guesses left.\n";
        cout << "\nLetter used so far:\n" << usedLetters << endl;//player is informed of used letters
        cout << "\nSo far, the word is:\n" << soFar << endl;//shows which letters are filled out in the word

        char guess = userGuess("\n\nEnter your guess: "); //calls userGuess(); assigns to string 'guess'

        while (usedLetters.find(guess) != string::npos)//test to see if character was used already
        {
            cout << "\nYou've already guessed " << guess << endl;//player is informed of previous use and asked to guess again
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        usedLetters += guess;//guess is added to used
        
        matchGuess(guess); //calls matchGuess(); using the return variable from userGuess(); assigns to wrongCount
        
        for (unsigned int i = 0; i < THE_WORD.length(); ++i)//iterates thru word
        {
            if (THE_WORD[i] == guess)//if the word matches w/ guess
            {
                soFar[i] = guess;//updates "-" to guess
            }
        }


        if (wrongCount == MAX_WRONG)//test if player has made too many wrong choices
        {
         cout << "\nYou've been hanged!";//inform user of failure
        }
        else//else they won
        {   
            cout << "\nYou guessed it!";//good job
        }

    }
    
    cout << "\nThe word was " << THE_WORD << endl;//user is told THE_WORD

    cin.get();
    cin.get();
    return 0;

}


//this function ask the user for for their 'guess'
char userGuess(string prompt) {

    char guess;//declare char 'guess'

    cout << prompt;
    cin >> guess;//assigns input to 'guess'
    guess = toupper(guess);//parses 'guess' to uppercase
    
    return guess; //guess is returned to main()

}

//the function checks to see if the guess is in the word
void matchGuess(char guess) {
    
    const string THE_WORD = words[0];//reference the newly shuffled element
    
    if (THE_WORD.find(guess) != string::npos)//test if guess is part of the word
    {
        cout << "You got it! " << guess << " is in the word.\n";//player is informed of correct choice

    } else//else wrong input
        {

        cout << "Sorry, " << guess << " isn't in the word.\n";
        ++wrongCount;//increments 'wrongCount'

        giveUp("Do you want to give up? (y or n)\n"); //custom function for exercise; ask player if they want to continue playing after wrong guess
        
        }

}

//custom function used to end the game prematurely
void giveUp(string prompt) {

    char answer;//declare char 'answer'

    cout << prompt;//print 'prompt' parameter
    cin >> answer;//assign input to 'answer'

    //while the user's 'answer' isn't equal to y and n the loop continues
    while((answer != 'y') && (answer != 'n')){

        cout << "\nSorry invalid answer.";
        cout << "\nDo you want to give up?? (y or n)";
        cin >> answer;

    }

    //if the user 'answer' is y it will assign 8 to 'wrongCount'; ending the game
    if (answer == 'y') {

        cout << "\nThanks for playing!";
        wrongCount = 8;

    }
    
}
