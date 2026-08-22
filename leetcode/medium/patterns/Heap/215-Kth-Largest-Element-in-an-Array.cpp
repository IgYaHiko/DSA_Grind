#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> min_heap; 
        for(int i=0; i<nums.size(); i++) {
            if(min_heap.size() < k) {
                min_heap.push(nums[i]);
            } else if(nums[i] <= min_heap.top()) {
                continue;
            } else {
                if(!min_heap.empty()) {
                    min_heap.pop();
                }
                min_heap.push(nums[i]);
            }
        }
    return min_heap.top();
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;
    int ans = sol.findKthLargest(nums,k);
    cout << ans;
    return 0;
}