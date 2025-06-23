#include <iostream>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
    char result = 0;
    for (int i = 0; i < s.size(); i++) {
        result ^= s[i];
    }
    for (int i = 0; i < t.size(); i++) {
        result ^= t[i];
    }
    return result;
}

int main() {
    string s = "abcd";
    string t = "abcde";
    cout << findTheDifference(s, t);
    return 0;
}
