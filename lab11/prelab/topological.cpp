/* 
 * Noah French (njf5cu)
 * Lab 11
 * 11/28/17
 * Filename: topological.cpp
 * File Description: Pre-lab Topological Sorter
 */

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
using namespace std;

/** @brief A simple node struct for use in graphs.
 */
struct node {
  string name; /**< Name or value to give the node. */
  vector<string> next; /**< A list of the names of the nodes this node projects to. */
  int inDegree; /**< The number of nodes that project in to this node. */
};

// we want to use parameters
int main (int argc, char **argv) {
  // verify the correct number of parameters
  if ( argc != 2 ) {
    cout << "Must supply the input file name as the one and only parameter" << endl;
    exit(1);
  }
  // attempt to open the supplied file
  ifstream file(argv[1], ifstream::binary);
  // report any problems opening the file and then exit
  if ( !file.is_open() ) {
    cout << "Unable to open file '" << argv[1] << "'." << endl;
    exit(2);
  }

  // Read in every line in the file
  vector<node*> v;
  string s1, s2;
  while (s1 != "0") {
    file >> s1;
    file >> s2;

    int repeatIndex;
    int nextIndex;
    // Check to see if the class is new (not already in graph)
    bool newClass = true;
    bool newNext = true;
    for (int i = 0; i < v.size(); i++) {
      if (v[i] -> name == s1) {
	newClass = false;
	repeatIndex = i;
      }
      if (v[i] -> name == s2) {
	newNext = false;
	nextIndex = i;
      }
    }

    // If the "class" is not '0'...
    if (s1 != "0") {
      // If the class is new, put it in the vector with its edge.
      if (newClass) {
	node * thisNode = new node;
	node * nextNode = new node;
	thisNode -> name = s1;
	nextNode -> name = s2;
	(thisNode -> next).push_back(s2);
	v.push_back(thisNode);
	 
	// Increment the inDegree
	if (newNext) {
	  nextNode -> inDegree = 1;
	  v.push_back(nextNode);	  
	}	
	else
	  v[nextIndex] -> inDegree ++;
      }

      // If the class is already in the vector, add the new path!
      else {
	node * newNode = new node;
	newNode -> name = s2;
        (v[repeatIndex] -> next).push_back(s2);
	// Increment the inDegree
	if (newNext) {
	  node * newNode2 = new node;
	  newNode2 -> name = s2;
	  newNode -> inDegree = 1;
	  v.push_back(newNode);	  
	}	
	else
	  v[nextIndex] -> inDegree ++;
      }
    }
  }
  // string comparison done with ==, but not shown here
  // close the file before exiting
  file.close();

  // Do the topological sort
  string toPrint;
  vector<string> inDecList;
  // Find the node with inDegree 0
  // Save its name as "toPrint" and the list of the names of the nodes it projects to
  // as "inDecList"
  for (int counter = 0; counter < v.size(); counter ++) {
    for (int i = 0; i < v.size(); i ++) {
      if (v[i] -> inDegree == 0) {;
	v[i] -> inDegree = -1;
	toPrint = v[i] -> name;
	inDecList = v[i] -> next;
	break;
      }      
    }
    cout << toPrint << " ";

    for (int i = 0; i < inDecList.size(); i++) {
      for (int j = 0; j < v.size(); j++) {
	if (inDecList[i] == v[j] -> name) 
	  (v[j] -> inDegree) --;
      }
    }    
  }

  cout << endl;

  return 0;
}
