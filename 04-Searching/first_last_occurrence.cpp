#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = 7;
    int target = 2;

    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            if (first == -1)
                first = i;

            last = i;
        }
    }

    cout << "First occurrence: " << first << endl;
    cout << "Last occurrence: " << last;

    return 0;
}
