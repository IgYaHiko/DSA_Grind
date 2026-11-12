#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> printGraph(int V, vector<vector<int>> &edges) {
        vector<vector<int>> adjlist(V);
        for(int i = 0; i < edges.size(); i++) {
            vector<int> temp = edges[i];

            int src = temp[0];
            int dest = temp[1];

            adjlist[src].push_back(dest);
            adjlist[dest].push_back(src);
        }
        return adjlist;
    }
};

int main() {
    Solution sol;
    int V = 5;
    vector<vector<int>> edges = {{0,1}, {0,4}, {4,1}, {4,3}, {1,3}, {1,2}, {3,2}};
    vector<vector<int>> ans = sol.printGraph(5,edges);

    for (int i = 0; i < ans.size(); i++) {

        cout << "Node " << i << " -> ";

        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}