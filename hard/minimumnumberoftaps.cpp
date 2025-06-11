#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> maxReach(n + 1, 0);
        for (int i = 0; i <= n; i++) {
            int left = max(0, i - ranges[i]);
            int right = min(n, i + ranges[i]);
            maxReach[left] = max(maxReach[left], right);
        }
        int taps = 0, currEnd = 0, farthest = 0;
        for (int i = 0; i <= n; i++) {
            if (i > farthest) return -1;
            farthest = max(farthest, maxReach[i]);
            if (i == currEnd) {
                taps++;
                currEnd = farthest;
                if (currEnd >= n) break;
            }
        }
        return taps;
    }
};

int main() {
    int n;
    cout << "Enter the length of the garden (n): ";
    cin >> n;

    vector<int> ranges(n + 1);
    cout << "Enter the range for each tap (from index 0 to " << n << "):\n";
    for (int i = 0; i <= n; i++) {
        cout << "Range[" << i << "]: ";
        cin >> ranges[i];
    }

    Solution sol;
    int result = sol.minTaps(n, ranges);
    cout << "Minimum number of taps to open: " << result << "\n";
    return 0;
}
