/*

	Programmer:	P. Griffin
	Date:		3/23/2017
	Filename:	PGriffin_ClassPart4_heros_inventory3.cpp
	Purpose:	Demonstrates Iterators when used with vectors
	
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> inventory;//declares a vector of the string obj element called 'inventory'
    inventory.push_back("sword");//using the push_back() to add the following 3 items to 'inventory' vector
    inventory.push_back("armor");
    inventory.push_back("shield");

    vector<string>::iterator myIterator;//declare interator myIterator
    vector<string>::const_iterator iter;//declare a constant iterator iter

    cout << "Your items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)//use constant interator to loop thru inventory
	{
        cout << *iter << endl;//iter references inventory object; cannot be changed
	}

    cout << "\nYou trade your sword for a battle axe.";
    myIterator = inventory.begin();//using iterator to reference the beginning of 'inventory'
    *myIterator = "battle axe";//changing to "battle axe"
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)//same loop
	{
        cout << *iter << endl;
	}

    cout << "\nThe item name '" << *myIterator << "' has ";//prints the object currently in 'myInterator'
    cout << (*myIterator).size() << " letters in it.\n";//prints how many char using .size()

    cout << "\nThe item name '" << *myIterator << "' has ";//prints same line
    cout << myIterator->size() << " letters in it.\n";//subbing dot operator w/ indirect member selection operator

    cout << "\nYou recover a crossbow from a slain enemy.";
    inventory.insert(inventory.begin(), "crossbow");//demonstrates another way to insert objects using insert()
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)//loop thru 'inventory'
	{
        cout << *iter << endl;//references 'inventory' thru 'iter'
	}

    cout << "\nYour armor is destroyed in a fierce battle.";
    inventory.erase((inventory.begin() + 2));//demonstrates the erase() and how to manipulate elements throughout a vector
    cout << "\nYour items:\n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter)//same loop, one last time
	{
        cout << *iter << endl;
	}
	
	cin.get();
	return 0;
}
