/*

	Programmer:	P. Griffin
	Date:		3/30/2017
	Filename:	PatrickGriffin_HW4_StarsLoop.cpp
	Purpose:	Prints out a pattern using for loops
	
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

	char star = '*'; //declare the character star which is assigned an '*'
	
	//first pattern
	
	for (int i = 0; i < 1; ++i) { //loops once

		for (int i = 0; i < 1; ++i) { //prints 1 star

							cout << star;

						}

						cout << endl;
        
                for (int i = 0; i < 2; ++i) { //prints 2 stars

							cout << star;

						}

						cout << endl;
        
                    for (int i = 0; i < 3; ++i) { //so on

							cout << star;

						}

						cout << endl;
        
                        for (int i = 0; i < 4; ++i) {

							cout << star;

						}

						cout << endl;
        
                            for (int i = 0; i < 5; ++i) {

							cout << star;

						}

						cout << endl;
        
                        for (int i = 0; i < 6; ++i) {

							cout << star;

						}

						cout << endl;
        
                    for (int i = 0; i < 7; ++i) {

						cout << star;

					}

					cout << endl;
        
                for (int i = 0; i < 8; ++i) {

					cout << star;

				}

				cout << endl;
        
            for (int i = 0; i < 9; ++i) {

				cout << star;

			}

			cout << endl;
        
        for (int i = 0; i < 10; ++i) {

			cout << star;
		} 

		cout << endl;

	}
	
	//second pattern

	/*
	 	prints thru same as the loop above
		but in the opposite order this time
	*/

	for (int i = 0; i < 1; ++i) { 

		for (int i = 0; i < 10; ++i) { 

			cout << star;
		} 

		cout << endl;

			for (int i = 0; i < 9; ++i) {

				cout << star;

			}

			cout << endl;

				for (int i = 0; i < 8; ++i) {

					cout << star;

				}

				cout << endl;

					for (int i = 0; i < 7; ++i) {

						cout << star;

					}

					cout << endl;

						for (int i = 0; i < 6; ++i) {

							cout << star;

						}

						cout << endl;

							for (int i = 0; i < 5; ++i) {

								cout << star;

							}

							cout << endl;

						for (int i = 0; i < 4; ++i) {

							cout << star;

						}

						cout << endl;

					for (int i = 0; i < 3; ++i) {

						cout << star;

					}

					cout << endl;

				for (int i = 0; i < 2; ++i) {

					cout << star;

				}

				cout << endl;

			for (int i = 0; i < 1; ++i) {

				cout << star;

			}

			cout << endl;

	}
	
	//third pattern
	
	for (int i = 0; i < 1; ++i) { //loops thru once
        
        for (int i = 0; i < 10; ++i) { //prints out 10 stars
            
            cout << star;
            
        }   cout << endl; //ends line
        
            cout << " "; //add empty characters for alignment
        
            for (int i = 0; i < 9; ++i) { //prints 9 stars after the space
                
                cout << star;
                
            } cout << endl; //ends line
            
                cout << "  "; //add empty characters
                
                for (int i = 0; i < 8; ++i) {
                    
                    cout << star;
                    
                } cout << endl;
                
                    cout << "   ";
                        
                        for (int i = 0; i < 7; ++i) {
                            
                            cout << star;
                            
                        } cout << endl;
                        
                            cout << "    ";
                            
                            for (int i = 0; i < 6; ++i) {
                                
                                cout << star;
                                
                            } cout << endl;
                            
                                cout << "     ";
                                
                                for (int i = 0; i < 5; ++i) {
                                    
                                    cout << star;
                                    
                                } cout << endl;
                                
                                    cout << "      ";
                                    
                                    for (int i = 0; i < 4; ++i) {
                                        
                                        cout << star;
                                        
                                    } cout << endl;
                                    
                                        cout << "       ";
                                        
                                        for (int i = 0; i < 3; ++i) {
                                            
                                            cout << star;
                                            
                                        } cout << endl;
                                        
                                            cout << "        ";
                                            
                                            for (int i = 0; i < 2; ++i) {
                                                
                                                cout << star;
                                                
                                            } cout << endl;
                                            
                                                cout << "         ";
                                            
                                                for (int i = 0; i < 1; ++i) {
                                                    
                                                    cout << star;
                                                    
                                                } cout << endl;
       
    }
    
    //final pattern

    /*
    	final pattern uses the same concept as above
    	but again in the opposite order
    */
    
    for (int i = 0; i < 1; ++i) {
     
           cout << "         ";
                                            
            for (int i = 0; i < 1; ++i) {
                                                    
                cout << star;
                                                    
            } cout << endl;
            
                cout << "        ";
                                            
                for (int i = 0; i < 2; ++i) {
                                                
                    cout << star;
                                                
                } cout << endl;
                
                    cout << "       ";
                                        
                    for (int i = 0; i < 3; ++i) {
                                            
                        cout << star;
                                            
                    } cout << endl;
                    
                        cout << "      ";
                    
                        for (int i = 0; i < 4; ++i) {
                            
                            cout << star;
                            
                        } cout << endl;
                        
                            cout << "     ";
                            
                            for (int i = 0; i < 5; ++i) {
                                
                                cout << star;
                                
                            } cout << endl;
                            
                                cout << "    ";
                                
                                for (int i = 0; i < 6; ++i) {
                                    
                                    cout << star;
                                    
                                } cout << endl;
                                
                                    cout << "   ";
                                    
                                    for (int i = 0; i < 7; ++i) {
                                        
                                        cout << star;
                                        
                                    } cout << endl;
                                    
                                        cout << "  ";
                                        
                                        for (int i = 0; i < 8; ++i) {
                                            
                                            cout << star;
                                            
                                        } cout << endl;
                                        
                                            cout << " ";
                                            
                                            for (int i = 0; i < 9; ++i) {
                                                
                                                cout << star;
                                                
                                            } cout << endl;
                                            
                                                for (int i = 0; i < 10; ++i) {
                                                    
                                                    cout << star;
                                                    
                                                }
        
    }
	
	cin.get();
	
	return 0;
	
}
