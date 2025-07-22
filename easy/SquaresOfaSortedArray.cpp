#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            nums[i] = abs(nums[i] * nums[i]);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {-7, -3, 2, 3, 11};
    vector<int> result = solution.sortedSquares(nums);
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
