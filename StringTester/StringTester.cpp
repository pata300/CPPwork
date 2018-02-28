/*

	Programmer:	P. Griffin
	Date:		3/3/2017
	Filename:	StringTester.cpp
	Purpose:	This program demonstrates string objects and how we can manipulate them
	
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word1 = "Game";//declare string 'word1' assign "Game"
    string word2("Over");//declare string 'word2' assign "Over" using parentheses
    string word3(3, '!');//declare string '!' with a length equal to 3

    string phrase = word1 + " " + word2 + word3;//declare string 'phrase' by concatenating all three strings above
    cout << "The phrase is: " << phrase << "\n\n";//prints 'phrase' 

    cout << "The phrase has " << phrase.size() << " characters in it.\n\n";//prints how many characters are in the 'phrase' string using size() member function

    cout << "The character at position 0 is: " << phrase[0] << "\n\n";//prints character that is indexed at position 0

    cout << "Changing the character at position 0.\n";
    phrase[0] = 'L';//replaces 'phrase' character position 0 (G) to 'L'
    cout << "The phrase is now: " << phrase << "\n\n";//prints results

	for (unsigned int i = 0; i < phrase.size(); ++i)//loops thru string 'phrase'
	{
        cout << "Character at position " << i << " is: " << phrase[i] << endl;//prints position and corresponding character
	}

    cout << "\nThe sequence 'Over' begins at location "; 
    cout << phrase.find("Over") << endl;//using find() member function, finds what position 'Over' starts at

    if (phrase.find("eggplant") == string::npos)//if string 'eggplant' is not found in 'phrase'
	{
        cout << "'eggplant' is not in the phrase.\n\n";//prints line
	}

    phrase.erase(4, 5);//erase() member function at position 4 erases 5 characters
    cout << "The phrase is now: " << phrase << endl;//prints 'phrase', new line

    phrase.erase(4);//erase() member function after position 4 in 'phrase'
    cout << "The phrase is now: " << phrase << endl;//prints 'phrase', new line

    phrase.erase();//erase() member function on all characters
    cout << "The phrase is now: " << phrase << endl;//prints 'phrase', which is now empty

    if (phrase.empty())//if string 'phrase' has no characters
	{
        cout << "\nThe phrase is no more.\n";//prints to user
	}

	cin.get();
    return 0;//ends program
}
