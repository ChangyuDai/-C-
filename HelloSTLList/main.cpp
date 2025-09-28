#include <cstdio>
#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> lst;
    lst.push_front(10);
    lst.push_front(20);
    lst.push_back(8);
    lst.push_back(9);
    for (auto it : lst) {
        cout << it << endl;
    }

    return 0;
}