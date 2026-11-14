#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int x[4] = {-1,1,0,0};
    int y[4] = {0,0,-1,1};
    bool isValid(int i, int j, int n, int m) {
        if(i < 0 || i >= n || j < 0 || j>=m ) {
            return false;
        }
    return true;
    }

    void dfs(vector<vector<char>> &grid, int i, int j, int n, int m, vector<vector<bool>> v ) {
        // i and j represent the current position of the element in the grid;
        v[i][j] = true;
        // this is how we traval in the 4 direction 
        // up: a[i-1][j];
        // down: a[i+1][j];
        // left: a[i][j-1];
        // down: a[i][j+1];
        for(int k=0; k<4; k++) {
            // row and col represent the next position in the grid;
            int row = i + x[k];
            int col = j + y[k];
            // if these condition applies then will go further run the dsf
            if(isValid(row, col, n,m) && v[row][col] == 0 && grid[row][col] == '1') {
                dfs(grid,row, col, n, m, v);
            }
        }
    return;
    }

    int numberOfIsland(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int res = 0;
        int i,j;
        vector<vector<bool>> v(n);
        for(i=0; i<v.size(); i++) {
            vector<bool> t(m, false);
            v[i] = t;
        }

        for(i=0; i<n; i++) {
            for(j=0; j<m; j++) {
                if(grid[i][j] == '1' && v[i][j] == 0  ) {
                    dfs(grid,i,j,n,m,v);
                    res++;
                }
            }
        }
    return res;
    }

};

int main() {
 Solution sol;
 vector<vector<char>>grid = {
  {'1','1','0','0','0'},
  {'1','1','0','0','0'},
  {'0','0','1','0','0'},
  {'0','0','0','1','1'}
};
int res = sol.numberOfIsland(grid);
cout << "Total Island in the grid is: " << res;
return 0;
}