#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = 7;
    int target = 0;

    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            result = mid;
            break;
        }

        if (arr[low] <= arr[mid]) {
            if (target >= arr[low] && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else {
            if (target > arr[mid] && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    cout << "Element found at index: " << result;

    return 0;
}
