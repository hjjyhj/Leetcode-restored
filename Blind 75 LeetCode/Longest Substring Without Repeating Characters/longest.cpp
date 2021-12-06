#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map <char, int> map;
    int left = 0;
    int res = 0;

    for (int i = 0; i < s.length(); ++i) {
        while (map.find(s[i]) != map.end()) {
            map.erase(map.find(s[left]));
            left++;
        }
        map[s[i]] = i;
        res = max(res, i - left + 1);
    }
    return res;

}
int main() {
    string s = "pwwkew";
    int ans = lengthOfLongestSubstring(s);
    cout << ans << endl;
    

}