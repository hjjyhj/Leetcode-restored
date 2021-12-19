#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

vector<vector<int>> dup(vector<vector<int>>& ans) {
    set<int> index;

    for (int i = 0; i < ans.size(); ++i) {
        sort(ans[i].begin(), ans[i].end());
    }

    int i = 0;
    int j = 1;
    while (i < ans.size()) {
        
        if (j < ans.size() && ans[i] == ans[j]) {
            index.insert(j);
        }

        if (j == ans.size()) {
            i++;
            j = i + 1;
        } else {
            j++;
        }
    }
    
    int k = 0;
    for (auto elem : index) {
        ans.erase(ans.begin() + elem - k);
        ++k;
    }
    
    
    return ans;
}

vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> ans;
    
    int p1 = 0;
    int p2 = 1;
    int p3 = 2;

    if (nums.size() >= 0 && nums.size() < 3) {
        return ans;
    }

    if (nums.size() == 3) {
        if (nums[p1] + nums[p2] + nums[p3] == 0) {
            vector<int> a;
            ans.push_back({nums[p1], nums[p2], nums[p3]});
            return ans;
        }
    }

    
    while (p1 < nums.size() - 2 && nums.size() > 3) {

        bool zero = true;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                zero = false;
            }
        }
        if (zero) {
            ans.push_back({0,0,0});
            return ans;
        }

        if (nums[p1]+nums[p2]+nums[p3] == 0){
            ans.push_back({nums[p1], nums[p2], nums[p3]});
        }

        if (p3 == nums.size() -1 && p2 == nums.size() -2) {
            ++p1;
            p2 = p1 + 1;
            p3 = p2 + 1;
        } else if (p3 == nums.size() - 1 && p2 != nums.size() - 2) {
            ++p2;
            p3 = p2 + 1;
        } else {
            ++p3;
        }
    }
    
    ans = dup(ans);
    return ans;
}

int main() { 
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> a;
    a =  threeSum(nums);
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < a.at(i).size(); ++j) {
            cout << a[i][j] << ", ";
            
        }
        cout << endl;
    }

}