#include <iostream>

using namespace std;

struct Object {
  Object() { std::cout << "Hello World!" << std::endl; }

  ~Object() { std::cout << "Bye the World!" << std::endl; }
};

int main() {
  // Object O;

  // {
  //     Object o1;
  // }

  // Object o2;

  Object *o = new Object();
  delete o;

  return 0;
}