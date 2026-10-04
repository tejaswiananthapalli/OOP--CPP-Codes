#include <iostream>
using namespace std;

namespace First {
    int value = 10;
}

namespace Second {
    int value = 20;
}

int main() {
    cout << "Value from First namespace = " << First::value << endl;
    cout << "Value from Second namespace = " << Second::value << endl;

    return 0;
}