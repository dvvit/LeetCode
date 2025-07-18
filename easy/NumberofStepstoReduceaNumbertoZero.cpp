#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num != 0) {
            if (num % 2 == 0) {
                num = num / 2;
            } else {
                num = num - 1;
            }
            count++;
        }
        return count;
    }
};

int main() {
    Solution sol;
    int num;
    cin >> num;
    cout << sol.numberOfSteps(num) << endl;
    return 0;
}
