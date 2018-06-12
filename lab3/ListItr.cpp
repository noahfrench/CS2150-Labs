/*
 * Noah French (njf5cu)
 * Lab 2
 * Filename: ListItr.cpp
 * Description: Implementation of the ListItr class
 * 9/8/17
 */

#include <iostream>
#include "ListItr.h"
using namespace std;

// Constructor
ListItr::ListItr(){
  current = NULL;
}

// One parameter constructor
ListItr::ListItr(ListNode * theNode) {
  current = theNode;
}

// Returns true if past end position in list, else false
bool ListItr::isPastEnd() const {
  if ((current -> next) == NULL)
    return true;
  return false;
}

// Returns true if past first position in list, else false
bool ListItr::isPastBeginning() const {
  if ((current -> previous) == NULL)
     return true;
  return false;
}

// Advances current to next position in list (unless already past end of list)
void ListItr::moveForward() {
  if (!(current -> next == NULL))
    current = current -> next;
}

// Moves current back to previous position in list (unless already past beginning of list)
void ListItr::moveBackward() {
  if (!(current -> previous == NULL))
    current = current -> previous;
}

// Returns item in current position
// Dereference the "current pointer" (now a ListNode) and return the value
int ListItr::retrieve () const {
  return (*current).value;
}


