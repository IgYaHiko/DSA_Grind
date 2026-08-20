#include<iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    int kthSmallest(vector<int>& nums, int k) {
        priority_queue<int> max_heap;
        for(int i=0; i<k; i++) {
            max_heap.push(nums[i]);
        }
        for(int j=k; j<nums.size(); j++) {
            if(nums[j] >= max_heap.top()) {
                continue;
            } else {
                if(!max_heap.empty()) {
                    max_heap.pop();
                }
                max_heap.push(nums[j]);
            }
        }
    return max_heap.top();
    }
};

int main() {
    Solution sol;
    vector<int> nums = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int k = 4;
    int ans = sol.kthSmallest(nums, k);
    cout << ans;
    return 0;
    
}