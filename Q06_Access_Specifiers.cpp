#include <iostream>
using namespace std;

class Student {
private:
    int marks;

protected:
    int rollNo;

public:
    string name;

    void setData(int m, int r, string n) {
        marks = m;
        rollNo = r;
        name = n;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.setData(90, 101, "Ravi");
    s.display();

    return 0;
}