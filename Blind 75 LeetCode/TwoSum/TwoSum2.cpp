#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
        int complement;
        vector<int> rVec;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            complement = target - nums[i];
            if (map.find(complement) != map.end() && map.find(complement)->second != i) {
                rVec.push_back(map.find(complement) -> second);
                rVec.push_back(i);
                return rVec;
            }
            
            map[nums[i]] = i;
        }
        return rVec;
    }

int main() {
    vector<int> nums {2,7,11,15};
    vector<int> output = twoSum(nums, 9);
    if (!output.empty()) {
        cout << "{" << output.at(0) << " " << output.at(1) << "}" << endl;
    }
}