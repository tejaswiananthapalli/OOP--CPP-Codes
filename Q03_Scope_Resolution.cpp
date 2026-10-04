#include <iostream>
using namespace std;

int number = 100;

class Demo {
public:
    int number;

    Demo() {
        number = 50;
    }

    void display() {
        cout << "Local class variable = " << number << endl;
        cout << "Global variable = " << ::number << endl;
    }
};

int main() {
    Demo d;
    d.display();

    return 0;
}