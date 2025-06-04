#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] + 1 != 10) {
                digits[i] = digits[i] + 1;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        vector<int> newdigit(digits.size() + 1, 0);
        newdigit[0] = 1;
        return newdigit;
    }
};

int main() {
    Solution sol;
    vector<int> digits = {9, 9, 9};

    vector<int> result = sol.plusOne(digits);

    for (int digit : result) {
        cout << digit << " ";
    }
    cout << endl;

    return 0;
}

