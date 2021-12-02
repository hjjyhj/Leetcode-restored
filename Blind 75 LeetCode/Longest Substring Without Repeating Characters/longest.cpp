#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int check(string s, int start, int end) {
    int leng = 0;
    
    return leng;
}

int lengthOfLongestSubstring(string s) {
    int answer = 0;
    int current;
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