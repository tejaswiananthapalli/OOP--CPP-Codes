#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> numbers;

    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_front(10);
    numbers.push_front(5);

    cout << "Deque elements: ";
    for (int x : numbers)
        cout << x << " ";

    numbers.pop_front();
    numbers.pop_back();

    cout << "\nAfter operations: ";
    for (int x : numbers)
        cout << x << " ";

    return 0;
}