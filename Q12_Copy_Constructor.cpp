#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    Student(const Student &s) {
        marks = s.marks;
    }

    void display() {
        cout << "Marks = " << marks << endl;
    }
};

int main() {
    Student s1(90);
    Student s2(s1);

    cout << "Original object: ";
    s1.display();

    cout << "Copied object: ";
    s2.display();

    return 0;
}