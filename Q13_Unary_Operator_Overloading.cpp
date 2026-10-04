#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v) {
        value = v;
    }

    void operator++() {
        ++value;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n(10);

    cout << "Before increment: ";
    n.display();

    ++n;

    cout << "After increment: ";
    n.display();

    return 0;
}