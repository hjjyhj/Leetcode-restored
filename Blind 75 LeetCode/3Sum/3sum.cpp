#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {

    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); ++i) {
        int start = i + 1;
        int end = nums.size() - 1;
        if(i > 0 && nums[i] == nums[i-1]) {
            continue; 
        }

        while (start < end) {
            if (nums[i] + nums[start] + nums[end] == 0) {
                ans.push_back({nums[i], nums[start], nums[end]});
                start++;
                end--;
            } else if (nums[i] + nums[start] + nums[end] < 0) {
                start++;
            } else {
                end--;
            }
        }
    }
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

    // unordered_map <int, int> map;
    // vector<int> noDup;
    // vector<vector<int>> ans;
    // for (int i = 0; i < nums.size(); ++i) {
    //     map[nums[i]] = i;
    // }

    // for (auto i = map.begin(); i != map.end(); i++) {
    //     noDup.push_back(i->first);
    // }
    
    // for (int i = 0; i < noDup.size(); ++i) {
    //     cout << noDup[i] << endl;
    // }
}