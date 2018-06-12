/* 
 * Noah French (njf5cu)
 * Lab 3
 * Filename: stack.cpp
 * File Description: Implementation of Stack
 * 9/14/17
 */

#include "stack.h"

// Constructor
Stack::Stack() {
  head = NULL;
}

// empty method
bool Stack::empty() const {
  return (head == NULL);
}

// push method
void Stack::push(int x) {
  ListNode * newNode = new ListNode;
  newNode -> value = x;
  if (head == NULL)
    newNode -> next = NULL;
  else
    newNode -> next = head;
  head = newNode;
}

// pop method
void Stack::pop() {
  if (head != NULL) {
    ListNode * tempNode = new ListNode;
    tempNode -> next = head -> next;
    head = tempNode -> next;
    delete tempNode;
  }  
}

// top method
int Stack::top() const {
  return head -> value;
}






