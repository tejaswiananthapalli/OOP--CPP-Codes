#include <iostream>
using namespace std;

void display(string name, int age = 18) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main() {
    display("Rahul");
    cout << endl;
    display("Anu", 20);

    return 0;
}