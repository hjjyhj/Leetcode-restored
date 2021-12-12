#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums) {
    unordered_map <int, int> map;
    vector<int> noDup;
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); ++i) {
        map[nums[i]] = i;
    }

    for (auto i = map.begin(); i != map.end(); i++) {
        noDup.push_back((*i).first);
    }

    int p1 = 0;
    int p2 = 1;
    int p3 = 2;

    if (nums.size() < 2) {
        return ans;
    }   else if (nums.size() == 3) {
            if (nums[p1]+nums[p2]+nums[p3] == 0) {
                ans.push_back({nums[p1], nums[p2], nums[p3]});
                return ans;
            }
    }
    
    while (p1 < noDup.size() - 2) {
        if (noDup.size() < 2) {
            return ans;
        }

        if (noDup.size() == 3) {
            if (noDup[p1] + noDup[p2] + noDup[p3] == 0) {
                vector<int> a;
                ans.push_back({noDup[p1], noDup[p2], noDup[p3]});
                return ans;
                break;
            }
        }

        if (noDup[p1] + noDup[p2] + noDup[p3] == 0) {
            vector<int> a;
            ans.push_back({noDup[p1], noDup[p2], noDup[p3]});
        }

        if (p3 == noDup.size() && p2 == noDup.size() -1) {
            ++p1;
            p2 = p1 + 1;
            p3 = p2 + 1;
        } else if (p3 == noDup.size() && p2 != noDup.size() - 1) {
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