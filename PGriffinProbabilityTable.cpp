/*

	Programmer:		P. Griffin
	Date:			4/29/2017
	Filename:		PGriffinProbabilityTable.cpp
	Purpose:		This program tells the user the probability of rolling the sum of two dice with the values 7 thru 12 by displaying a table

*/

#include <iostream>

using namespace std;

int main() {

	int sum, possible;//declare variables for later use
	int die1 = 7;
    int die2 = 7;

	const int ROWS = 7;//declare constants for 'for' loops
	const int COLUMNS = 7;
	const int TOTALSUM = 11;

	int table[ROWS][COLUMNS];//declare a multidementional int array
	table[0][0] = 0;//index table array [0][0] to 0

	//popoulates the tables first row with 7 thru 12
	for (int i = 1; i < ROWS; ++i) {

		table[i][0] = die1;

		die1++;

	}

	//populates the tables first column with 7 thru 12
	for (int j = 1; j < COLUMNS; ++j) {

		table[0][j] = die2;

		die2++;
		
	}
	
    cout << "\n\n\t\t\tProbabilityTable.cpp";
    cout << "\n\t\t\tP. Griffin\n\n";

	//populates the rest of the table with the sum of the value of the first row plus its corresponding value in the first column
	for (int x = 1; x < ROWS; ++x) {

		for (int y = 1; y < COLUMNS; ++y) {

			table[x][y] = table[x][0] + table[0][y];

		}
	}


	//print out the table to the user with the new variables; using character output to display a table
	for (int i = 0; i < ROWS; ++i) {
        
        cout << "\t";

		for (int j = 0; j < COLUMNS; ++j) {

			cout << table[i][j];
			cout << "\t|  ";

		}

        cout << endl;
		cout << "\t--------------------------------------------------------";
		cout << endl;

	}
    
    cout << "\n\n\t\t     Probabilities\n";
    cout << "\t-----------------------------------------\n\n";
    
    sum = 14;//initialize 'sum' to 14; outside the loop to keep from resetting
    
    //prints out the probability of the sums when rolling the die; loops thru the array and looks for the possible amount of times a sum shows up
    for (int x = 0; x < TOTALSUM; ++x) {
        
        possible = 0;//initialize 'possible' to 0 at the start of each loop
        
        for (int i = 0; i < ROWS; ++i) {
            
            for (int j = 0; j < COLUMNS; ++j) {
                
                //if the array index is equal to the current 'sum'
                if (table[i][j] == sum) {
                    
                    ++possible;//increment 'possible'
                    
                }
                
            }
                
        }
        
        //prints out to user; uses the current 'sum' and 'possible' count
        cout << "\n\tThe total sum " << sum << " has a " << possible << " out of 36 chance.";
        ++sum;//increments thru 'sum'
        
    }
            
    cin.get();
    
    return 0;
}
