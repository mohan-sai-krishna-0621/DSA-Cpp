#include <iostream>
#include <set>
#include <map>
using namespace std;

int main() {

    // SET
    set<int> numbers;

    numbers.insert(30);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(10);  // Duplicate ignored

    cout << "Set elements:\n";

    for (int num : numbers) {
        cout << num << " ";
    }

    cout << "\nSet size: " << numbers.size();

    if (numbers.find(20) != numbers.end()) {
        cout << "\n20 is present in the set";
    }

    // MAP
    map<int, string> students;

    students[101] = "Mohan";
    students[102] = "Krishna";
    students[103] = "Rahul";

    cout << "\n\nMap elements:\n";

    for (auto student : students) {
        cout << student.first << " : "
             << student.second << endl;
    }

    // Update a value
    students[102] = "Sai";

    cout << "\nUpdated student 102: "
         << students[102] << endl;

    return 0;
}
