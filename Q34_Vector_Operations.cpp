#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout << "Vector elements: ";
    for (int x : numbers)
        cout << x << " ";

    numbers.pop_back();

    cout << "\nAfter pop_back: ";
    for (int x : numbers)
        cout << x << " ";

    cout << "\nSize = " << numbers.size() << endl;

    return 0;
}