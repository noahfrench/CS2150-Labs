/**
 * Noah French (njf5cu)
 * Lab 6
 * 8/20/17
 * Filename: wordPuzzle.cpp
 * File description: contains the main() method to solve the crossword puzzle and functions harvested from getWordInGrid.cpp
 */

#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include "timer.h"
#include "hashTable.h"

using namespace std;

#define MAXROWS 500
#define MAXCOLS 500
char grid[MAXROWS][MAXCOLS];

// forward declarations
bool readInGrid (string filename, int &rows, int &cols);
char* getWordInGrid (int startRow, int startCol, int dir, int len,
                     int numRows, int numCols);


int main(int argc, char* argv[]) {

  // Count the number of words in the dictionary file.
  int wordCount = 0;
  string line;
  ifstream myfile(argv[1]);
  if (myfile.is_open()) {
    while (getline (myfile,line)) {
      wordCount ++;
    }
    myfile.close();
  }
  else
    cout << "Error reading in dictionary file!" << endl;

  // Make the hash table.
  hashTable hTable(wordCount);

  // Fill the hash table with the words from the dictionary file.
  myfile.open(argv[1]);
  while (getline (myfile,line))
    hTable.insert(line);
  myfile.close();
  
  // Take in the grid file; record the number of rows and columns
  int rows, cols;
  bool result = readInGrid (argv[2], rows, cols);
  if ( !result ) {
    cout << "Error reading in grid file!" << endl;
    exit(1); 
  }

  // Go through every possible word in the grid and see if it's in the hashTable.
  // Count the number of finds.
  // If a word is a match, check the orientation, and input the proper info into the
  // Vector calls outString
  int foundCount = 0;
  vector<string> outString;
  timer t;
  t.start();
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      for (int k = 0; k < 8; k++) {
	for (int l = 3; l < 23; l++) {
	  if (strlen(getWordInGrid(i, j, k, l, rows, cols)) != l)
	    break;
	  if (hTable.find(getWordInGrid(i, j, k, l, rows, cols))) {
	    foundCount ++;
	    if (k == 0) { // North
	      string temp = "";
	      temp += "N (";
	      stringstream ss;
	      ss << i;
	      string iString = ss.str();
	      temp += iString;
	      temp += ", ";
	      stringstream s;
	      s << j;
	      string jString = s.str();
	      temp += jString;
	      temp += "):    ";
	      temp += getWordInGrid(i, j, k, l, rows, cols);
	      outString.push_back(temp);
	    }
	    else if (k == 1) { // Northeast
	      string temp = "";
	      temp += "NE(";
	      stringstream ss;
	      ss << i;
	      string iString = ss.str();
	      temp += iString;
	      temp += ", ";
	      stringstream s;
	      s << j;
	      string jString = s.str();
	      temp += jString;
	      temp += "):    ";
	      temp += getWordInGrid(i, j, k, l, rows, cols);
	      outString.push_back(temp);
	    }
	    else if (k == 2) { // East
	      string temp = "";
	      temp += "E (";
	      stringstream ss;
	      ss << i;
	      string iString = ss.str();
	      temp += iString;
	      temp += ", ";
	      stringstream s;
	      s << j;
	      string jString = s.str();
	      temp += jString;
	      temp += "):    ";
	      temp += getWordInGrid(i, j, k, l, rows, cols);
	      outString.push_back(temp);
	    }
	    else if (k == 3) { //Southeast
	     string temp = "";
	      temp += "SE(";
	      stringstream ss;
	      ss << i;
	      string iString = ss.str();
	      temp += iString;
	      temp += ", ";
	      stringstream s;
	      s << j;
	      string jString = s.str();
	      temp += jString;
	      temp += "):    ";
	      temp += getWordInGrid(i, j, k, l, rows, cols);
	      outString.push_back(temp);
	    }
	    else if (k == 4) { // South
	     string temp = "";
	      temp += "S (";
	      stringstream ss;
	      ss << i;
	      string iString = ss.str();
	      temp += iString;
	      temp += ", ";
	      stringstream s;
	      s << j;
	      string jString = s.str();
	      temp += jString;
	      temp += "):    ";
	      temp += getWordInGrid(i, j, k, l, rows, cols);
	      outString.push_back(temp);
	    }
	    else if (k == 5) { // Southwest
	      string temp = "";
	      temp += "SW(";
	      stringstream ss;
	      ss << i;
	      string iString = ss.str();
	      temp += iString;
	      temp += ", ";
	      stringstream s;
	      s << j;
	      string jString = s.str();
	      temp += jString;
	      temp += "):    ";
	      temp += getWordInGrid(i, j, k, l, rows, cols);
	      outString.push_back(temp);
	    }
	    else if (k == 6) { // West
	     string temp = "";
	      temp += "W (";
	      stringstream ss;
	      ss << i;
	      string iString = ss.str();
	      temp += iString;
	      temp += ", ";
	      stringstream s;
	      s << j;
	      string jString = s.str();
	      temp += jString;
	      temp += "):    ";
	      temp += getWordInGrid(i, j, k, l, rows, cols);
	      outString.push_back(temp);
	    }
	    else if (k == 7) { // Northwest
	     string temp = "";
	      temp += "NW(";
	      stringstream ss;
	      ss << i;
	      string iString = ss.str();
	      temp += iString;
	      temp += ", ";
	      stringstream s;
	      s << j;
	      string jString = s.str();
	      temp += jString;
	      temp += "):    ";
	      temp += getWordInGrid(i, j, k, l, rows, cols);
	      outString.push_back(temp);
	    }
	  }
	}
      }
    }
  }
  t.stop();
  // print out all the words found and their coordinates.
  for (int i = 0; i < outString.size(); i++)
    cout << outString[i] << endl;
  // Print out other necessary info.
  cout << foundCount << " words found" << endl;
  cout << "Found all words in " << t << " seconds" << endl;
  // Print out an int of the number of miliseconds for the bash script
  cout << (int)(t.getTime() * 1000) << endl;
  
  return 0;
}

bool readInGrid (string filename, int &rows, int &cols) {
    // a C++ string to hold the line of data that is read in
    string line;
    // set up the file stream to read in the file (takes in a C-style
    // char* string, not a C++ string object)
    ifstream file(filename.c_str());
    // upon an error, return false
    if ( !file.is_open() )
        return false;
    // the first line is the number of rows: read it in
    file >> rows;
    //cout << "There are " << rows << " rows." << endl;
    getline (file,line); // eats up the return at the end of the line
    // the second line is the number of cols: read it in and parse it
    file >> cols;
    //cout << "There are " << cols << " cols." << endl;
    getline (file,line); // eats up the return at the end of the line
    // the third and last line is the data: read it in
    getline (file,line);
    // close the file
    file.close();
    // convert the string read in to the 2-D grid format into the
    // grid[][] array.  In the process, we'll print the grid to the
    // screen as well.
    int pos = 0; // the current position in the input data
    for ( int r = 0; r < rows; r++ ) {
        for ( int c = 0; c < cols; c++ ) {
            grid[r][c] = line[pos++];
            //cout << grid[r][c];
        }
        //cout << endl;
    }
    // return success!
    return true;
}

char* getWordInGrid (int startRow, int startCol, int dir, int len,
                     int numRows, int numCols) {
    // the static-ness of this variable prevents it from being
    // re-declared upon each function invocataion.  It also prevents it
    // from being deallocated between invocations.  It's probably not
    // good programming practice, but it's an efficient means to return
    // a value.
    static char output[256];
    // make sure the length is not greater than the array size.
    if ( len >= 255 )
        len = 255;
    // the position in the output array, the current row, and the
    // current column
    int pos = 0, r = startRow, c = startCol;
    // iterate once for each character in the output
    for ( int i = 0; i < len; i++ ) {
        // if the current row or column is out of bounds, then break
        if ( (c >= numCols) || (r >= numRows) || (r < 0) || (c < 0) )
            break;
        // set the next character in the output array to the next letter
        // in the grid
        output[pos++] = grid[r][c];
        // move in the direction specified by the parameter
        switch (dir) { // assumes grid[0][0] is in the upper-left
            case 0:
                r--;
                break; // north
            case 1:
                r--;
                c++;
                break; // north-east
            case 2:
                c++;
                break; // east
            case 3:
                r++;
                c++;
                break; // south-east
            case 4:
                r++;
                break; // south
            case 5:
                r++;
                c--;
                break; // south-west
            case 6:
                c--;
                break; // west
            case 7:
                r--;
                c--;
                break; // north-west
        }
    }
    // set the next character to zero (end-of-string)
    output[pos] = 0;
    // return the string (a C-style char* string, not a C++ string
    // object)
    return output;
}


