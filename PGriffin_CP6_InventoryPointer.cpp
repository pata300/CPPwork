/*

    Programmer: P. Griffin
    Date:       4/20/2017
    Filename:   PGriffin_CP6_InventoryPointer.cpp
    Purpose:    Demonstrates returning pointers through the hero's inventory
    
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//returns a pointer to a string element
string* ptrToElement(vector<string>* const pVec, int i);//declare string pointer 'ptrToElement()'; takes a vector string as a constant pointer 'pVec' and it's index number

int main()//program starts
{
    vector<string> inventory;//delcare string vector 'inventory'
    inventory.push_back("sword");//add (push_back) several items
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << "Sending the object pointed to by returned pointer to cout:\n";       
    cout << *(ptrToElement(&inventory, 0)) << "\n\n";//call ptrToElement(); returns 'inventory' [1]; prints output

    cout << "Assigning the returned pointer to another pointer.\n";
    string* pStr = ptrToElement(&inventory, 1);//assign returned pointer to pointer
    cout << "Sending the object pointed to by new pointer to cout:\n";
    cout << *pStr << "\n\n";//print out pointer 'pStr'
    
    cout << "Assigning object pointed to by pointer to a string object.\n";
    string str = *(ptrToElement(&inventory, 2));//assign returned pointer to string 'str'
    cout << "Sending the new string object to cout:\n";
    cout << str << "\n\n";//print 'str'
    
    //altering the string object through a returned pointer
    cout << "Altering an object through a returned pointer.\n";
    *pStr = "Healing Potion";//alters 'inventory' index [1] to "Healing Potion" thru pointer
    cout << "Sending the altered object to cout:\n";
    cout << inventory[1] << endl;//prints new vector
    
    cin.get();
    
    return 0;
}

//string pointer 'ptrToElement()' takes vector element as a constant pointer and it's index number
string* ptrToElement(vector<string>* const pVec, int i)
{

    return &((*pVec)[i]);//returns the address of 'pVec' at the index number 'i' holds
    
}

