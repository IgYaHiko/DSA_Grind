#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool search2d(vector<vector<int>>& matrix, int target) {
        int i = matrix.size()-1;
        int j = 0;
        while (i >= 0 && j <= matrix[0].size()-1) {
                if (matrix[i][j] == target) {
                    return true;
                } else if (matrix[i][j] > target) {
                    i--;
                } else {
                    j++;
                }
        }

    }
};

int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
    };
    int target = 5;
    int ans = sol.search2d(mat, target);
    cout << boolalpha << ans;
    return 0;

}