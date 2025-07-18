#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        vector<char> odddigits;
        vector<char> evendigits;

        for (int i = 0; i < (int)s.size(); i++) {
            if ((s[i] - '0') % 2 == 1) {
                odddigits.push_back(s[i]);
            } else {
                evendigits.push_back(s[i]);
            }
        }

        sort(odddigits.begin(), odddigits.end(), greater<char>());
        sort(evendigits.begin(), evendigits.end(), greater<char>());

        int oddindex = 0, evenindex = 0;

        for (int i = 0; i < (int)s.size(); i++) {
            if ((s[i] - '0') % 2 == 1) {
                s[i] = odddigits[oddindex++];
            } else {
                s[i] = evendigits[evenindex++];
            }
        }

        return stoi(s);
    }
};

int main() {
    Solution sol;

    int test1 = 1234;
    cout << "Input: " << test1 << ", Largest Integer: " << sol.largestInteger(test1) << endl; // Expected: 3412

    int test2 = 65875;
    cout << "Input: " << test2 << ", Largest Integer: " << sol.largestInteger(test2) << endl; // Expected: 87655

    int test3 = 13579;
    cout << "Input: " << test3 << ", Largest Integer: " << sol.largestInteger(test3) << endl; // Expected: 97531 (all odd digits)

    int test4 = 24680;
    cout << "Input: " << test4 << ", Largest Integer: " << sol.largestInteger(test4) << endl; // Expected: 86420 (all even digits)

    return 0;
}
