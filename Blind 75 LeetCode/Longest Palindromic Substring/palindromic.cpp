#include <iostream>
#include <algorithm>

using namespace std;

string expand(string s, int start, int end) {
    string ans = "";
    while (start > 0 && end < s.length() && s[start] == s[end]){
        ans = s.substr(start, end-start+1);
        start--;
        end++;
    }
    return ans;
}

string longestPalindrome(string s) {
    string longest = s.substr(0,1);
    string ans = s.substr(0,1);
    if (s.length() == 1) {
        return s;
    }

    for (int i = 0; i < s.length(); ++i) {
        if (s.length()%2 == 0) {
            string result = expand(s, i, i);
            if (result.length() > ans.length()) {
                ans = result;
            }
        } else {
            string result = expand(s, i-1, i);
            if (result.length() > ans.length()) {
                ans = result;
            }        
        }
    }
    return ans;
}


int main() {
    string s = "bbbb";
    string sub;
    cout << longestPalindrome(s) << endl;


    
}