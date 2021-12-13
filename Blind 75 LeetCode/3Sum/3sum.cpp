#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> dup(vector<vector<int> &ans) {
    int po1 = 0;
    int po2 = 1;
    int nSize = ans.size();
    for (int i = 0; i < nums.size(); ++i) {
        sort(ans[i].begin(), ans[i].end());
    }

    while (po1 < ans.size() -2) {
        if (ans[po1] == ans[po2]) {
            ans.erase(ans.begin() + po2);
        }

        if (po2 == ans.size() -1 ) {
            po1++;
            po2 = po1 + 1;
        } else {
            ++po2;
        }
    }

    if (ans[nSize - 2] == ans[nSize-1]) {
        ans.erase(ans.begin() + nSize - 1);
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
            vector<int> a;
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
    
    nums = dup(nums);
    return nums;
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