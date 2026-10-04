#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of two integers = " << add(10, 20) << endl;
    cout << "Sum of two doubles = " << add(2.5, 3.5) << endl;
    cout << "Sum of three integers = " << add(10, 20, 30) << endl;

    return 0;
}