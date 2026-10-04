#include <iostream>
using namespace std;

class Person {
public:
    void personData() {
        cout << "Person class." << endl;
    }
};

class Student : virtual public Person {
public:
    void studentData() {
        cout << "Student class." << endl;
    }
};

class Employee : virtual public Person {
public:
    void employeeData() {
        cout << "Employee class." << endl;
    }
};

class WorkingStudent : public Student, public Employee {
public:
    void workingStudentData() {
        cout << "Working Student class." << endl;
    }
};

int main() {
    WorkingStudent w;
    w.personData();
    w.studentData();
    w.employeeData();
    w.workingStudentData();

    return 0;
}