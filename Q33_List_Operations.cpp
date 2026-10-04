#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> numbers;

    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_front(5);

    cout << "List elements: ";
    for (int x : numbers)
        cout << x << " ";

    numbers.pop_front();
    numbers.remove(20);

    cout << "\nAfter operations: ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}