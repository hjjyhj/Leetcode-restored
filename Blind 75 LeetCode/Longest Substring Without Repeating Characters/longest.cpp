#include <iostream>

using namespace std;

string longest(string s){    
    int max;
    int index;
    int current = -1;
    string shortS = "";
        
    for (int i = 0; i < s.length(); ++i) {
        for (int j = i+1; j < s.length(); ++j) {
            if (s[i] == s[j]) {
                max = j - i - 1;
            } else {
                max = s.length();
            }

            if (max > current) {
                current = max;
                index = i;
            }
        }
    }
    for (int i = index; i < index + max; ++i) {
        shortS += s[i];
    }
    return shortS;
}

int main() {
    string s = "abcabcbb";
    cout << endl;
    string answer = longest(s);
    cout << s[0] << endl;
}