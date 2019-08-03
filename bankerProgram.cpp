/*
Program created by Mark Vincent II.
Contains some very basic, but useful things to know about the C++ language.
Needs to be upgraded to show off objects, scoping, file handling, and ui.
*/
#include <iostream>
using namespace std;

// functions
string getUserInformation(string inputType);
void printBankAccount();
void printDebug();

// Variables
bool bankAccount_program_exec = true;
int information_gathering_event_level = 0;
string bankAccount_value = "0";
string bankAccount_social = "000-000-0000";
string bankAccount_name = "null";
string user_input_1;
string user_input_2;

// Primary Entry point of program.
int main(int argc, char const *argv[]) {
  cout << "HEllO TO MARK'S FIRST C++ APPLICATION!\n";
  cout << "--------------------------------------\n" << "\n";

  while (bankAccount_program_exec) {

    switch (information_gathering_event_level) {
      case 0:
        bankAccount_name = getUserInformation("name");
        if (bankAccount_name == "-1") {
          // invalid name, prompts user again.
          continue;
        }
      case 1:
        bankAccount_social = getUserInformation("social_security_number");
        if (bankAccount_social == "-1") {
          // invalid social, prompts user again.
          continue;
        }
      case 2:
        bankAccount_value = getUserInformation("amount of assest value");
        if (bankAccount_value == "-1") {
          // invalid value, prompts user again.
          continue;
        }
        bankAccount_program_exec = false;
    }

  }

  // prints out bank information & debug information.
  printBankAccount();
  printDebug();

  // End of programs entry point.
  return 0;
}

// gathers user_input.
string getUserInformation(string inputType) {
  cout << "Please enter your legal " << inputType << ": ";
  getline(cin, user_input_1);
  cout << "\n" << "Is: " << user_input_1 << " correct? - enter true or false: ";
  getline(cin, user_input_2);
  cout << "\n";
  // checks if the input is correct or not.
  if (user_input_2 != "true") {
    return "-1";
  }

  // advances information_event_level by 1.
  ++information_gathering_event_level;

  return user_input_1;
}

// prints out the users bank account information.
void printBankAccount() {
  cout << "\n" << "--------------------------------------\n" << "\n";
  cout << "       BANK ACCOUNT INFORMATION" << "\n";
  cout << "--------------------------------------\n" << "\n";
  cout << "Your name is   " << bankAccount_name << "\n";
  cout << "Your social is " << bankAccount_social << "\n";
  cout << "Your value is  " << bankAccount_value << "\n";
  cout << "--------------------------------------\n" << "\n";
}

// prints out the debug log for the program.
void printDebug() {
  cout << "\n" << "--------------------------------------\n" << "\n";
  cout << "        DEBUG INFORMATION" << "\n";
  cout << "--------------------------------------\n" << "\n";
  cout << "Program Exec Status Variable:      ";
  cout << bankAccount_program_exec << "\n";
  cout << "Information Gathering Event Level: ";
  cout << information_gathering_event_level << "\n";
  cout << "--------------------------------------\n" << "\n";
}
