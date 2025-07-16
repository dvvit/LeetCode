#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (count == 0) {
                candidate = nums[i];
            }
            if (nums[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};

int main() {
    vector<int> nums = {3, 3, 4, 2, 3, 3, 3};
    Solution obj;
    cout << obj.majorityElement(nums) << endl;
    return 0;
}
