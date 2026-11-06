#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14};

    int target = 10;
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index: " << mid;
            return 0;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    cout << "Element not found";

    return 0;
}
