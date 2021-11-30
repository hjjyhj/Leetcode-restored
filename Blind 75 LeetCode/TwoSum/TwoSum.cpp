#include <iostream>
#include <vector>

using namespace std;

// twoSum function
// @param nums vector of numbers
// @param target the number we want
// @return vector of indices
vector<int> twoSum(vector<int> nums, int target) {
    
    // iterate through the vector 
    for (int i = 0; i < nums.size(); ++i) {
        // for each element in the vector, go through all the elements after nums[i]
        // to find the complement
        for (int j = i+1; j < nums.size(); ++j) {
            int complement = target - nums[i];
            
            // return if found
            if (nums[j] == complement) {
                return vector<int> {i, j};
            }
    
        }
    }
    return vector<int> {};
}

int main() {
    vector<int> nums {2,7,11,15};
    vector<int> output = twoSum(nums, 9);
    if (!output.empty()) {
        cout << "{" << output.at(0) << " " << output.at(1) << "}" << endl;
    }

}