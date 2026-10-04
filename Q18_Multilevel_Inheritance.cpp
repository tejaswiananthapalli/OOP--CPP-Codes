#include <iostream>
using namespace std;

class Grandparent {
public:
    void grandparentData() {
        cout << "Grandparent class." << endl;
    }
};

class Parent : public Grandparent {
public:
    void parentData() {
        cout << "Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void childData() {
        cout << "Child class." << endl;
    }
};

int main() {
    Child c;
    c.grandparentData();
    c.parentData();
    c.childData();

    return 0;
}