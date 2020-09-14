/*
This class is dedicated to the following section of the C++ Tutorial:
(http://www.cplusplus.com/doc/tutorial/)

Introduction:
	Compliers

Basics of C++:
	Structures of a Program
	Variables and types
	Constants 
	Operators
	Basic Input/Output

Written up by Mark Alan Vincent II
*/

/*
INTRODUCTION:
(http://www.cplusplus.com/doc/tutorial/introduction/)
C++ is designed to be a compiled language, meaning that it is generally translated into machine language 
that can be understood directly by the system, making the generated program highly efficient. 
For that, a set of tools are needed, known as the development toolchain, whose core are a compiler and its linker.

Popular Compilers include: GCC (Linux), Clang(OS X), and Microsoft C++(Windows)
 
*/

/*
BASICS:
*/
// Includes
#include <iostream>  // for cout and cin streams
#include <sstream> 	 // for string streams
#include <string>	 // for string data type
#include <limits> 	 // for numeric_limits


// Namespace
using namespace std;

// Preprocessor for constants
// #define identifier replacement
#define PI 3.14159
#define NEWLINE '\n'
// Could now use these definitions, (PI and NEWLINE) in code to refrence their values as such
// cout << PI;

// Main
int main(){
	
	// The first CPP code.
	cout << "Hello World!" << "\n";
	int aNum;
	float aDeciNum;
	aNum = 50;
	aDeciNum = 5.5;
	cout << aNum << " - " << aDeciNum << " = " << (aNum - aDeciNum) << "\n";
	
	// Ways to initialize a variable in CPP:
	int numA = 0;
	int numB(1);
	int numC{2};
	cout << "numA, numB, numC: " << numA << " " << numB << " " << numC << "\n";	
	
	// Typed constant expressions:
	const int piInt = 3.14;
	const char tab = '\t';
	const bool isMarkAGoodProgrammer = true;

	// Type deduction: auto and decltype: int num1 = 0;
	auto num1a = numA; // This is essentially the same as: int num1a = numA;
	int num2 = 0;
	decltype(num2) num2a; // This is essentially the same as: int num2a;
	cout << "AUTO ex: num1 -> num1a  | " << numA << " -> " << num1a << "\n";
	
	// Intro on Strings (must have string header included)
	string aString; 
	string twoLineString = "this string is " \
						   "written in two lines!";
	aString = "Mark's string!!!"; 
	cout << aString << "\n" << twoLineString << "\n";
	
	/*
	Character and String Escape Characters
	\n	newline
	\r	carriage return
	\t	tab
	\v	vertical tab
	\b	backspace
	\f	form feed (page feed)
	\a	alert (beep)
	\'	single quote (')
	\"	double quote (")
	\?	question mark (?)
	\\	backslash (\)
	*/	
	
	// Bases & initalization of octal and hexadecimal
	int numberBase10 = 75; //normal integer	
	int numberBase8 = 0113; //octal integer
	int numberBase16 = 0x4b; //hexadecimal integer

	// Suffix Example
	int sufNum1 = 75;   // int
	int sufNum2 = 75u;  // unsigned int
	int sufNum3 = 75l;  // long
	int sufNum4 = 75ul; // unsigned long
	int sufNum5 = 75lu; // unsigned long
	
	// Floating Point Numerals
	float floatNum1 = 3.14159;	// 3.14159
	float floatNum2 = 6.02e23;	// 6.02 * 10^23
	float floatNum3 = 1.6e-19;	// 1.6 * 10^-19
	float floatNum4 = 3.0;		// 3.0	
		
	/*
	Compund Operators:
	y += x;					y = y + x;
	x -= 5;					x = x - 5;
	x /= y;					x = x / y;
	price *= units + 1;		price = price * (units+1);
	
	Increment and Decremenet Operators:
	++x; or x+=1			x = x + 1;
	
	Can also have custom amount:
	x = 3;
	y = ++x;
	X value printed is 4
	Y value contains 4
	or if y = x++; then Y value contains 3
	
	*/
	
	// Intro to Conditional ternary operator (?)
	// condition ? result1 : result2
	int terA, terB, terC;
	terA = 2;
	terB = 7;
	terC = (terA > terB) ? terA : terB;
	// Says: (get bool value from a > b) if (a >b) == true then evaluate to a else evaluate to b
	cout << "Print the greater value using (a > b) ? a : b \n When a = 2 and b = 7 \n Results: "
		 << terC << '\n';
	
	// Explicit Type Casting
	int castNumber;
	float castFloat = 3.14;
	castNumber = (int) castFloat; // another cast: castNumber = int (castFloat)
	cout << "castFloat = " << castFloat << " castNumber = (int) castFloat = " << castNumber << "\n";
	
	// sizeOf
	cout << "size in bytes of castNumber: " << sizeof(castNumber) << "\n";

	/*
	Streams avaible:
	cin	standard input stream
	cout	standard output stream
	cerr	standard error (output) stream
	clog	standard logging (output) stream
	*/
	
	// basic input stream
	int userInputNum;
	cout << "Please enter a number: ";
	cin >> userInputNum;
	cout << "Your number is " << userInputNum << "\n";
	string userInputString;
	cout << "Please enter a number and then a name." << "\n";
	cin >> userInputNum >> userInputString;
	cout << "Your name is " << userInputString << " and your number is " << userInputNum << "\n";
	
	/* 
	Discarding all left over characters in the input stream so getline() is freash
	If this is exactly numeric_limits <streamsize> ::max() there is no limit: 
	As many characters are extracted as needed until delim (or the end-of-file) is found.
	*/
	cin.ignore( numeric_limits <streamsize> ::max(), '\n');

	// input with strings
	cout << "Please re-enter your name: ";
	getline(cin, userInputString); //getline takes the entire line as a string.
	cout << "Your name is " << userInputString << ". Now please enter your middle name: " << "\n";
	getline(cin, userInputString);
	cout << "Your middle name is " << userInputString << "\n";
	
	// Using stringstream to convert string integers into just integers.
	float price = 0;
	int quanity = 0;
	cout << "Please enter the price of an item: ";
	getline(cin, userInputString);
	stringstream(userInputString) >> price; // extracts price from userInputString
	cout << "Please enter the quanity you'd like to buy: ";
	getline(cin, userInputString);
	stringstream(userInputString) >> quanity;
	cout << "Total cost: " << (price * quanity) << endl;	

	return 0;
} // End of Main

