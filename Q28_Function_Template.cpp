#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Maximum integer = " << maximum(10, 20) << endl;
    cout << "Maximum double = " << maximum(5.5, 2.5) << endl;

    return 0;
}