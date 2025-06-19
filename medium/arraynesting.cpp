#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int n = nums.size();
        vector<bool> visited(n, false);
        int maxSize = 0;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int start = i, count = 0;
                while (!visited[start]) {
                    visited[start] = true;
                    start = nums[start];
                    count++;
                }
                maxSize = max(maxSize, count);
            }
        }
        return maxSize;
    }
};

int main() {
    vector<int> nums = {5, 4, 0, 3, 1, 6, 2};
    Solution sol;
    int result = sol.arrayNesting(nums);
    cout << result << endl;
    return 0;
}
