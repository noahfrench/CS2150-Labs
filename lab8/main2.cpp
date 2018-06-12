#include <iostream>

using namespace std;

class Person
{
public:
  void setAge(int num) {
    age = num;
  }
  bool human;
  long num;
  Person() {
    age = 11;
    initial = 'i';
    weight = 200;
  }
private:
  int age;
  char initial;
  double weight;
};

int main() {
  Person p;
  p.human = false;
  p.num = 24;
  p.num = 25;
  p.setAge(17);


  return 0;
 };


  
