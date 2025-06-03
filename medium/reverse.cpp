#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int remainder, reverse = 0;
        while (x != 0) {
            remainder = x % 10;
            if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10) {
                return 0;
            }
            reverse = reverse * 10 + remainder;
            x = x / 10;
        }
        return reverse;
    }
};

int main() {
    Solution solution;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    int reversedNum = solution.reverse(num);
    cout << "Reversed integer: " << reversedNum << endl;

    return 0;
}
