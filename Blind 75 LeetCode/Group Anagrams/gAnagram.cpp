#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    unordered_map<string, vector<string>> map;
    string temp;
    string o;

    for (int i = 0; i < strs.size(); ++i) {
        temp = strs[i];
        o = temp;
        sort(o.begin(), o.end());
        map[o].push_back(temp);
    }
 
    for (auto i : map) {
        ans.push_back(i.second);
    }

    return ans;
}


int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> out = groupAnagrams(strs);

    for (int i = 0; i < out.size(); ++i) {
        for (int j = 0; j < out[i].size(); ++j) {
            cout << out[i][j] << ", ";
        }
        cout << endl;
    }
}