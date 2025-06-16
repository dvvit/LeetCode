#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[pos] = nums[i];
                pos++;
            }
        }
        for (int i = pos; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution sol;
    sol.moveZeroes(nums);
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
