/*

	Programmer:	P. Griffin
	Date:		3/30/2017
	Filename:	PatrickGriffin_HW4_StarsLoopHorizontal.cpp
	Purpose:	Prints out a pattern using for loops but now horizontal
	
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	char star = '*'; //declare character "star" assigned with '*'
	
	//first row
	
	for (int i = 0; i < 1; ++i) { //loops thru once

		for (int i = 0; i < 1; ++i) { //prints out one star
            
            cout << star;
            
        } cout << "         \t"; //prints empty characters with a tab
        
            for (int i = 0; i < 10; ++i) { //prints 10 stars
                
                cout << star;
                
            } cout << "\t\t"; //tabs for alignment
            
                for (int i = 0; i < 10; ++i) { //prints another 10 stars
                    
                    cout << star;
                    
                } cout << "\t         "; //tab and empty space
                    
                    for (int i = 0; i < 1; ++i) { //prints one star
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
    
    /*
        the following 9 rows all follow the same formula
        the amount of spaces increase and decrease as
        more stars are printed to compensate on alignment
    */
    
    //second row
	
	for (int i = 0; i < 1; ++i) {

		for (int i = 0; i < 2; ++i) {
            
            cout << star;
            
        } cout << "        \t";
        
            for (int i = 0; i < 9; ++i) {
                
                cout << star;
                
            } cout << " \t\t ";
            
                for (int i = 0; i < 9; ++i) {
                    
                    cout << star;
                    
                } cout << "\t        ";
                    
                    for (int i = 0; i < 2; ++i) {
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
    
    //third row
	
	for (int i = 0; i < 1; ++i) {

		for (int i = 0; i < 3; ++i) {
            
            cout << star;
            
        } cout << "       \t";
        
            for (int i = 0; i < 8; ++i) {
                
                cout << star;
                
            } cout << "  \t\t  ";
            
                for (int i = 0; i < 8; ++i) {
                    
                    cout << star;
                    
                } cout << "\t       ";
                    
                    for (int i = 0; i < 3; ++i) {
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
    
    //fourth row
	
	for (int i = 0; i < 1; ++i) {

		for (int i = 0; i < 4; ++i) {
            
            cout << star;
            
        } cout << "      \t";
        
            for (int i = 0; i < 7; ++i) {
                
                cout << star;
                
            } cout << "   \t\t   ";
            
                for (int i = 0; i < 7; ++i) {
                    
                    cout << star;
                    
                } cout << "\t      ";
                    
                    for (int i = 0; i < 4; ++i) {
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
    
    //fifth row
	
	for (int i = 0; i < 1; ++i) {

		for (int i = 0; i < 5; ++i) {
            
            cout << star;
            
        } cout << "     \t";
        
            for (int i = 0; i < 6; ++i) {
                
                cout << star;
                
            } cout << "    \t\t    ";
            
                for (int i = 0; i < 6; ++i) {
                    
                    cout << star;
                    
                } cout << "\t     ";
                    
                    for (int i = 0; i < 5; ++i) {
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
    
    //sixth row
	
	for (int i = 0; i < 1; ++i) {

		for (int i = 0; i < 6; ++i) {
            
            cout << star;
            
        } cout << "    \t";
        
            for (int i = 0; i < 5; ++i) {
                
                cout << star;
                
            } cout << "     \t\t     ";
            
                for (int i = 0; i < 5; ++i) {
                    
                    cout << star;
                    
                } cout << "\t    ";
                    
                    for (int i = 0; i < 6; ++i) {
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
    
    //seventh row
	
	for (int i = 0; i < 1; ++i) {

		for (int i = 0; i < 7; ++i) {
            
            cout << star;
            
        } cout << "   \t";
        
            for (int i = 0; i < 4; ++i) {
                
                cout << star;
                
            } cout << "      \t\t      ";
            
                for (int i = 0; i < 4; ++i) {
                    
                    cout << star;
                    
                } cout << "\t   ";
                    
                    for (int i = 0; i < 7; ++i) {
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
    
    //eigth row
	
	for (int i = 0; i < 1; ++i) {

		for (int i = 0; i < 8; ++i) {
            
            cout << star;
            
        } cout << "  \t";
        
            for (int i = 0; i < 3; ++i) {
                
                cout << star;
                
            } cout << "       \t\t       ";
            
                for (int i = 0; i < 3; ++i) {
                    
                    cout << star;
                    
                } cout << "\t  ";
                    
                    for (int i = 0; i < 8; ++i) {
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
    
    //ninth row
	
	for (int i = 0; i < 1; ++i) {

		for (int i = 0; i < 9; ++i) {
            
            cout << star;
            
        } cout << " \t";
        
            for (int i = 0; i < 2; ++i) {
                
                cout << star;
                
            } cout << "        \t\t        ";
            
                for (int i = 0; i < 2; ++i) {
                    
                    cout << star;
                    
                } cout << "\t ";
                    
                    for (int i = 0; i < 9; ++i) {
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
    
    //tenth row
	
	for (int i = 0; i < 1; ++i) {

		for (int i = 0; i < 10; ++i) {
            
            cout << star;
            
        } cout << "\t";
        
            for (int i = 0; i < 1; ++i) {
                
                cout << star;
                
            } cout << "         \t\t         ";
            
                for (int i = 0; i < 1; ++i) {
                    
                    cout << star;
                    
                } cout << "\t";
                    
                    for (int i = 0; i < 10; ++i) {
                        
                        cout << star;
                        
                    } cout << endl;
                    
        
    }
	
	cin.get();
	
	return 0;
	
}
