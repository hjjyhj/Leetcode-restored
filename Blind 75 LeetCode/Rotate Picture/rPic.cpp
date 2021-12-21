#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<int> container;
    vector<vector<int>> rotated;

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = matrix[i].size() - 1; j >= 0; --j) {
            container.push_back(matrix[j][i]);
        }
        rotated.push_back(container);
        container.clear();
    }

    matrix.clear();
    for (int i = 0; i < rotated.size(); ++i) {
        matrix.push_back(rotated[i]);
    }
}

int main() {
    vector<vector<int>> matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    
    rotate(matrix);

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix.size(); ++j) {
            cout << matrix[i][j] << " ";
        }
    }
}