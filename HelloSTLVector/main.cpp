#include <iostream>
#include <limits>
#include <ostream>
#include <string.h>
#include <string>
#include <vector>

using namespace std;

class Person {
  public:
    Person() {
        cout << "Please input your name:";
        cin.sync(); // 清空换行符
        getline(cin, name);
        cout << "age";
        cin >> age;
    }
    virtual ~Person() {}
    string GetName() const { return name; }

    int GetAge() const { return age; }

  private:
    string name;
    int age;
};

class Beauty : public Person {
  public:
    Beauty() {
        cout << "Please input Where are you from:";
        cin.sync(); // 清空换行符
        getline(cin, nationality);
    }
    ~Beauty() {}

    string GetNationality() { return nationality; }
    int GetBust() { return bust; }
    int GetWaist() { return waist; }
    int GetHips() { return hips; }

    void Introduction() const { cout << introduction << endl; }

  private:
    string nationality;  // 国籍
    int bust;            // 胸围
    int waist;           // 腰围
    int hips;            // 臀围
    string introduction; // 自我介绍
};

// 美女管理类
class BeautyManager {
  public:
    void Input();      // 输入新的美女
    void Find() const; // 按照姓名查找美女
    void Count() const {
        cout << "How many beauty ? " << beauties.size() << endl;
    }
    void Introduction() const;
    void Clear();

  private:
    vector<Beauty> beauties;
};

void BeautyManager::Input() {
    Beauty b;
    beauties.push_back(b);
}

void BeautyManager::Find() const {
    cout << "Please Which Beauty you wanna to find?";
    string name;
    getline(cin, name);
    int found = 0;
    for (auto be : beauties) {
        if (be.GetName() == name) {
            ++found;
            cout << "Found!" << endl;
            cout << "Name" << be.GetName() << endl;
            cout << "Age" << be.GetAge() << endl;
            cout << "Bust" << be.GetBust() << endl;
            cout << "Waist" << be.GetWaist() << endl;
            cout << "Hips" << be.GetHips() << endl;
        }
    }
    cout << "There are" << found << " Ladies Name: " << name << endl;
}

void BeautyManager::Introduction() const {
    for (unsigned int i = 0; i < beauties.size(); ++i) {
        cout << "Now is Lady: " << beauties[i].GetName() << endl;
        beauties[i].Introduction();
    }
}

void BeautyManager::Clear() {
    cout << "Are you sure you wanna clear Beauty?  (Y/N) ";
    char c;
    cin >> c;
    cin.sync();
    if (c == 'Y' || c == 'y') {
        beauties.clear();
        cout << "Data is Cleared!!!" << endl;
    }
}

int ShowMenu() {
    cout << "Please Choice: " << endl;
    cout << "1----Beauty Info input " << endl
         << "2----Beauty Info Find " << endl
         << "3----Check Beauties numb " << endl
         << "4----Beauty Introduction " << endl
         << "5----Clear Beauties Info" << endl
         << endl
         << "6----about" << endl
         << "7----exit" << endl;
    int sel = 0;
    cin >> sel;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return sel;
}

void About() {
    cout << "International sexy beauty V1.0" << endl << "Athor Dai" << endl;
}

int main() {
    cout << "Welecome to Lady Sexy Match" << endl;
    BeautyManager bm;
    while (true) {
        int sel = ShowMenu();
        if (1 == sel) {
            bm.Input();
        } else if (2 == sel) {
            bm.Find();
        } else if (3 == sel) {
            bm.Count();
        } else if (4 == sel) {
            bm.Introduction();
        } else if (5 == sel) {
            bm.Clear();
        } else if (6 == sel) {
            About();
        } else if (7 == sel) {
            break;
        } else {
            if (cin.fail()) {
                cin.clear();
                cin.sync();
            }
            cout << "Please retry" << endl;
        }
    }

    return 0;
}
