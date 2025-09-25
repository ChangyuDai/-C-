#include <iostream>
#include <ostream>

using namespace std;

struct Person {
  Person() { cout << "Wa ~ ~ Wa ~ ~" << endl; }
  ~Person() { cout << "Wu ~ ~ Wu ~ ~" << endl; }

  void Introduction() {
    cout << "Hi, My name is " << name << endl;
  }

  string name;
};

int main(int argc, char const *argv[]) {
  /* code */
  Person xiaoA;
  xiaoA.name = "Xiao A";
  Person *xiaoB = new Person;
  xiaoB->name = "Xiao B";
  // cout << xiaoA.name << endl;
  // cout << xiaoB->name << endl;

  xiaoA.Introduction();
  xiaoB->Introduction();


  delete xiaoB;

  return 0;
}
