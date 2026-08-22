#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// i want to setup a max heap;
struct cmp {
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
        if(a.first != b.first) {
            return a.first < b.first;
        }
        return a.second < b.second;
    }
};
class Solution {
public:
    // this func fiding the distance of the elements from the 2d array and return the result in 1d array;
    vector<int> find_distance(vector<vector<int>>& nums) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++) {
            int x = nums[i][0];
            int y = nums[i][1];

            int distance = (x*x + y*y);
            res.push_back(distance);
        }
    return res;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        //calling the func store in 1d array;
        vector<int> distance = find_distance(points);
        vector<vector<int>> res;
        // taking a heap;
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> heap;

        // heap opt;
        for(int i=0; i<distance.size(); i++) {
            if(heap.size() < k) {
                heap.push({distance[i],i});
            } else if(distance[i] > heap.top().first) {
                continue;
            } else {
                if(!heap.empty()) {
                    heap.pop();
                }
                heap.push({distance[i], i});
            }
            
        }
        // extracting the elements for the heap;
        while(!heap.empty()) {
            auto x = heap.top();
            res.push_back(points[x.second]);
            heap.pop();
        }
    return res;

    }
};

int main() {
    Solution sol;
    vector<vector<int>> points = {{3,3},{5,-1},{-2,4}};
    int k = 2;
    vector<vector<int>> res = sol.kClosest(points, k);
   

    for (int i = 0; i < res.size(); i++) {
        cout << "[";

        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j];

            if (j < res[i].size() - 1)
                cout << ",";
        }

        cout << "] ";
    }
    return 0;

}