#include <iostream>
#include <string>

using namespace std;

class Person {
  public:
    Person() {
        cout << "Wa~ Wa~" << endl;
        cout << "for this person name";
        getline(cin, name);
    }
    virtual ~Person() { cout << "Wu~ Wu~" << endl; }
    string GetName() { return name; }
    virtual void Introduction() {
        cout << "Hi, My name is " << name << "." << endl;
    }

  private:
    string name; 
};

int main() {
    Person xiaoA;
    xiaoA.Introduction();
    return 0;
}