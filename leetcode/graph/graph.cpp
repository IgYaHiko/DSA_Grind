#include<iostream>
#include<list> // DLL
#include<vector>
using namespace std;

class Graph {
    int v;
    list<int> *l; // dynamic array

public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void displayList() {
        for(int i=0; i<v; i++) {
            cout << i << " : ";
            
            for(int nei: l[i]) {
                cout << nei << " ";
            }

            cout << endl;
        }

    }
};

int main() {
    Graph graph(8);
    graph.addEdge(0,1);
    graph.addEdge(1,2); 
    graph.addEdge(1,3); 
    graph.addEdge(2,3); 
    graph.addEdge(2,4); 
    graph.addEdge(4,0); 
    graph.addEdge(5,1); 

    graph.displayList();
    return 0;
}