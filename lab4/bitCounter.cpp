/* 
 * Noah French
 * Lab 4
 * Filename: bitCounter.cpp
 * Description: Binary bit counter function
 * 9/22/17
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

// Use recursion to count the number of ones that would be in the binary representation of a given decimal integer.
int binaryOnesCounter(int x) {
  // Base cases
  if (x == 0)
    return 0;
  if (x == 1)
    return 1;
  if (x == 2)
    return 1;

  // If x is even, run the function with x/2, because the number of 1's is equal for even ints and their halves.
  if ((x % 2) == 0) 
    return binaryOnesCounter(x / 2);

  // If x is odd, run the function with x/2 (int division) + 1, because the number of 1's for an odd int is the same as that in floor(n/2) + 1. 
  if ((x % 2) != 0) 
    return 1 + binaryOnesCounter(x / 2);
}

int main(int argc, char **argv) {
  if (argv[1] == NULL)
    cout << "Please provide a command line input." << endl;
  else
    cout << binaryOnesCounter(atoi(argv[1])) << endl;
    
  return 0;
}

