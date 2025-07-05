#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                result.push_back(i);
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 5, 2, 3};
    int target = 2;
    vector<int> result = sol.targetIndices(nums, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
