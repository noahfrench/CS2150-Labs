/*
 * Noah French (njf5cu)
 * Lab 4
 * Filename: inlab4.cpp
 * Description: Mini programs to fill in the chart, and other inlab code
 * 9/20/17
 */

#include <iostream>
#include <climits>

using namespace std;

int main() {

  // Some tests used to fill out the chart:
  cout << "int max: "<< INT_MAX << endl;
  cout << "unsigned int max: " << UINT_MAX << endl;
  cout << "char max: " << CHAR_MAX << endl;

  int i = 0;
  int i2 = 1;
  unsigned int ui = 0;
  unsigned int ui2 = 1;
  float f = 0.0;
  float f2 = 1.0;
  double d = 0.0;
  double d2 = 1.0;
  char c = '0';
  char c2 = '1';
  bool b = false;
  bool b2 = true;
  int * pi = NULL;
  char * pc = NULL;
  double * pd = NULL;

  // Code for the "Representation in memory" section
  bool repBool = true;
  char repChar = 'z';
  int repInt = 88;
  double repDouble = 187.423121;
  int tempInt = -27;
  int* repIntPtr = &tempInt;

  cout << repBool << endl;
  cout << repChar << endl;
  cout << repInt << endl;
  cout << repDouble << endl;
  cout << repIntPtr << endl;

  // Code for the "Primitive Arrays in C++" section
  int IntArray[10];
  char CharArray[10];
  int IntArray2D[6][5];
  char CharArray2D[6][5];

  int value = 0;
  for (int i = 0; i < 10; i++) {
    value += 3;
    IntArray[i] = value;
    CharArray[i] = value;
  }

  for (int i = 0; i <6; i++) {
    for (int j = 0; j < 5; j++) {
      value += 2;
      IntArray2D[j][i] = value;
      CharArray2D[j][i] = value;
    }
  }
  
  return 0;
}

