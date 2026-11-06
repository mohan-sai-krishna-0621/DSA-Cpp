#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 45, 23, 89, 12};
    int n = 5;

    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest element: " << smallest << endl;

    return 0;
}
