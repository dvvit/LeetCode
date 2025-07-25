#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> transformedArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            int dest = (i + (k % n) + n) % n;
            result[dest] = nums[i];
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    int k = 1;
    vector<int> res = sol.transformedArray(nums, k);
    for (int num : res) {
        cout << num << " ";
    }
    return 0;
}
