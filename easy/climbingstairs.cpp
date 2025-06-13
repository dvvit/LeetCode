#include <iostream>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n == 1 || n == 2) {
            return n;
        }
        int prev1 = 2, prev2 = 1, current;
        for (int i = 3; i <= n; i++) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        return current;
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    cout << sol.climbStairs(n) << endl;
    return 0;
}
