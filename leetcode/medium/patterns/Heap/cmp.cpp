#include<iostream>
#include<queue>
#include<vector>
using namespace std;
// <1: apple>
// <2: banana> 
struct cmp {
    bool operator()(pair<int, string>& a, pair<int, string>& b) {
         if(a.first != b.first) {
            return a.first < b.first;
         }
        return a.second < b.second;
    }
};

int main() {
    priority_queue<pair<int,string>, vector<pair<int, string>>, cmp> pq;
    pq.push({1, "apple"});
    pq.push({2, "banana"});
    pq.push({1, "orange"});
    cout << pq.top().first << " "
         << pq.top().second << endl;
}