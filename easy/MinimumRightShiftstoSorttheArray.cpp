#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n = nums.size();
        int drop = -1;
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                if(drop != -1) {
                    return -1;
                }
                drop = i;
            }
        }
        if(drop == -1) {
            return 0;
        }
        return n - (drop + 1);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << sol.minimumRightShifts(nums) << endl;
    return 0;
}
