#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph {
public:
    int V;
    list<int> *l; // dynamic array
    vector<vector<int>> adj;
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
        adj.resize(V);
    }

    void addEdges(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    
    }
    vector<vector<int>> adjacencyByMatrix(vector<vector<int>> &edges) {
        vector<vector<int>> adj(V);

        for(int i=0; i<edges.size(); i++) {
            vector<int> edge = edges[i];

            int src = edge[0];
            int dest = edge[1];

            adj[src].push_back(dest);
            adj[dest].push_back(src);
        }

        return adj;
    }

    void funcbfs(vector<vector<int>> &adj, vector<int> res, vector<bool> &visited, queue<int> &q) {
        q.push(0);
        visited[0] = true;

        while(!q.empty()) {
            int node = q.front();
            q.pop();
            res.push_back(node);

            for(int i=0; i<adj[node].size(); i++) {
                int nei = adj[node][i];
                if(visited[nei] == false) {
                    q.push(nei);
                    visited[nei] = true;
                }
            }
        }
    return;



    }
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<int> res;
        vector<bool> visited(adj.size(), false);
        queue<int> q;
        funcbfs(adj, res, visited, q);
        return res;
    }
 

    void funcDFS(vector<vector<int>> &adj, vector<bool> &visited, int node, vector<int> &res) {
        res.push_back(node);
        visited[node] = true;

        for(int i=0; i<adj[node].size(); i++) {
            // will find the nei
            int nei = adj[node][i];
            if(visited[nei] == false) {
                funcDFS(adj, visited, nei, res);
            }
        }
        return;
    }
    // dfs traversal in the adj matrix
    vector<int> dfs(vector<vector<int>> &adj) {
        vector<int> res;
        vector<bool> v(adj.size(), false);
        funcDFS(adj, v, 0,res);
        return res;
    }

    void displayRepresentMatrix() {
        for(int i=0; i<V; i++) {
            cout << i << " :";
            for(int nei: adj[i]) {
                cout << nei << " ";
            }
            cout << endl;
        }

    }


    void displayRepresentList() {
        for(int i=0; i<V; i++) {
            cout << i << " :";
            for(int nei: l[i]) {
                cout << nei << " ";
            }
            cout << endl;
        }

    }

    ~Graph() {
    delete[] l;
    }

};

int main() {
    
    vector<vector<int>> edges = {{0,1}, {0,4}, {4,1}, {4,3}, {1,3}, {1,2}, {3,2}};
    Graph graph(6);

    // Representation by adj list
    cout << "Represent By adj list" << endl;
    graph.addEdges(0,1);
    graph.addEdges(1,2);
    graph.addEdges(2,3);
    graph.addEdges(3,4);
    graph.addEdges(4,0);
    graph.addEdges(5,4);
    graph.addEdges(5,0);

    graph.displayRepresentList();

    // Represent By adj matrix
    cout << "Represent By adj matrix" << endl;
    graph.adj = graph.adjacencyByMatrix(edges);
    graph.displayRepresentMatrix();

    // extract the adj matrix 
    vector<vector<int>> adj = graph.adjacencyByMatrix(edges);
    vector<int> res = graph.dfs(adj);

    cout << "DFS Traversal" << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    } 
    cout << endl;
    cout << "BFS Traversal" << endl;
    vector<int> b = graph.bfs(adj);

    for(int i=0; i<b.size(); i++) {
        cout << b[i] << " ";
    }
    return 0;

    

}
