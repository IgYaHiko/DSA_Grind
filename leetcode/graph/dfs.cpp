#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void func(vector<vector<int>> &adj, vector<int> &res, int node, vector<bool> &visited) {
        res.push_back(node);
        visited[node] = true;

        for(int i=0; i<adj[node].size(); i++) {
            int nei = adj[node][i];
            if(visited[nei] == false) {
                func(adj, res, nei, visited);
            }
        }
    return;
    }
    vector<int> dsf(vector<vector<int>> &adj) {
        vector<int> res;
        vector<bool> visited(adj.size(), false);
        func(adj, res, 0,visited);
        return res;
    }
};

int main() {
    Solution sol;
     vector<vector<int>> adj = {
        {2, 3, 1},
        {0},
        {0, 4},
        {0},
        {2}
    };
    vector<int> ans = sol.dsf(adj);
    cout << "DFS Traversal: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}