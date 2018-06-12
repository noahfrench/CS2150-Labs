#include <iostream>

using namespace std;

// foward declarations

void arrayFunc(int param[5]) {
  for (int i = 0; i <5; i++){
    param[i] = 2;
  }
}

void intFunc(char c) {
  
}

void refFunc(int& i) {
}

void ptrFunc(int* i) {
}

int main() {
  char c = 'm';
  intFunc(c);
  int x = 7;
  refFunc(x);
  int* ptr = &x;
  ptrFunc(ptr);
}




