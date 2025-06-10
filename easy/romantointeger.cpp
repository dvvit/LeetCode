#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100},
            {'D', 500}, {'M', 1000}
        };

        int result = 0;
        int n = s.length();

        for (int i = 0; i < n; ++i) {
            if (i + 1 < n && roman[s[i]] < roman[s[i + 1]]) {
                result -= roman[s[i]];
            } else {
                result += roman[s[i]];
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    string romanInput;
    cout<<"enter roman input: ";
    cin >> romanInput;
    int result = sol.romanToInt(romanInput);
    cout << result << endl;
    return 0;
}
