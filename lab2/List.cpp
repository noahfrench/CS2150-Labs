/* 
 * Noah French (njf5cu)
 * Lab 2
 * Filename: List.cpp
 * Description: List class implementation
 * 9/8/17
 */

#include <iostream>
#include "List.h"

using namespace std;

// Constructor
List::List() {
  head = new ListNode;
  tail = new ListNode;
  head->next = tail;
  tail->previous = head;
  count = 0;
}

// Copy Constructor
List::List(const List& source) {     
    head=new ListNode;
    tail=new ListNode;
    head->next=tail;
    tail->previous=head;
    count=0;
    ListItr iter(source.head->next);
    while (!iter.isPastEnd()) {   
        insertAtTail(iter.retrieve());
        iter.moveForward();
    }
}

// Destructor
List::~List() {
  makeEmpty();
  delete head;
  delete tail;
}

// Equals operator
List& List::operator=(const List& source) {
    if (this == &source)
        return *this;
    else {
        makeEmpty();
        ListItr iter(source.head->next);
        while (!iter.isPastEnd()) {
            insertAtTail(iter.retrieve());
            iter.moveForward();
        }
    }
    return *this;
}

// Returns true if empty; else false
bool List::isEmpty() const {
  return (count == 0);
}

// Removes all items except blank head and tail
// While the count is nonzero, delete the node after the head, and connect the head to the next node.
void List::makeEmpty() {
  ListItr itr = ListItr(head -> next);
  head -> next = tail;
  tail -> previous = head;
  while (!itr.isPastEnd()) {
    delete itr.current -> previous;
    itr.moveForward();
  }
  count = 0;
}

// Returns an iterator that points to the ListNode in the first position
ListItr List::first() {
  ListItr itr = ListItr(head -> next);
  return itr;
}

// Returns an iterator that points to the ListNode in the last position
ListItr List::last() {
  ListItr itr = ListItr(tail -> previous);
  return itr;
}

// Inserts x after current iterator position p
void List::insertAfter(int x, ListItr position) {
  ListNode * newNode = new ListNode;
  ListNode * currentNode = position.current;
  newNode -> value = x;
  newNode -> previous = currentNode;
  newNode -> next = currentNode -> next;
  currentNode -> next -> previous = newNode;
  currentNode -> next = newNode;
  count ++;
}

// Inserts x before current iterator position p
void List::insertBefore(int x, ListItr position) {
  ListNode * newNode = new ListNode;
  ListNode * currentNode = position.current;
  newNode -> value = x;
  newNode -> next = currentNode;
  newNode -> previous = currentNode -> previous;
  currentNode -> previous -> next = newNode;
  currentNode -> previous = newNode;
  count ++;
}

// Insert x at tail of list
void List::insertAtTail(int x) {
  ListNode * newNode = new ListNode;
  newNode -> value = x;
  newNode -> previous = tail -> previous;
  newNode -> next = tail;
  tail -> previous -> next = newNode;
  tail -> previous = newNode;
  count ++;
}

//Removes the first occurance of x
void List::remove(int x) {
  ListItr itr = ListItr(head);
  bool foundIt = false;
  while (!itr.isPastEnd() && !foundIt) {
    if (itr.retrieve() == x) {
      itr.current -> previous -> next = itr.current -> next;
      itr.current -> next -> previous = itr.current -> previous;
      delete itr.current;
      foundIt = true;
    }
    itr.moveForward();
  }
  if (foundIt)
    count--;
}

// Returns an iterator that points to the first occurence of x, else return an iterator to the dummy tail node
ListItr List::find(int x) {
  ListItr itr = ListItr(head);
  while (!itr.isPastEnd()) {
    if (itr.retrieve() == x) {
      ListItr returnItr = ListItr(itr.current);
      return returnItr;
    }
    itr.moveForward();
  }
  ListItr tailItr = ListItr(tail);
  return tailItr;
}

// Returns the number of elements in the list
int List::size() const {
  return count;
}

//Prints list forwards when direction is true or backwards when direction is false
void printList(List& source, bool direction) {
  if (direction) {
    ListItr itr = source.first();
    while (!(itr.isPastEnd())) {
      cout << itr.retrieve() << endl;
      itr.moveForward();
    }
  } else {
    ListItr itr = source.last();
    while (!(itr.isPastBeginning())) {
      cout << itr.retrieve() << endl;
      itr.moveBackward();
    }    
  }
}



