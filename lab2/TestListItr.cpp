#include <iostream>
#include "ListItr.h"

using namespace std;

int main() {
  ListItr itr1, itr2;

  ListNode node1, node2, node3;

  node1.next = node2;
  node2.next = node3;
  node2.previous = node1;
  node3.previous = node2;

  itr1 = ListItr(*node1);

  cout << "what the hell am I doing?" << endl;
  
  return 0;

}
