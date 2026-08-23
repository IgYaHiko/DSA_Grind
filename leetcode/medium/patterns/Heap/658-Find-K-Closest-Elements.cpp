#include<iostream>
#include<queue>
#include<vector>
#include<cstdlib>
using namespace std;

struct cmp {
    bool operator()(pair<int,int>& a, pair<int,int>& b) {
        // making a max heap;
        if(a.first != b.first) {
            return a.first < b.first;
        }
        // second value also behaving like max heap
        return a.second < b.second;
    }
};
class Solution {
public: 
    // this is distance func only cal the distance from x positon of each element in array
    vector<int> find_distance(vector<int>& nums, int x) {
        vector<int> dis;
        for(int i=0; i<nums.size(); i++) {
            dis.push_back(abs(nums[i] - x));
        }
        return dis;
    }
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
            // calling the distance func;
            vector<int> distance = find_distance(nums,x);

            // takinga res vector to store the final value;
            vector<int> res;

            // taking heap 
            priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> heap;

            // first insert k elements in the heap;
            for(int i=0; i<distance.size(); i++) {
                if(heap.size() < k) {
                    heap.push({distance[i],i});

                } else if(distance[i] > heap.top().first) {
                    continue;;
                } else if(distance[i] == heap.top().first) {
                    if(i > heap.top().second) {
                        continue;
                    }

                } else {
                    if(!heap.empty()) {
                        heap.pop();
                    }
                    heap.push({distance[i], i});
                }
            }
            while(!heap.empty()) {
                auto x = heap.top();
                res.push_back(nums[x.second]);
                heap.pop();
            }
            sort(res.begin(), res.end());
            return res;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,1,2,3,4,5};
    int k = 4;
    int x = -1;
    vector<int> ans = sol.findClosestElements(nums, k,x);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}