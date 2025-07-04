#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN;
        long second = LONG_MIN;
        long third = LONG_MIN;
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            if (num == first || num == second || num == third) {
                continue;
            }
            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (num > second) {
                third = second;
                second = num;
            } else if (num > third) {
                third = num;
            }
        }
        if (third == LONG_MIN) {
            return first;
        } else {
            return third;
        }
    }
};

int main() {
    vector<int> nums = {2, 2, 3, 1};
    Solution sol;
    int result = sol.thirdMax(nums);
    cout << result << endl;
    return 0;
}
