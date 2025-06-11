#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, currEnd = 0, farthest = 0;
        for (int i = 0; i < nums.size() - 1; i++) {
            farthest = max(farthest, i + nums[i]);
            if (i == currEnd) {
                jumps++;
                currEnd = farthest;
            }
        }
        return jumps;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "nums[" << i << "]: ";
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.jump(nums);
    cout << "Minimum number of jumps to reach the end: " << result << "\n";
    return 0;
}
