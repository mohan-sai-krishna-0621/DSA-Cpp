#include <iostream>
using namespace std;

int main() {
    int num = 25;

    int low = 0, high = num;
    int answer = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid <= num / mid && mid * mid <= num) {
            answer = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "Square root: " << answer;

    return 0;
}
