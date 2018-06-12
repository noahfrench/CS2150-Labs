/*
 * Noah French (njf5cu)
 * Lab 10
 * 11/20/17
 * Filename: heap.cpp
 * File Description: implementation of the Heap class
 */

#include "heap.h"
#include <stdlib.h>

// Default constructor
Heap::Heap() {
  size = 0;
  v.push_back(0);
}

void Heap::insert(HuffNode * node) {
  v.push_back(node);
  percolateUp(++size);
}

void Heap::percolateUp(int hole) {
  // get the HuffNode just inserted
  HuffNode * newNode  = v[hole];
    // while we haven't run off the top and while the
    // count is less than that of the parent...
  for ( ; (hole > 1) && (newNode -> count < v[hole/2] -> count); hole /= 2 )
    v[hole] = v[hole/2]; // move the parent down
    // correct position found!  insert at that spot
  v[hole] = newNode;
}

// Delete the HuffNode with the smallest count and return the value of the node deleted
string Heap::deleteMin() {
  if (size == 0)
    throw "deleteMin() called on empty heap";
  // save the value of the min node
  string ret = v[1] -> value;
  // move the last inserted position into the root
  v[1] = v[size--];
  // make sure the vector knows that there is one less element
  v.pop_back();
  // percolate the root down to the proper position
  percolateDown(1);
  // return the value of the node that was deleted
  return ret;
}
  
void Heap::percolateDown(int hole) {
  // get the HuffNode to percolate down
  HuffNode * theNode = v[hole];
  // while ther is a left child:
  while (hole * 2 <= size) {
    int child = hole * 2; // the left child index
    // is there a right child? if so, is it lesser?
    if ( (child + 1 <= size) && (v[child + 1] -> count < v[child] -> count) )
      child ++;
    // if the child is greater than the node:
    if ( theNode -> count > v[child] -> count ) {
      v[hole] = v[child]; // move child up
      hole = child;
    }
    else
      break;
  }
  // correct position found! insert at that spot
  v[hole] = theNode;
}

HuffNode * Heap::findMin() {
  return v[1];
}

// Build a tree of prefix codes (a Huffman code)
void Heap::buildHuffTree() {
  if (size == 0) {
    cout << "There are no HuffNodes in the heap.";
      exit(1);
  }
  // While there is more than one element in the heap, pop the two mins, make them
  // the children of a dummy node, then insert that dummy node into the heap
  while (size != 1) {
    HuffNode * dummyNode = new HuffNode();
    dummyNode -> left = v[1];
    deleteMin();
    dummyNode -> right = v[1];
    deleteMin();
    // Set the count of the dummyNode
    dummyNode -> count = dummyNode -> left -> count + dummyNode -> right -> count;
    insert(dummyNode);
  }
}
  



