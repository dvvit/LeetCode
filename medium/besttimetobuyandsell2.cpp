#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int totalProfit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1]) {
                totalProfit += prices[i] - prices[i - 1];
            }
        }
        return totalProfit;
    }
};

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter stock prices for " << n << " days:\n";
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    Solution solution;
    int result = solution.maxProfit(prices);

    cout << "Maximum profit with multiple transactions: " << result << endl;

    return 0;
}
