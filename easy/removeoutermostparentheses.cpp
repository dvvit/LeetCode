#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = "";
        int depth = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                if (depth > 0) {
                    result += '(';
                }
                depth++;
            } else {
                depth--;
                if (depth > 0) {
                    result += ')';
                }
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << sol.removeOuterParentheses(s) << endl;
    return 0;
}
