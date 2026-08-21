#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;

struct cmp {
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second > b.second;
    }
};
class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // heap
        vector<int> res;
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> heap;
        // declare hashmap
        unordered_map<int,int> freq;
        // insert all the elements freq in hashmap;
        for(int i=0; i<nums.size(); i++) {
            freq[nums[i]]++;
        }
        // insert k values in the heap;
        for(auto x: freq) {
            if(heap.size() < k) {
                heap.push({x.second, x.first});
            } else if (x.second < heap.top().first) {
                continue;
            } else {
                if(!heap.empty()) {
                    heap.pop();
                }
                heap.push({x.second, x.first});
            }
        }
            while (!heap.empty()) {
                auto x = heap.top();
                res.push_back(x.second);
                heap.pop();
            }
        
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,1,2,1,2,3,1,3,2};
    int k = 2;
    vector<int> ans = sol.topKFrequent(nums,k);
    cout << "[";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];

     if (i < ans.size() - 1) {
        cout << ", ";
    }
    }

    cout << "]";
    return 0;

}