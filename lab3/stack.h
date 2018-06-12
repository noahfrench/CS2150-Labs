/*
 * Noah French (njf5cu)
 * Lab 3
 * Filename: stack.h
 * File Description: Class Declaration of Stack
 * 9/14/17
 */

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "ListNode.h"

using namespace std;

class Stack {
 public:
  Stack();
  bool empty() const;
  void push(int value);
  void pop();
  int top() const;

 private:
  ListNode * head;
};

#endif
