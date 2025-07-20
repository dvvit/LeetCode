#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> freq;
        vector<int> result;

        for (int i = 0; i < arr1.size(); i++) {
            freq[arr1[i]]++;
        }

        for (int i = 0; i < arr2.size(); i++) {
            while (freq[arr2[i]] > 0) {
                result.push_back(arr2[i]);
                freq[arr2[i]]--;
            }
        }

        vector<int> remaining;
        for (auto it = freq.begin(); it != freq.end(); ++it) {
            int val = it->first;
            int count = it->second;
            while (count > 0) {
                remaining.push_back(val);
                count--;
            }
        }

        sort(remaining.begin(), remaining.end());

        for (int i = 0; i < remaining.size(); i++) {
            result.push_back(remaining[i]);
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2 = {2,1,4,3,9,6};

    vector<int> result = solution.relativeSortArray(arr1, arr2);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
