#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 4, 5, 7};
    int n = 6;
    int target = 4;

    int low = 0, high = n - 1;
    int answer = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= target) {
            answer = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << "Lower bound index: " << answer;

    return 0;
}
