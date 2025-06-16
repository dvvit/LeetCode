#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1, c;
        if (n == 0 || n == 1) {
            return n;
        }
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution sol;
    int result = sol.fib(n);
    cout << "Fibonacci number at position " << n << " is: " << result << endl;

    return 0;
}
