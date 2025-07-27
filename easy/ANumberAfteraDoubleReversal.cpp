#include <iostream>
using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        if (num == 0) {
            return true;
        }
        if (num % 10 == 0) {
            return false;
        }
        return true;
    }
};

int main() {
    Solution sol;
    int num = 120;
    bool result = sol.isSameAfterReversals(num);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
