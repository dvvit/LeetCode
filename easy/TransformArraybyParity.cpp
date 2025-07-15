#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                nums[i] = 0;
            }
            else{
                nums[i] = 1;
            }
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    Solution sol;
    vector<int> result = sol.transformArray(nums);
    for(int val : result){
        cout << val << " ";
    }
    cout << "\n";
    return 0;
}
