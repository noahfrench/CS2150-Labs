/*
 * Noah French (njf5cu)
 * Lab 3
 * Filename: postfixCalculator.cpp
 * Description: Implementation of the Postfix Calculator
 * 9/12/17
 */

#include "postfixCalculator.h"

PostfixCalculator::PostfixCalculator() {
}

void PostfixCalculator::pushNum(int x) {
  s.push(x);
}

int PostfixCalculator::getTopValue() {
  return s.top();
}

void PostfixCalculator::add() {
  int x = s.top();
  s.pop();
  int y = s.top();
  s.pop();
  int z = y + x;
  s.push(z);
}

void PostfixCalculator::subtract() {
  int x = s.top();
  s.pop();
  int y = s.top();
  s.pop();
  int z = y - x;
  s.push(z);
}

void PostfixCalculator::multiply() {
  int x = s.top();
  s.pop();
  int y = s.top();
  s.pop();
  int z = y * x;
  s.push(z);
}

void PostfixCalculator::divide() {
  int x = s.top();
  s.pop();
  int y = s.top();
  s.pop();
  int z = y / x;
  s.push(z);
}

void PostfixCalculator::negate() {
  int x = s.top();
  s.pop();
  int y = -x;
  s.push(y);
}







