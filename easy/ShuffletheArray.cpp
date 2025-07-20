#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        for (int i = 0; i < n; ++i) {
            result.push_back(nums[i]);
            result.push_back(nums[i + n]);
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;

    vector<int> result = solution.shuffle(nums, n);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
