#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = needle.length();
        int h = haystack.length();
        if (n == 0) return 0;
        if (n > h) return -1;
        for (int i = 0; i <= h - n; i++) {
            if (haystack.substr(i, n) == needle) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string haystack, needle;
    getline(cin, haystack);
    getline(cin, needle);
    cout << sol.strStr(haystack, needle) << endl;
    return 0;
}
