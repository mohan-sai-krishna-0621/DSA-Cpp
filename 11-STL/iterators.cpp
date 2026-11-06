#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> numbers = {10, 20, 30, 40, 50};

    // Forward iterator
    cout << "Forward Traversal:\n";

    vector<int>::iterator it;

    for (it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << " ";
    }

    // Reverse iterator
    cout << "\n\nReverse Traversal:\n";

    for (auto rit = numbers.rbegin(); rit != numbers.rend(); rit++) {
        cout << *rit << " ";
    }

    // Access first and last elements
    cout << "\n\nFirst element: " << *numbers.begin();
    cout << "\nLast element: " << *(numbers.end() - 1);

    return 0;
}
