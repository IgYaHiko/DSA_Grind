#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public: 
    bool canCandi(vector<int>& nums, long long mid_guess, long long k) {
        long long child = 0;
        for(int i=0; i<nums.size(); i++) {
            long long candi = nums[i] / mid_guess;
            child += candi;
            if (child >= k) {
                return true;
            }

        }
    return false;

         
    }
    int maximumCandi(vector<int>& nums, long long k) {
        long long i = 1;
        long long j = *max_element(nums.begin(), nums.end());
        long long res = 0;
        if (accumulate(nums.begin(), nums.end(), 0) < k) {
            return 0;
        }
        while (i<=j) {
            long long mid = i + (j-i)/2;
            bool can = canCandi(nums, mid, k);
            if (can) {
                res = mid;
                i = mid + 1;
            } else {
                j = mid - 1;
            }
           
        }
    return res;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {5,8,6};
    int k = 3;
    int ans = sol.maximumCandi(nums, k);
    cout << ans;
    return 0;
}