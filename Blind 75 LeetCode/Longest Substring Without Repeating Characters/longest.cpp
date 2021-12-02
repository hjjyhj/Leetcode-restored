#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int check(string s, int start, int end) {
    int leng = 1;
    unordered_set<char> set;
    for (int i = start + 1; i <= end; ++i) {
        if (set.find(s[start]) != set.end()) {
            return leng;
            
        } else if (set.find(s[start]{
            ;
        }
    }
    return leng;
}

int lengthOfLongestSubstring(string s) {
    int answer = 0;
    int current = 0;
    for (int i = 0; i < s.length(); ++i) {
        for (int j = i; j < s.length(); ++j) {
            current = check(s, i, j);
            answer = max(answer, current);
            
        }
    }
    return answer;
}

int main() {
    string s = "abcabcbb";
    int ans = lengthOfLongestSubstring(s);
    cout << ans << endl;
   


}