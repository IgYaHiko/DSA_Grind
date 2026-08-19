#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search2DMatrix( vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int i = 0;
        int j = (row * col) -1;
        while (i <= j) {
            int mid = i + (j-i)/2;
            int r = mid / col;
            int c = mid % col;
           
            if (target == matrix[r][c]) {
                return mid;
            }else if (target > matrix[r][c]) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
    return -1;

    }
};

int main () {
    Solution sol;
    vector<vector<int>> nums = 
        {
            {1,3,5,7},
            {10,11,16,20},
            {23,30,34,60},
        };
    int target = 11;
    int ans = sol.search2DMatrix(nums, target);
    cout << ans;
    return 0;
}