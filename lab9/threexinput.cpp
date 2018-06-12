/*
 * Noah French (njf5cu)
 * Lab 9
 * 11/14/17
 * Filename: threexinput.cpp
 * File Description: main method to read in numbers for threexplusone routine
 */

#include <iostream>
#include "timer.h"

using namespace std;

extern "C" long threexplusone(long);

int main() {

  long x;
  long n;
  long steps;
  double avgTime;
  cout << "Give a value to pass to the threexplusone subroutine: ";
  cin >> x;
  cout << "How many times should the subroutine be called? ";
  cin >> n;

  // Run threexplusone n times with x as the input. Time it. Save the output as "steps"
  timer t;
  t.start();
  for (int i = 0; i < n; i++) {
    steps = threexplusone(x);   
  }
  t.stop();

  // Calculate the average time taken per function call
  avgTime = t.getTime() / n;

  // Print the number of steps and average time
  cout << "It took " << steps << " steps to reach 1." << endl;
  cout << "Average time per iteration: " << avgTime << endl;

  return 0;
}
