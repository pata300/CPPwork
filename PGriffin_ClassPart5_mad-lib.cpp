/*

	Programmer:	P. Griffin
	Date:		4/6/2017
	Filename:	PGriffin_ClassPart5_mad-lib.cpp
	Purpose:	Demonstrates how a simple mad lib adventure can be created using multiple functions
	
*/

#include <iostream>
#include <string>

using namespace std;

string askText(string prompt);//declare string 'askText()'; string 'prompt' parameter
int askNumber(string prompt);//declare int 'askNumber()'; string 'prompt' parameter
//declare tellStory(); parameter of string 'name', 'noun', 'bodyPart', 'verb, and int 'number'
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()//main() starts
{
    cout << "Welcome to Mad Lib.\n\n";//prompts user
    cout << "Answer the following questions to help create a new story.\n";
    
    string name = askText("Please enter a name: ");//calls askText(); assign string 'name'
    string noun = askText("Please enter a plural noun: ");//calls askText(); assign string 'noun'
    int number = askNumber("Please enter a number: ");//calls askNumber(); assign int 'number'
    string bodyPart = askText("Please enter a body part: ");//call askText(); assign string 'bodyPart'
    string verb = askText("Please enter a verb: ");//call askText(); assign string 'verb'
    
    tellStory(name, noun, number, bodyPart, verb);//calls tellStory() using all previous assigned variables

    cin.get();
    cin.get();
    return 0;//ends program
}

string askText(string prompt)//define askText(); which is used several times
{
    string text;//declare string 'text'
    cout << prompt;//print parameter, string 'prompt'
    cin >> text; //assign input to 'text'
    return text;//returns 'text' to main
}

int askNumber(string prompt)//define askNumber()
{
    int num;//declare int 'num'
    cout << prompt;//print out parameter
    cin >> num;//assign input to 'num'
    return num;//return 'num' to main()
}

//define tellStory(); has no output (void); uses all input variables
void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
    cout << "\nHere's your story:\n";//prints a custom adventure using the user's input
    cout << "The famous explorer ";
    cout << name;//output 'name'
    cout << " had nearly given up a life-long quest to find\n";
    cout << "The Lost City of ";
    cout << noun;//output 'noun'
    cout << " when one day, the ";
    cout << noun;//output 'noun'
    cout << " found the explorer.\n";
    cout << "Surrounded by ";
    cout << number;//output 'number'
    cout << " " << noun;//output 'noun'
    cout << ", a tear came to ";
    cout << name << "'s ";//output 'name'
    cout << bodyPart << ".\n";//output 'bodyPart'
    cout << "After all this time, the quest was finally over. ";
    cout << "And then, the ";
    cout << noun << "\n";//output 'noun'
    cout << "promptly devoured ";
    cout << name << ". ";//output 'name'
    cout << "The moral of the story? Be careful what you ";
    cout << verb;//output 'verb'
    cout << " for.";
}

