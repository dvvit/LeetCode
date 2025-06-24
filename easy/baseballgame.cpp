#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        for (int i = 0; i < ops.size(); i++) {
            string op = ops[i];
            if (op == "C") {
                if (!record.empty()) {
                    record.pop_back();
                }
            } else if (op == "D") {
                if (!record.empty()) {
                    record.push_back(2 * record.back());
                }
            } else if (op == "+") {
                int n = record.size();
                if (n >= 2) {
                    record.push_back(record[n - 1] + record[n - 2]);
                }
            } else {
                record.push_back(stoi(op));
            }
        }

        int sum = 0;
        for (int i = 0; i < record.size(); i++) {
            sum += record[i];
        }
        return sum;
    }
};

int main() {
    Solution sol;
    vector<string> ops = {"5", "2", "C", "D", "+"};
    int result = sol.calPoints(ops);
    cout << "Total score: " << result << endl;
    return 0;
}
