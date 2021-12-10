#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int mostWater(vector<int> height) {
    int m = 0;
    int current;
    for (int i = 0; i < height.size(); ++i) {
        for (int j = i + 1; j < height.size(); ++j) {
            current = (j - i) * min(height[i] , height[j]);
            m = max(m, current);
        }
    }
    return m;
}

int main() {
    vector<int> height {4,3,2,1,4};
    cout << mostWater(height) << endl;
}