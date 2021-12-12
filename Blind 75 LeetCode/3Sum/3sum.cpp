#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> ans;
    
    int p1 = 0;
    int p2 = 1;
    int p3 = 2;
    while (p1 < nums.size() - 2) {
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