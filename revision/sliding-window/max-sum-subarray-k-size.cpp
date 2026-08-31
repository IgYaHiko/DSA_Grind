#include<iostream>
#include<vector>
using namespace std;

class Solution {
public: 
    int maxSumsubarray(vector<int>& nums, int k) {
        int low = 0;
        int high = k;
        int sum = 0;
        int res = 0;
        for(int i=low; i<high; i++) {
            sum += nums[i];
        }
        res = sum;
        while (high <= nums.size()-1) {
            sum -= nums[low];
            sum += nums[high];
            low++;
            high++;
           
            res = max(res,sum);
        }
    return res;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {100,200,300,400};
    int k = 2;
    int ans = sol.maxSumsubarray(nums, k);
    cout << ans;
    return 0;

}