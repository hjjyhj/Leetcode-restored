#include <iostream>
#include <algorithm>

using namespace std;

string expand(string s, int start, int end) {
    while (start > 0 && end < s.length() && s[start] == s[end]) {
        --start;
        ++end;
    }
    return s.substr(start+1, end-start-1);
}
string longestPalindrome(string s) {
    string longest = s.substr(0,1);
    if (s.length() <=1) {
        return s;
    }

    for (int i = 0; i < s.length(); ++i) {
        string temp = expand(s, i, i);
        
        if (temp.length() > longest.length()) {
            longest = temp;
        }
        temp = expand(s,i,i+1);
        if (temp.length() > longest.length()) {
            longest = temp;
        }
    }
    return longest;

}

int main() {
    string s = "babad";
    string sub;
    cout << longestPalindrome(s) << endl;


    
}