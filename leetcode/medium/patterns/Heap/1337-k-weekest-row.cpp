#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct cmp {
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
         // making a mean heap;
        if(a.first != b.first) {
            return a.first < b.first;
        }
        return a.second < b.second;
    }
};
class Solution {
public:
    vector<int> sumOfRow(vector<vector<int>>& mat) {
        vector<int> row_sum;
       
        for(int i=0; i<mat.size(); i++) {
            int total = 0;
            for(int j=0; j<mat[0].size(); j++) {
                total += mat[i][j];
               
            }
            row_sum.push_back(total);
        }
    return row_sum;
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // taking heap 
        vector<int> row_sum = sumOfRow(mat);
        // taking a result array;
        vector<int> res;
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> heap;
        for(int i=0; i<row_sum.size(); i++) {
            if(heap.size() < k) {
                heap.push({row_sum[i],i});
            } else if(row_sum[i] > heap.top().first) {
                continue;
            } else if(row_sum[i] == heap.top().first) {
                if(i > heap.top().second) {
                    continue;
                }
            } else {
                if(!heap.empty()) {
                    heap.pop();
                }
                heap.push({row_sum[i], i});
            }
        }
        while (!heap.empty()) {
            auto x = heap.top();
            res.push_back(x.second);
            heap.pop();
        }
        sort(res.begin(), res.end(),[&](int a, int b) {
            if(row_sum[a] != row_sum[b]) {
                return row_sum[a] < row_sum[b];
            }
            return a < b;
        });
    return res;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> nums  = 
{{1,1,0,0,0},
{1,1,1,1,0},
{1,0,0,0,0},
{1,1,0,0,0},
{1,1,1,1,1},
};
    int k = 3;
    vector<int> ans = sol.kWeakestRows(nums,k);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
    
}