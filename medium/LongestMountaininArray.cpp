#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int longest = 0;
        int i = 1;

        while (i < n - 1) {
            if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                int left = i - 1;
                int right = i + 1;

                while (left > 0 && arr[left - 1] < arr[left]) {
                    left--;
                }

                while (right < n - 1 && arr[right] > arr[right + 1]) {
                    right++;
                }

                longest = max(longest, right - left + 1);
                i = right;
            } else {
                i++;
            }
        }

        return longest;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {2, 1, 4, 7, 3, 2, 5};
    int result = solution.longestMountain(arr);
    cout << result << endl;
    return 0;
}
