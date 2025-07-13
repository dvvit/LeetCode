#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> result;

    void backtrack(string& s, int index, int dots, string path) {
        if (dots == 4 && index == s.size()) {
            path.pop_back();
            result.push_back(path);
            return;
        }

        if (dots > 4) return;

        for (int len = 1; len <= 3 && index + len <= s.size(); ++len) {
            string part = s.substr(index, len);
            if ((part[0] == '0' && part.size() > 1) || stoi(part) > 255) continue;
            backtrack(s, index + len, dots + 1, path + part + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        result.clear();
        backtrack(s, 0, 0, "");
        return result;
    }
};

int main() {
    Solution sol;
    string s = "25525511135";
    vector<string> ips = sol.restoreIpAddresses(s);
    for (string ip : ips) {
        cout << ip << endl;
    }
    return 0;
}
