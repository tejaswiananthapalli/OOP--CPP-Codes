#include <iostream>
using namespace std;

template <class T, class U>
class Student {
    T rollNo;
    U marks;

public:
    Student(T r, U m) {
        rollNo = r;
        marks = m;
    }

    void display() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student<int, double> s(101, 89.5);
    s.display();

    return 0;
}