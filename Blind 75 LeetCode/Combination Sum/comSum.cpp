#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<vector<int>> newRes(vector<vector<int>> &res) {
    set<int> index;

    for (int i = 0; i < res.size(); ++i) {
        sort(res[i].begin(), res[i].end());
    }

    int i = 0;
    int j = 1;
    while (i < res.size()) {
        
        if (j < res.size() && res[i] == res[j]) {
            index.insert(j);
        }

        if (j == res.size()) {
            i++;
            j = i + 1;
        } else {
            j++;
        }
    }
    
    for (auto elem : index) {
        res.erase(res.begin() + elem - 1);
    }
    
    
    return res;
}

void rec(int index, vector<vector<int>> &res, vector<int> &can, vector<int> &ans, int target) {
    if (target == 0) {
        res.push_back(ans);
    } else if(target < 0) {
        return;
    }

    for (int i = index; i < can.size(); ++i) {
        ans.push_back(can[i]);
        int nTarget = target - can[i];
        rec(index, res, can, ans, nTarget);
        ans.pop_back();
    }

}
vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
    vector<int> ans;
    vector<vector<int>> res;
    rec(0, res, candidates, ans, target);
    
    res = newRes(res);
    return res;
}

int main() {
    vector<int> can = {2, 7,6,3,5,1};
    sort(can.begin(), can.end());
    vector<vector<int>> res = combinationSum(can, 9);
    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}