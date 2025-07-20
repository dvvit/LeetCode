#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            freq[nums1[i]] = 1;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (freq[nums2[i]] == 1) {
                result.push_back(nums2[i]);
                freq[nums2[i]] = 0;
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};

    vector<int> result = solution.intersection(nums1, nums2);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
