#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 10, 20, 20, 30, 40, 40};
    int n = 7;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i <= j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
