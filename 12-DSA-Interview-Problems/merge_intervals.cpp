#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> intervals = {
        {1, 3},
        {2, 6},
        {8, 10},
        {15, 18}
    };

    // Sort intervals by starting value
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> merged;

    for (auto interval : intervals) {

        // If no overlap, add the interval
        if (merged.empty() ||
            merged.back()[1] < interval[0]) {

            merged.push_back(interval);
        }
        else {
            // Merge overlapping intervals
            merged.back()[1] =
                max(merged.back()[1], interval[1]);
        }
    }

    cout << "Merged Intervals:" << endl;

    for (auto interval : merged) {
        cout << "[" << interval[0]
             << ", " << interval[1] << "]" << endl;
    }

    return 0;
}
