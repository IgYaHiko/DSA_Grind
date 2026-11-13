#include<iostream>
#include<vector>
#include<queue>
using namespace std;


class Solution {
public:
    void func(vector<vector<int>> &adj, vector<int> &res, queue<int> q, vector<bool> &v) {
        q.push(0);
        v[0] = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            res.push_back(node);

            for(int i=0; i<adj[node].size(); i++) {
                int nei = adj[node][i];
                if(v[nei] == false) {
                    q.push(nei);
                    v[nei] = true;
                }
            }

        }
    return;
        
    }
    vector<int> BFS(vector<vector<int>> &adj) {
        vector<bool> v(adj.size(), false);
        vector<int> res;
        queue<int> q;
        func(adj, res, q,v);
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

    vector<int> ans = sol.BFS(adj);
    cout << "BFS Traversal: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
