#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return distance(arr.begin(), max_element(arr.begin(), arr.end()));
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {0, 1, 0};
    vector<int> arr2 = {0, 2, 1, 0};
    vector<int> arr3 = {0, 10, 5, 2};
    cout << sol.peakIndexInMountainArray(arr1) << "\n";
    cout << sol.peakIndexInMountainArray(arr2) << "\n";
    cout << sol.peakIndexInMountainArray(arr3) << "\n";
    return 0;
}
