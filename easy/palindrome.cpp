#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int original = x;
        long long reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        return reversed == original;
    }
};

int main() {
    Solution solution;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (solution.isPalindrome(num)) {
        cout << num << " is a palindrome number." << endl;
    } else {
        cout << num << " is not a palindrome number." << endl;
    }

    return 0;
}
