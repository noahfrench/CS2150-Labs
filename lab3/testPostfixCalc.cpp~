/*
 * Noah French (njf5cu)
 * Lab 3
 * Filename: testPostfixCalc.cpp
 * Description: Input taker for the Postfix Calculator
 * 9/12/17
 */

#include "postfixCalculator.h"

int main() {
  PostfixCalculator p;
  string s;
  
  while (cin >> s) {
    // Make a C-style string out of the input string 
    const char * cString = s.c_str();
    // If the string is longer than one, it's an integer (assuming valid input). Push it onto the stack.
    if (s.length() > 1) {
      int i = atoi(cString);
      p.pushNum(i);
    } else {
      // If the one character string is an int, push it onto the stack.
      if (isdigit(cString[0])) {
	int i = atoi(cString);
	p.pushNum(i);
	// If the one character string isn't an int, it's an operator!!! Do the operation!
      } else {
	if (cString[0] == '+')
	  p.add();
	else if (cString[0] == '-')
	  p.subtract();
	else if (cString[0] == '*')
	  p.multiply();
	else if (cString[0] == '/')
	  p.divide();
	else if (cString[0] == '~')
	  p.negate();
      }      
    }  
  }
  cout << "Result is: " << p.getTopValue() << endl;
  return 0;
}

