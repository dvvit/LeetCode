#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = true;
        bool decreasing = true;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                increasing = false;
            }
            if (nums[i] < nums[i + 1]) {
                decreasing = false;
            }
        }
        return increasing || decreasing;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 3};
    if (sol.isMonotonic(nums)) {
        cout << "The array is monotonic." << endl;
    } else {
        cout << "The array is not monotonic." << endl;
    }
    return 0;
}
