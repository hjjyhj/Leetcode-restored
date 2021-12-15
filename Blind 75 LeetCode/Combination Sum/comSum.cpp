#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

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

    return res;
}

int main() {
    vector<int> can = {2, 3, 6, 7};
    sort(can.begin(), can.end());
    vector<vector<int>> res = combinationSum(can, 7);
    for (int i = 0; i < res.size(); ++i) {
        for (int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}