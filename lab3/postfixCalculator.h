/*
 * Noah French (njf5cu)
 * Lab 3
 * Filename: postfixCalculator.h
 * Description: Class Declaration of the Postfix Calculator
 * 9/12/17
 */

#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include <iostream>
#include <stdlib.h>

#include "stack.h"

using namespace std;

class PostfixCalculator {
 public:
  PostfixCalculator();
  void pushNum(int);
  int getTopValue();
  void add();
  void subtract();
  void multiply();
  void divide();
  void negate();

 private:
  Stack s;
};

#endif
  
