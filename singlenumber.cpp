#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size(); i++) {
            result ^= nums[i];
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 2, 1, 4, 4};
    cout << solution.singleNumber(nums) << endl;
    return 0;
}

