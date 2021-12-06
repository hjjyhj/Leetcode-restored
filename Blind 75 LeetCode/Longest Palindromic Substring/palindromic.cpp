#include <iostream>
#include <algorithm>

using namespace std;

bool checkPalindrome(string sub) {
    
    string ori = sub; 
    reverse(sub.begin(), sub.end());
    if (sub == ori) {
        return true;
    }
    return false;
}

string longestPalindrome(string s) {
    string ans;
    string sub = "";
    int max = 0;
    for (int i = 0; i <s.length(); ++i) {
        for (int j = i; j <s.length(); ++j) {
            sub = s.substr(i, j - i + 1);
            if (checkPalindrome(sub) == true) {
                if (max < sub.length()) {
                    max = sub.length();
                    ans = sub;
                }
            }
        }
    }
    return sub;
}

int main() {
    string s = "babab";
    string sub;
    cout << longestPalindrome(s) << endl;

    
}