#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void recursiveM(vector<int>& candidates, int target,int index, vector<int>& tempCandidate, vector<vector<int>>& resCandidates)
{
    if(target == 0) 
    {    
        resCandidates.push_back(tempCandidate);
        return;
    }
    if(target<0) return;
    if(index<candidates.size())
    {
        vector<int>temp = tempCandidate; 
        if(target-candidates[index] >= 0)
        {
        tempCandidate.push_back(candidates[index]);
        recursiveM(candidates, target-candidates[index], index, tempCandidate, resCandidates);   
        }
        recursiveM(candidates, target, index + 1, temp, resCandidates);  
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> res;
    vector<int> tempCandidate;
    recursiveM(candidates, target, 0, tempCandidate, res);
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