/*
 * Noah French (njf5cu)
 * Lab 10
 * 11/21/17 Happy almost Thanksgiving :')
 * Filename: huffmandec.cpp
 * File Description: main method for inlab 10
 */

#include "heap.h"
#include "HuffNode.h"
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <fstream>

using namespace std;

// Construct a tree of HuffNodes from the string of encoded bits
void makeTree(HuffNode*& root, string character, string prefix, int i) {
  if (i == prefix.length()) //base case
    root = new HuffNode(character);
  else {
    if (root == NULL)
      root = new HuffNode("~", 0);
    if(prefix.at(i) == '0') 
      makeTree(root -> getLeftRef(), character, prefix, i + 1);
    if(prefix.at(i) == '1') 
      makeTree(root -> getRightRef(), character, prefix, i + 1);
  }
}

// Go through the tree of HuffNodes with the left/right instructions
// of the encoded bits. cout the value of the first leaf node.
void readTree(HuffNode*& root, string encoded, int& i) {
  if (i <= encoded.length()) { 
    if (root -> getLeft() == NULL && root -> getRight() == NULL)
      cout << root -> getValue();
    else {
      if (encoded.at(i) == '0') {
	i++;
	readTree(root -> getLeftRef(), encoded, i);
      }
      else if (encoded.at(i) == '1') {
	i++;
	readTree(root -> getRightRef(), encoded, i);
      }
    }
  }   
}

// main(): we want to use parameters
int main (int argc, char **argv) {
  // verify the correct number of parameters
  if ( argc != 2 ) {
    cout << "Must supply the input file name as the only parameter" << endl;
    exit(1);
  }
  // attempt to open the supplied file; must be opened in binary
  // mode, as otherwise whitespace is discarded
  ifstream file(argv[1], ifstream::binary);
  // report any problems opening the file and then exit
  if ( !file.is_open() ) {
    cout << "Unable to open file '" << argv[1] << "'." << endl;
    exit(2);
  }

  vector<string> charVec, prefixVec;
  // read in the first section of the file: the prefix codes
  while ( true ) {
      
    string character, prefix;
    // read in the first token on the line
    file >> character;
    // did we hit the separator?
    if ( (character[0] == '-') && (character.length() > 1) )
      break;
    // check for space
    if ( character == "space" )
      character = " ";
    // read in the prefix code
    file >> prefix;
    // Store the characters and prefixes in vectors with corresponding indices.
    charVec.push_back(character);
    prefixVec.push_back(prefix);    
  }
  // read in the second section of the file: the encoded message
  stringstream sstm;
  while ( true ) {
    string bits;
    // read in the next set of 1's and 0's
    file >> bits;
    // check for the separator
    if ( bits[0] == '-' )
      break;
    // add it to the stringstream
    sstm << bits;
  }
  string allbits = sstm.str();
  // at this point, all the bits are in the 'allbits' string
  // close the file before exiting
  file.close();

  // Re-create the Huffman tree from the code structure read in from the file
  HuffNode * rootNode = new HuffNode();

  // Loop through every char and add it to a tree, using the respective prefix code
  for (int i = 0; i < charVec.size(); i++) {
    makeTree(rootNode, charVec[i], prefixVec[i], 0);
  }

  int index = 0;

  while (index < allbits.length())
    readTree(rootNode, allbits, index);
    
  cout << endl;

  return 0;  
}
