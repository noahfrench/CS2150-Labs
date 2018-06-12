/*
 * Noah French (njf5cu)
 * Lab 10
 * 11/20/17
 * Filename: heap.h
 * File Description: header file for heap implementation
 */

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>
#include "HuffNode.h"

using namespace std;

class Heap {
 public:
  Heap();
  void insert(HuffNode * node);
  HuffNode * findMin();
  string deleteMin();
  void buildHuffTree();

 private:
  vector<HuffNode*> v;
  int size;
  void percolateUp(int hole);
  void percolateDown(int hole);
};

#endif
