#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> students;

    students[101] = "Ravi";
    students[102] = "Anu";
    students[103] = "Kiran";

    cout << "Student records:" << endl;

    for (auto x : students)
        cout << x.first << " : " << x.second << endl;

    students.erase(102);

    cout << "\nAfter deleting roll number 102:" << endl;

    for (auto x : students)
        cout << x.first << " : " << x.second << endl;

    return 0;
}