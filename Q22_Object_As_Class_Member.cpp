#include <iostream>
using namespace std;

class Address {
public:
    void showAddress() {
        cout << "Address: Vijayawada" << endl;
    }
};

class Student {
    Address address;

public:
    void showStudent() {
        cout << "Student details:" << endl;
        address.showAddress();
    }
};

int main() {
    Student s;
    s.showStudent();

    return 0;
}