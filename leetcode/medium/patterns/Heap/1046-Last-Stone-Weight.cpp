#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    int lastStone(vector<int>& nums) {
        priority_queue<int> heap;
        for(int i=0; i<nums.size(); i++) {
            heap.push(nums[i]);
        }
        while(!heap.empty()) {
            int curr = heap.top();
            heap.pop();
            if(heap.empty()) {
                heap.push(curr);
                return heap.top();
            } else {
                int next = heap.top();
                heap.pop();
                int diff = curr - next;
                heap.push(diff);
            }
        }
    return heap.top();
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2,7,4,1,8,1};
    int ans = sol.lastStone(nums);
    cout << ans;
    return 0;

}