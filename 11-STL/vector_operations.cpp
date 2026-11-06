#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    // Display elements
    cout << "Vector elements: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    // Add an element
    numbers.push_back(60);

    // Remove the last element
    numbers.pop_back();

    // Access an element
    cout << "\nFirst element: " << numbers[0];

    // Find vector size
    cout << "\nSize: " << numbers.size();

    // Sort vector
    sort(numbers.begin(), numbers.end());

    cout << "\nSorted vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    return 0;
}
