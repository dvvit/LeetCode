#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even = 0, odd = 1, n = nums.size();
        while(even < n && odd < n) {
            if(nums[even] % 2 == 0) {
                even += 2;
            } else if(nums[odd] % 2 == 1) {
                odd += 2;
            } else {
                swap(nums[even], nums[odd]);
                even += 2;
                odd += 2;
            }
        }
        return nums;
    }
};

int main() {
    vector<int> nums = {3, 2, 4, 1};
    Solution obj;
    vector<int> result = obj.sortArrayByParityII(nums);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
