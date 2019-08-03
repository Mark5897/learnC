#include <iostream>
using namespace std;

// declared classes below
class anObject;
// declared functions below
void testFunc();

// primary entry point of program.
int main() {
  cout << "Hello World!\n";
  testFunc();
  return 0;
}

// functions must be defined prior to the main entry function.
// unless declared and later defined.
void testFunc() {
  cout << "This is a function!\n";
}

// this is a basic class, public is an access modifier.
class anObject {
public:
  int myNum;
};
