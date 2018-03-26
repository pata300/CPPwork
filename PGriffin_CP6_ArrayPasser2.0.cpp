/*

    Programmer: P. Griffin
    Date:       4/20/2017
    Filename:   PGriffin_CP6_ArrayPasser2.0.cpp
    Purpose:    Demonstrates the use of arary names as pointers and how to pass them to functions. Now with user input!
    
*/

#include <iostream>

using namespace std;

//declare 'increase()'; passes array to constant pointer
void increase(int* const array, const int NUM_ELEMENTS);
//declare 'display()'; passes array to constant pointer to a pointer
void display(const int* const array, const int NUM_ELEMENTS);

int main()//main() starts
{
    cout << "Creating an array of high scores.\n\n";
    const int NUM_SCORES = 3;//declare constant int 'NUM_SCORES'; assign 3
    int highScores[NUM_SCORES] = {};//declare array 'highSchores'; index of 'NUM_SCORES'; assign 'x', 'y', 'z'
    
    cout << "Please input 3 high scores!\n";
    cout << "High score 1 is: ";
    cin >> highScores[0];//assign input to index 0
    cout << "High score 2 is: ";
    cin >> highScores[1];//assign input to index 1
    cout << "High score 3 is: ";
    cin >> highScores[2];//assign input to index 2

    cout << "\nDisplaying scores using array name as a constant pointer.\n";
    cout << *highScores << endl;//prints array by dereferencing
    cout << *(highScores + 1) << endl;
    cout << *(highScores + 2) << "\n\n";
    
    cout << "Increasing scores by passing array as a constant pointer.\n\n";
    increase(highScores, NUM_SCORES);//calls 'increase()'; using 'highScores' array and constant
    
    cout << "Displaying scores by passing array as a constant pointer to a constant.\n";
    display(highScores, NUM_SCORES);//calls 'display()'; using 'highScores' array and constant
   
    cin.get();
    cin.get();
    
    return 0;//ends program
}

//function uses constant point to loop thru array and add 500 to each value
void increase(int* const array, const int NUM_ELEMENTS)
{
    for (int i = 0; i < NUM_ELEMENTS; ++i)//loops thru array
	{
        array[i] += 500;//adds 500 to each value
	}
}

//function uses constant pointer to a constant to loop thru array and display it's values
void display(const int* const array, const int NUM_ELEMENTS)
{
    for (int i = 0; i < NUM_ELEMENTS; ++i)//loops thru array 
	{
        cout << array[i] << endl;//displays array's new values
	}
}

