#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    int m = 3;
    vector<int> nums2 = {2, 4, 6};
    int n = 3;
    sol.merge(nums1, m, nums2, n);

    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

