#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for(int i = 0; i < names.size(); i++) {
            people.push_back({heights[i], names[i]});
        }
        sort(people.rbegin(), people.rend());
        vector<string> result;
        for(int i = 0; i < people.size(); i++) {
            result.push_back(people[i].second);
        }
        return result;
    }
};

int main() {
    vector<string> names = {"Mary", "John", "Emma"};
    vector<int> heights = {180, 165, 170};
    Solution obj;
    vector<string> sorted = obj.sortPeople(names, heights);
    for(int i = 0; i < sorted.size(); i++) {
        cout << sorted[i] << " ";
    }
    return 0;
}
