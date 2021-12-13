#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> ans;
    
    int p1 = 0;
    int p2 = 1;
    int p3 = 2;

    if (nums.size() == 0) {
        return {};
    }

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

    if (nums.size() < 2) {
        return ans;
    } else if (nums.size() == 3) {
        if (nums[p1] + nums[p2] + nums[p3] == 0) {
            vector<int> a;
            ans.push_back({nums[p1], nums[p2], nums[p3]});
            return ans;
        }
    }

    
    while (p1 < nums.size() - 2 && nums.size() > 3) {
        
        if (-nums[p1] == nums[p2] + nums[p3] && nums[p1]){
            vector<int> a;
            ans.push_back({nums[p1], nums[p2], nums[p3]});
        }

        if (p3 == nums.size() && p2 == nums.size() -1) {
            ++p1;
            p2 = p1 + 1;
            p3 = p2 + 1;
        } else if (p3 == nums.size() && p2 != nums.size() - 1) {
            ++p2;
            p3 = p2 + 1;
        } else {
            ++p3;
        }
    }
    return ans;   
}

int main() { 
    vector<int> nums = {0,0};
    vector<vector<int>> a;
    a =  threeSum(nums);
    for (int i = 0; i < a.size(); ++i) {
        for (int j = 0; j < a.at(i).size(); ++j) {
            cout << a[i][j] << ", ";
            
        }
        cout << endl;
    }


}