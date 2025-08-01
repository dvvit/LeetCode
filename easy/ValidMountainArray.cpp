#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(arr.size() < 3){
            return false;
        }
        int max_number = *max_element(arr.begin(), arr.end());
        int index = distance(arr.begin(), max_element(arr.begin(),arr.end()));
        if(max_number == arr[0] || max_number == arr[n-1]){
            return false;
        }
        for(int i = 0; i < index; i++){
            if(arr[i] >= arr[i + 1]){
                return false;
            }
        }
        for(int i = index; i < n-1; i++){
            if(arr[i] <= arr[i + 1]){
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {2, 1};
    vector<int> arr2 = {3, 5, 5};
    vector<int> arr3 = {0, 3, 2, 1};
    cout << sol.validMountainArray(arr1) << "\n";
    cout << sol.validMountainArray(arr2) << "\n";
    cout << sol.validMountainArray(arr3) << "\n";
    return 0;
}
