#include <iostream>
using namespace std;

class Mammal {

public:
  virtual string getName() {
    return name;
  }
  virtual int getAge() {
    return age;
  }
private:
  string name;
  int age;
};

class Platypus : Mammal {

public:
  virtual string getName() {
    return "Platypi do not deserve names.";
  }
  virtual int getAge() {
    return 0;
  }
};

int main() {
  Platypus perry;
  perry.getName();
  perry.getAge();

  return 0;
}
