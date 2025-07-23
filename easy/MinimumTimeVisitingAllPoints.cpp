#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int time = 0;
        for (int i = 1; i < points.size(); i++) {
            int xDiff = abs(points[i][0] - points[i - 1][0]);
            int yDiff = abs(points[i][1] - points[i - 1][1]);
            time += max(xDiff, yDiff);
        }
        return time;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> points = {{1, 1}, {3, 4}, {-1, 0}};
    int result = solution.minTimeToVisitAllPoints(points);
    cout << result << endl;
    return 0;
}
