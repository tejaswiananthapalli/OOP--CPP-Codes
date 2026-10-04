#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter 1 for integer exception, 2 for character exception: ";
    cin >> choice;

    try {
        if (choice == 1)
            throw 10;
        else if (choice == 2)
            throw 'A';
        else
            throw 2.5;
    }
    catch (int e) {
        cout << "Integer exception caught: " << e << endl;
    }
    catch (char e) {
        cout << "Character exception caught: " << e << endl;
    }
    catch (double e) {
        cout << "Double exception caught: " << e << endl;
    }

    return 0;
}