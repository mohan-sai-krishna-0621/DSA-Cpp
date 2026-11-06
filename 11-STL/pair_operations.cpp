#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Create a pair
    pair<int, string> student = {101, "Mohan"};

    cout << "Roll Number: " << student.first << endl;
    cout << "Name: " << student.second << endl;

    // Update pair values
    student.first = 102;
    student.second = "Krishna";

    cout << "\nUpdated Pair:\n";
    cout << student.first << " " << student.second << endl;

    // Vector of pairs
    vector<pair<int, int>> marks = {
        {3, 80},
        {1, 95},
        {2, 85}
    };

    // Sort pairs by first value
    sort(marks.begin(), marks.end());

    cout << "\nSorted Pairs:\n";
    for (auto p : marks) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
