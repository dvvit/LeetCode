#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
        }
        return s;
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

    string result = sol.toLowerCase(input);

    cout << "Lowercase: " << result << endl;

    return 0;
}
