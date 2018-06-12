/*
 * Noah French (njf5cu)
 * Lab 10
 * 11/20/17
 * Filename: HuffNode.h
 * File Description: Header file for HuffNode class
 */

#ifndef HUFFNODE_H
#define HUFFNODE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HuffNode {
 public:
  HuffNode();
  HuffNode(string value, int count);
  HuffNode(string value);
  HuffNode * getRight();
  HuffNode * getLeft();
  string getValue();
  HuffNode*& getRightRef();
  HuffNode*& getLeftRef();
 
 private:
  string value;
  int count;
  friend class Heap;
  HuffNode *left, *right;
};

#endif
