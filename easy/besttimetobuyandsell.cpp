#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
                cout << "New minimum price found: " << minPrice << " at day " << i << endl;
            } else {
                int profit = prices[i] - minPrice;
                cout << "Potential profit if sold at day " << i << ": " << profit << endl;
                if (profit > maxProfit) {
                    maxProfit = profit;
                    cout << "New maximum profit updated to: " << maxProfit << endl;
                }
            }
        }

        return maxProfit;
    }
};

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);
    cout << "Enter stock prices for " << n << " days:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> prices[i];
    }

    Solution solution;
    int result = solution.maxProfit(prices);

    cout << "Maximum profit possible: " << result << endl;

    return 0;
}
