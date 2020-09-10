#include <iostream>
using namespace std;

// Decalared classes

// Declared functions.
string getUserInput();
void entryPrompt();


// Main function of program.
int main() {
	// std::cout << "HELLO WORLD!";
	// Makes a call to the entryPrompt function.
	entryPrompt();
}

// entryPrompt() function.
void entryPrompt(){
	cout << "\n" << "Welcome to a Realm of the Mad God chest roller.\n";
	cout << "This program attempts to simulate different ROTMG drops.\n";
	cout << "Created by Mark Vincent II\n";
	cout << "\n" << "1- Oryx01   2- Oryx02   3- Quit"; 
	cout << "Please enter an option from the following menu: ";
}
