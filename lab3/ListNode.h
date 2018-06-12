/* 
 * Noah French (njf5cu)
 * Lab 2
 * Filename: ListNode.h
 * Description: ListNode class definition
 * 9/8/17
 */ 

#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>

// next line needed because NULL is part of std namespace
using namespace std;

class Stack;
class ListNode {
public:
    ListNode();                 // Constructor

private:
    int value;
    ListNode *next;  
    
    friend class Stack;

    // Not writing a destructor is fine in this case since there is no
    // dynamically allocated memory in this class.  No constructor is
    // necessary, as an object will be set up by the List class.
};

#endif

