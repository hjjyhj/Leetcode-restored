#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int mostWater(vector<int> height) {
    int p1 = 0;
    int p2 = height.size() - 1;
    int m = 0;
    int current;
    while (p1 < p2) {
        current = (p2-p1) * min(height[p1], height[p2]);
        m = max(m, current);
        if (height[p1] > height[p2]) {
            p2--;
        } else if (height[p1] < height[p2]) {
            p1++;
        } else {
            p2--;
            p1++;
        }
    }
    return m;
}

int main() {
    vector<int> height {4,3,2,1,4};
    cout << mostWater(height) << endl;
}