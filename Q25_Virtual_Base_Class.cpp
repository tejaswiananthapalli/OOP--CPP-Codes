#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "Person class function." << endl;
    }
};

class Student : virtual public Person {
};

class Employee : virtual public Person {
};

class Intern : public Student, public Employee {
};

int main() {
    Intern i;
    i.show();

    return 0;
}