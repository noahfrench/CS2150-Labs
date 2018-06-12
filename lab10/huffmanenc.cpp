/*
 * Noah French (njf5cu)
 * Lab 10
 * 11/20/17
 * Filename: huffmanenc.cpp
 * File Description: main method for prelab 10
 */

#include "heap.h"
#include "HuffNode.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

#include <stdio.h>

void readTree(HuffNode * root, vector<string>& origChar, vector<string>& codeChar, string prefix) {
  if (root -> getLeft() == NULL && root -> getRight() == NULL) {
    origChar.push_back(root -> getValue());
    codeChar.push_back(prefix);
  }
  else {
    readTree(root -> getLeft(), origChar, codeChar, prefix + "0");
    readTree(root -> getRight(), origChar, codeChar,  prefix + "1");
  }
}

int main(int argc, char **argv) {
  // make sure you were given one parameter
  if (argc != 2) {
    cout << "Must supply the input file as the one and only parameter" << endl;
    exit(1);
  }

  // open the file
  FILE *fp = fopen(argv[1], "r");

  // if the file can't be found, output an error message and exit
  if (fp == NULL) {
    cout << "File '" << argv[1] << "' does not exist!" << endl;
    exit(2);
  }

  char g;
  // Store unique chars and their corresponding counts in vectors; the indices will line up
  vector<string> charVec;
  vector<int> countVec;
  // read in each character, one by one
  while((g = fgetc(fp)) != EOF) {

    // Save the char g as a string s
    std::string s(1, g);
    // If it's a space, change it to "space"
    if (s == " ")
      s = "space";
    
    bool repeat = false;
    // if the char is a repeat, add one to its count in the count list
    for (int i = 0; i < charVec.size(); i++) {
      if (s == charVec[i]) {
	countVec[i] ++;
	repeat = true;
      }
    }
    // if the char is not a repeat, add it to the char list
    if (!repeat) {
      charVec.push_back(s);
      countVec.push_back(1);
    } 
  } 

  // erase the weird huge blank space char that gets added at the end
  charVec.erase(charVec.begin() + (charVec.size() - 1));
  countVec.erase(countVec.begin() + (countVec.size() -1)); 

  // Create the heap!
  Heap h;
  vector<HuffNode*> test;
  // Make every word and corresponding frequency count into a HuffNode
  // Insert a ptr to the HuffNode onto the heap
  // Now all the characters and their frequencies will be in a min-heap!
  for (int i = 0; i < charVec.size(); i++) {
    HuffNode * tempNode = new HuffNode(charVec[i], countVec[i]);
    h.insert(tempNode);
  }

  // Build a tree of prefix codes from the min-heap
  h.buildHuffTree();

  // Read the tree
  vector<string> chars;
  vector<string> codes;
  readTree(h.findMin(), chars, codes, "");
  
  for (int i = 0; i < chars.size(); i++) 
    cout << chars[i] << " " << codes[i] << endl;
  
  cout << "----------------------------------------" << endl;

  // read the file again
  rewind(fp);

  int symbols = 0;
  int bitCount = 0;
  while ( (g = fgetc(fp)) != EOF ) {
    symbols ++;

    // Save the char g as a string s
    std::string s(1, g);
    // If it's a space, change it to "space"
    if (s == " ")
      s = "space";

    for (int i = 0; i < chars.size(); i++) {
      if (s == chars[i]) {
	bitCount += codes[i].length();
	cout << codes[i] << " ";
      }
    }
  }
        
  // close the file
    fclose(fp);

    // decrement because the while loop goes one more for some reason
    symbols --;
    cout << endl << "----------------------------------------" << endl;

    float ratio = (8*symbols) / (float) bitCount;
    float cost = bitCount / (float) symbols;

    cout << "There are a total of " << symbols << " symbols that are encoded." << endl;
    cout << "There are " << chars.size() << " distinct symbols used." << endl;
    cout << "There were " << (8 * symbols) << " bits in the original file." << endl;
    cout << "There were " << bitCount << " bits in the compressed file." << endl;
    cout << "This gives a compression ratio of " << ratio << endl;
    cout << "The cost of the Huffman tree is " << cost << " bits per character." << endl;

    return 0;
}
