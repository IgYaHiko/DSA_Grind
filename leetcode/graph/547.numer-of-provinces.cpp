#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void dfs(vector<vector<int>> & adj, vector<bool> &v, int i, int n) {
        v[i] = true;
        for(int j=0; j<n; j++) {
            if(v[j] == false && adj[i][j] == 1) {
                dfs(adj, v, j, n);
            }
        }
    return;
    }

    int numberOfPro(vector<vector<int>> &isConn) {
        int res = 0;
        int n = isConn.size();
        vector<bool> v(n, false);

        for(int i=0; i<n; i++) {
            if(v[i] == false) {
                dfs(isConn, v, i, n);
                res++;
            }
        }
    return res;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> isConnected = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    int res = sol.numberOfPro(isConnected);
    cout << res;
    return 0;
}
