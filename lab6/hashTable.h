/**
 * Noah French (njf5cu)
 * Lab 6
 * 8/20/17
 * Filename: hashTable.h
 * File Description: header file for hash table implementation
 */

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class hashTable {
 public:
  hashTable(unsigned int dictSize); // constructor (must take dictionary size as input)
  void insert(string word); // insert the word in to the hash table
  unsigned int hash(string word); // calculate the hash value of the word
  int calculateTableSize(unsigned int dictSize); // calculate the table size based on the number of words in the dictionary
  bool find(string word); // search to see if the word is in the dictionary
  
 private:
  int size; // size of the hash table
  vector<string> table; 
  int exponents[21]; // powers of 37 to be used by the hash(string word) method
};

// non-member function stubs:
bool checkprime(unsigned int p);
int getNextPrime(unsigned int n);

#endif
