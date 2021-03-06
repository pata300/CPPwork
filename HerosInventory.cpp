/*

	Programmer:	P. Griffin
	Date:		3/3/2017
	Filename:	HerosInventory.cpp
	Purpose:	This program demonstrates how arrays are used with the use of a inventory system
	
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int MAX_ITEMS = 10;//declare constant int MAX_ITEM to 10
    string inventory[MAX_ITEMS];//declare string array 'inventory', assign 'MAX_ITEM'

    int numItems = 0;//declare int 'numItems' to 0, placeholder for inventory count
    inventory[numItems++] = "sword";//next 3 lines add items to inventory array and increment 'numItems'
    inventory[numItems++] = "armor";
    inventory[numItems++] = "shield";

    cout << "Your items:\n";
    for (int i = 0; i < numItems; ++i)//loops for each item in 'inventory' array
	{
        cout << inventory[i] << endl;//prints items
	}

    cout << "\nYou trade your sword for a battle axe.";//output to user instructing swapped items
    inventory[0] = "battle axe";//position 0 in 'inventory' array changed to 'battle axe'
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)//loops for each item in 'inventory' array once more
	{
        cout << inventory[i] << endl;//prints items
	}

    cout << "\nThe item name '" << inventory[0] << "' has ";//output to user that position 0
    cout << inventory[0].size() << " letters in it.\n";//has x amount of characters using size() member function

    cout << "\nYou find a healing potion.";//output to user about additional item
    if (numItems < MAX_ITEMS)//checks for a full array/'inventory', if 'numItems' is less than 'MAX_ITEMS' (10)
	{
        inventory[numItems++] = "healing potion";//healing potion is added to 'inventory'
	}
    else//else 'inventory' is full, user is informed
	{
        cout << "You have too many items and can't carry another.";
	}
    cout << "\nYour items:\n";
    for (int i = 0; i < numItems; ++i)//display inventory one lsast time with for loop
	{
        cout << inventory[i] << endl;
	}
	
	cin.get();
    return 0;//ends program
}
