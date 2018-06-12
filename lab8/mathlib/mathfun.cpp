/*
 * Noah French (njf5cu)
 * Lab 8
 * 10/31/27
 * Filename: mathfun.cpp
 * File Description: main method to test product and power subroutines
 */

#include <iostream>

using namespace std;

extern "C" long product(long, long);
extern "C" long power(long, long);

int main() {
  long x, y, resProduct, resPower;

  cout << "Enter a value for x: ";
  cin >> x;
  cout << "Enter a value for y: ";
  cin >> y;

  if (x <= 0 || y <= 0) {
    cerr << "Values for x and y have to be greater than zero.\n";
    return 1;
  }

  resProduct = product(x, y);
  resPower = power(x, y);

  cout << "x * y = " << resProduct << endl;
  cout << "x ^ y = " << resPower << endl;
  
  return 0;
}
