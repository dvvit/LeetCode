#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            if (nums[i] % 2 > nums[j] % 2) {
                swap(nums[i], nums[j]);
            }
            if (nums[i] % 2 == 0) {
                i++;
            }
            if (nums[j] % 2 == 1) {
                j--;
            }
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {3, 1, 2, 4};
    Solution sol;
    vector<int> result = sol.sortArrayByParity(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
