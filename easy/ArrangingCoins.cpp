#include <iostream>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        long long left = 0, right = n;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long curr = mid * (mid + 1) / 2;
            if (curr == n) return mid;
            else if (curr < n) left = mid + 1;
            else right = mid - 1;
        }
        return right;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    cout << sol.arrangeCoins(n) << endl;
    return 0;
}
