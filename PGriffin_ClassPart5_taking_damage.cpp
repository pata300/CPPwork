/*

	Programmer:	P. Griffin
	Date:		4/6/2017
	Filename:	PGriffin_ClassPart5_taking_damage.cpp
	Purpose:	This program demonstrates inline functions thru a simple health system
	
*/

#include <iostream>

int radiation(int health);//declare radiation() w/ int 'health' parameter

using namespace std;

int main()//start main()
{
    int health = 80;//delcare int 'health'; assign 80
    cout << "Your health is " << health << "\n\n";//prints 'health'
    
    health = radiation(health);//call 'radiation()'; use 'health' in parameter; assign to 'health'
    cout << "After radiation exposure your health is " << health << "\n\n";//print new 'health'
    
    health = radiation(health);//call 'radiation()'; use 'health' in parameter; assign to 'health'
    cout << "After radiation exposure your health is " << health << "\n\n";//print new 'health'
    
    health = radiation(health);//call 'radiation()' one last time; use 'health' in parameter; assign to 'health'
    cout << "After radiation exposure your health is " << health << "\n\n";//print new 'health'

    cin.get();
    return 0;//end program
}

inline int radiation(int health)//define radiation() as inline; tell compiler to copy function
{
    return (health / 2);//return 'health' divided by half
}

