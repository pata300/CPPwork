/*

	Programmer:	P. Griffin
	Date:		3/3/2017
	Filename:	Tic-Tac-ToeBoard.cpp
	Purpose:	This program demonstrates multidimentional arrays thru a tic tac toe board
	
*/

#include <iostream>

using namespace std;

int main()
{
    const int ROWS = 3;//declare constant int ROWS to 3
    const int COLUMNS = 3;//delcare constant int COLUMNS to 3
    //declares char multidimentional array 'board' using the 2 constants above
    char board[ROWS][COLUMNS] = { {'O', 'X', 'O'},
                                  {' ', 'X', 'X'},
                                  {'X', 'O', 'O'} };

    cout << "Here's the tic-tac-toe board:\n";
    for (int i = 0; i < ROWS; ++i)//loops thru 'i' or 'ROWS' every 3 times 'j' or COLUMNS is looped thru
    {
        for (int j = 0; j < COLUMNS; ++j)
		{
            cout << board[i][j];//prints corresponding character to array coodinates
		}

        cout << endl;//new line upon successful loop
    }

    cout << "\n'X' moves to the empty location.\n\n";
    board[1][0] = 'X';//'X' is placed in array coodinates

    cout << "Now the tic-tac-toe board is:\n";
    for (int i = 0; i < ROWS; ++i)//board is printed once more using same for loops used earlier
    {
        for (int j = 0; j < COLUMNS; ++j)
		{
            cout << board[i][j];
		}

        cout << endl;
    }

    cout << "\n'X' wins!";//'X' is announced as the winner

    cin.get();
    return 0;//ends program
}
