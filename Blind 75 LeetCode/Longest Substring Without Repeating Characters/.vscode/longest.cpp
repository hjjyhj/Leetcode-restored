#include <iostream>
#include <vector>

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
    vector<int> chars(128);
    char c = s[2];
    char c2 = s[2];
    for (int i = 0; i < chars.size(); ++i) {
        cout << chars.at(i) << endl;
    }
    cout << chars[c2]++ << endl;
    
}