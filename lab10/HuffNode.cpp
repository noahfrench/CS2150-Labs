/*
 * Noah French (njf5cu)
 * Lab 10
 * 11/20/17
 * Filename: HuffNode.cpp
 * File Description: Implementation of HuffNode class
 */

#include "HuffNode.h"

// Default Constructor
HuffNode::HuffNode() {
  value = "~";
  count = 0;
  left = NULL;
  right = NULL;
}

HuffNode::HuffNode(string value) {
  this -> value = value;
  count = 0;
  left = NULL;
  right = NULL;
}

// Constructor that takes value and count
HuffNode::HuffNode(string value, int count) {
  this -> value = value;
  this -> count = count;
  left = NULL;
  right = NULL;
}

HuffNode * HuffNode::getRight() {
  return right;
}

HuffNode * HuffNode::getLeft() {
  return left;
}

HuffNode*& HuffNode::getLeftRef() {
  return left;
}

HuffNode*& HuffNode::getRightRef() {
  return right;
}

string HuffNode::getValue() {
  return value;
}
