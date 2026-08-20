#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int howmanysmallnumber(vector<vector<int>>& mat, int mid_guess) {
        int numbers = 0;
        int row = mat.size();
        int col = mat[0].size();
        
        int i = row-1;
        int j = 0;
        while (i>=0 && j<=col-1) { 
            if(mat[i][j] <= mid_guess) {
                numbers += i + 1;
                //shift the colum
                j++;
            } else {
                i--;
            }
        }
    return numbers;
    }

    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int i = matrix[0][0];
        int j = matrix[matrix.size()-1][matrix[0].size()-1];
        int res = 0;
        while (i <= j) {
            int mid = i + (j-i)/2;
            int test = howmanysmallnumber(matrix, mid);
            if(test < k) {
                i = mid + 1;
            } else {
                res = mid;
                j = mid - 1;
            }
        }
    return res;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {1,5,9},
        {10,11,13},
        {12,13,15},
    };
    int k = 8;
    int ans = sol.kthSmallest(mat,k);
    cout << ans;
    return 0;
}