#include <iostream>

using namespace std;

//forward declarations

int loopFunc(int x) {
  int y = 0;
  
  for (int i=0; i < x; i++)
    y++;

  return y;
}

int main() {
  int z = loopFunc(4);

  return 0;
}

