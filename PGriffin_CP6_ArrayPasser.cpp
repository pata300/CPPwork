/*

    Programmer: P. Griffin
    Date:       4/20/2017
    Filename:   PGriffin_CP6_ArrayPasser.cpp
    Purpose:    Demonstrates the use of arary names as pointers and how to pass them to functions
    
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
    int highScores[NUM_SCORES] = {5000, 3500, 2700};//declare array 'highSchores'; index of 'NUM_SCORES'; assign 5000, 3500, 2700
    
    cout << "Displaying scores using array name as a constant pointer.\n";
    cout << *highScores << endl;//prints array by dereferencing
    cout << *(highScores + 1) << endl;
    cout << *(highScores + 2) << "\n\n";
    
    cout << "Increasing scores by passing array as a constant pointer.\n\n";
    increase(highScores, NUM_SCORES);//calls 'increase()'; using 'highScores' array and constant
    
    cout << "Displaying scores by passing array as a constant pointer to a constant.\n";
    display(highScores, NUM_SCORES);//calls 'display()'; using 'highScores' array and constant
   
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

