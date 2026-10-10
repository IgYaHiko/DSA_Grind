#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findLarge(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        int maxi = mat[0][0];

        for(int i=0; i<row * col; i++) {
            
            int r = i / col;
            int c = i % col;

            maxi = max(maxi, mat[r][c]);
        }
    return maxi;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {1,2,4,5},
        {2,4,5,6},
        {90,4,23,2}
    };
    int ans = sol.findLarge(mat);
    cout << "Largest element in the mat: " << ans << endl;
    return 0;
}