#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> result;
        result.push_back(1);
        while (result.size() < n) {
            vector<int> temp;
            int size = result.size();
            for (int i = 0; i < size; i++) {
                int val = 2 * result[i] - 1;
                if (val <= n)
                    temp.push_back(val);
            }
            for (int i = 0; i < size; i++) {
                int val = 2 * result[i];
                if (val <= n)
                    temp.push_back(val);
            }
            result = temp;
        }
        return result;
    }
};

int main() {
    int n;
    cin >> n;
    Solution sol;
    vector<int> res = sol.beautifulArray(n);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
