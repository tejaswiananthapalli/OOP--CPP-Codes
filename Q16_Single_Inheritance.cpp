#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "This is the Person class." << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "This is the Student class." << endl;
    }
};

int main() {
    Student s;
    s.showPerson();
    s.showStudent();

    return 0;
}