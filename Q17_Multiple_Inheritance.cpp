#include <iostream>
using namespace std;

class Father {
public:
    void fatherData() {
        cout << "Father class." << endl;
    }
};

class Mother {
public:
    void motherData() {
        cout << "Mother class." << endl;
    }
};

class Child : public Father, public Mother {
public:
    void childData() {
        cout << "Child class." << endl;
    }
};

int main() {
    Child c;
    c.fatherData();
    c.motherData();
    c.childData();

    return 0;
}