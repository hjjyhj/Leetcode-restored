#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// int check(string s, int start, int end) {
//     int leng = 1;
//     unordered_map<char,int> map;
//     for (int i = start + 1; i <= end; ++i) {
//         if (map.find(s[i]) != map.end()) {
//             return leng;
//         } else {
//             ++leng;
//         }
//     return leng;
// }

// int lengthOfLongestSubstring(string s) {
//     int answer = 0;
//     int current = 0;
//     for (int i = 0; i < s.length(); ++i) {
//         for (int j = i; j < s.length(); ++j) {
//             current = check(s, i, j);
//             answer = max(answer, current);
            
//         }
//     }
//     return answer;
// }
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