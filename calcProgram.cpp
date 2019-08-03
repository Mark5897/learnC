#include <iostream>
using namespace std;

// calcLogic class, handles calculator logic.
class calcLogic {
// private code
private:
  int currentNumber;

// public code
public:
  // prints the currentNumber.
  int printCurNum() {
    return currentNumber;
  }

  // constructor
  calcLogic() {
    currentNumber = 0;
  }

};

// Main entry point of program.
int main() {
  calcLogic calculatorObject;
  cout << calculatorObject.printCurNum();
  return 0;
}
