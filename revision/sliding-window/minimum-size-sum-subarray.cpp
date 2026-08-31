#include<iostream>
#include<vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(vector<int>& nums, int target) {
        int low = 0;
        int high = 0;
        int sum = 0;
        int res = INT_MAX;
        while (high <= nums.size()-1) {
            sum += nums[high];
            while( sum >= target ) {
                int window = (high - low) +1;
                res = min(res,window);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        if(res == INT_MAX) {
            return 0;
        } else {
            return res;
        }
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    int ans = sol.minSubArrayLen(nums, target);
    cout << ans; 
    return 0;
    
}