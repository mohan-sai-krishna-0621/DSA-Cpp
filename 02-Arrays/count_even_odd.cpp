#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 15, 20, 25, 30, 35};
    int n = 6;

    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}
