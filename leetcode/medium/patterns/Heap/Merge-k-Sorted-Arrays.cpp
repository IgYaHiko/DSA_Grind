#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    vector<int> mergeArrays(vector<vector<int>>& mat) {
        // first will take a tuple min heap , to store the 
        // {element,row,col}
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<tuple<int,int,int>>> min_heap;

        // create a res vector where we store the sorted value
        vector<int> res;

        int row = mat.size();
        int col = mat[0].size();

        // insert the initial value; {element,row, 0th col}
        for(int i=0; i<=row-1; i++) {
            min_heap.push({mat[i][0],i,0});
        }

        // extracting elements from the heap;
        while(!min_heap.empty()) {
            auto [value, row, col] = min_heap.top();
            min_heap.pop();

            //inseart the smallest element in the heap, though will do that for you;
            res.push_back(value);

            if(col+1 < mat[row].size()) {
                min_heap.push({mat[row][col+1],row,col+1});
            }
        }
    return res;

    }
};

int main() {
    Solution sol;
    vector<vector<int>> mat = {
        {1, 3, 5, 7}, 
        {2, 4, 6, 8}, 
        {0, 9, 10, 11},
    };
    vector<int> ans = sol.mergeArrays(mat);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
    
}