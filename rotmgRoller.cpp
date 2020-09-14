#include <iostream> // <- this is a preprocessor Directive, use "pathToCustom" for custom headers.
#include <string>
using namespace std; // if wanted, could only include some parts of the name space
					 // example: using std::cout or using std::endl
/*
Easy block comments!
*/
// Decalared classes

// Decalted global varibles.
string userInput;

// Declared functions.
string getUserInput();
void entryPrompt();


// Main function of program.
int main(int argc, char* argv[]) {
	// std::cout << "HELLO WORLD!";
	// Makes a call to the entryPrompt function.
	entryPrompt();
	getUserInput();
	return 0; // 0 is the "sucess" return value.  -1 is the failure.
}

// getUserInput() function.
string getUserInput(){
	cin.sync(); // <- syncs the input buffer.
	//getline(cin, userInput);
	int numberInput;
	cin >> numberInput;
	cout << "\nYour input is: " << userInput << "\n";
	return userInput;
}

// entryPrompt() function.
void entryPrompt(){
	cout << "\n" << "Welcome to a Realm of the Mad God chest roller.\n";
	cout << "This program attempts to simulate different ROTMG drops.\n";
	cout << "Created by Mark Vincent II\n";
	cout << "\n" << "1- Oryx01   2- Oryx02   3- Quit\n"; 
	cout << "Please enter an option from the following menu: ";
}

