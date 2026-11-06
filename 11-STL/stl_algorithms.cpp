#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {

    vector<int> numbers = {50, 20, 40, 10, 30};

    // Sort in ascending order
    sort(numbers.begin(), numbers.end());

    cout << "Ascending order: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    // Sort in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());

    cout << "\nDescending order: ";
    for (int num : numbers) {
        cout << num << " ";
    }

    // Find an element
    auto it = find(numbers.begin(), numbers.end(), 30);

    if (it != numbers.end()) {
        cout << "\n30 is found";
    } else {
        cout << "\n30 is not found";
    }

    // Count occurrences
    vector<int> values = {10, 20, 10, 30, 10};

    cout << "\nCount of 10: "
         << count(values.begin(), values.end(), 10);

    // Calculate sum
    cout << "\nSum: "
         << accumulate(values.begin(), values.end(), 0);

    // Find minimum and maximum
    cout << "\nMinimum: "
         << *min_element(values.begin(), values.end());

    cout << "\nMaximum: "
         << *max_element(values.begin(), values.end());

    return 0;
}
