#include <iostream>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        for (int i = 0; i < 32; i++) {
            result <<= 1;
            result |= (n & 1);
            n >>= 1;
        }
        return result;
    }
};

int main() {
    Solution sol;
    uint32_t n = 43261596;
    uint32_t reversed = sol.reverseBits(n);
    cout << reversed << endl;
    return 0;
}
