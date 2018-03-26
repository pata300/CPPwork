/*

	Programmer:	P. Griffin
	Date:		3/23/2017
	Filename:	PGriffin_ClassPart4_heros_inventory2.cpp
	Purpose:	Introduces the vector library for the use of vectors

*/

#include <iostream>
#include <string>
#include <vector>//includes the vector library for use of vectors

using namespace std;

int main()
{
	vector<string> inventory;//declares a vector of the string obj element called 'inventory'
	inventory.push_back("sword");//using the push_back() to add the following 3 items to 'inventory' vector
	inventory.push_back("armor");
	inventory.push_back("shield");

	cout << "You have " << inventory.size() << " items.\n";//counts vector's "size" and prints to user

	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)//for loop thru 'inventory' vector using indexing
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou trade your sword for a battle axe.";
	inventory[0] = "battle axe";//change string in index slot [0] to "battle axe"
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)//same loop as before
	{
		cout << inventory[i] << endl;
	}

	cout << "\nThe item name '" << inventory[0] << "' has ";//print ot user which item is in 'invetory'
	cout << inventory[0].size() << " letters in it.\n";//index slot [0] and its string size

	cout << "\nYour shield is destroyed in a fierce battle.";
	inventory.pop_back();//use pop_back() func to delete last element in 'inventory'
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)//for loop one last time
	{
		cout << inventory[i] << endl;
	}

	cout << "\nYou were robbed of all of your possessions by a thief.";
	inventory.clear();//clear () func deletes all elements in 'inventory' vector
	if (inventory.empty())//if 'inventory' vector is empty()
	{
		cout << "\nYou have nothing.\n";//inform user of empty inventory
	}
	else//else objects still in vector
	{
		cout << "\nYou have at least one item.\n";
	}

	cin.get();
	return 0;
}
