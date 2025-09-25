#include <iostream>
#include <ostream>
#include <string>

using namespace std;

struct Person {
  Person() { cout << "Wa ~ ~ Wa ~ ~" << endl; }
  ~Person() { cout << "Wu ~ ~ Wu ~ ~" << endl; }

  // void Introduction() {
  //   if (name == "志玲") {
  //     cout << "大家好，我是性感美女林志玲" << endl;

  //   } else {
  //     cout << "Hi, My name is " << name << endl;
  //   }
  // }

  virtual void Introduction() {
    if (name == "志玲") {
      cout << "大家好，我是性感美女林志玲" << endl;

    } else {
      cout << "Hi, My name is " << name << endl;
    }
  }

  void Sing() { cout << "!  @ # $ % ^ & * ( ) " << endl; }

  string name;
};

struct Beauty : Person {
  ~Beauty() { cout << "Wu Wu 人生似蜉蝣。" << endl; }
  void Introduction() override { cout << "大家好， 我是美女 " << name << endl; }
};

int main(int argc, char const *argv[]) {
#if 0
  Person xiaoA;
  xiaoA.name = "Xiao A";
  Person *xiaoB = new Person;
  xiaoB->name = "Xiao B";
  // cout << xiaoA.name << endl;
  // cout << xiaoB->name << endl;

  // Person * Zhiling = new Person;
  // Zhiling->name = "志玲";

  // Beauty * ShenMuli = new Beauty;
  // ShenMuli->name = "神木丽";

  // xiaoA.Introduction();
  // xiaoB->Introduction();
  // Zhiling->Introduction();
  // ShenMuli->Introduction();
  // ShenMuli->Sing();
  // delete xiaoB;
  // Person *xiaoA = new Beauty;
  // xiaoA->name = "Xiao A";
  // xiaoA->Introduction();
  // delete xiaoA;

  // Beauty *Zhiling = new Beauty;
  // xiaoA->name = "志玲";
  // Zhiling->Introduction();
  // delete Zhiling;
#endif
  Person *someOne;

  while (true) {
    cout << "choice(1/2/3）" << endl
         << "1--------simple man" << endl
         << "2--------sexy " << endl
         << "3--------exit" << endl;
    int sel = 0;
    cin >> sel;
    if (cin.fail()) { // 读入失败
      cin.clear();    // 清除失败标志
    }
    cin.sync(); // 清楚所有未读入的内容
    if (3 == sel) {
      break;
    }
    if (1 == sel) {
      someOne = new Person;
    } else if (2 == sel) {
      someOne = new Beauty;
    } else {
      cout << "input wrong, Please retry" << endl;
      continue;
    }
    cout << "input your name";
    string name;
    getline(cin, name);
    someOne->name = name;
    cout << name << "'s Introduction" << endl;
    someOne->Introduction();
    delete someOne;
  }

  return 0;
}
