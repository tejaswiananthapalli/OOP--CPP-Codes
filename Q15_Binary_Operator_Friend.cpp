#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    friend Number operator+(Number n1, Number n2);

    void display() {
        cout << "Result = " << value << endl;
    }
};

Number operator+(Number n1, Number n2) {
    return Number(n1.value + n2.value);
}

int main() {
    Number n1(10), n2(30);
    Number n3 = n1 + n2;

    n3.display();

    return 0;
}