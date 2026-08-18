#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution {
public: 
    bool canSplit(vector<int>& nums, int mid, int k ) {
        int sub = 1;
        int total = 0;
        for (int i = 0; i < nums.size(); i++) {
            if((total + nums[i]) > mid) {
                sub++;
                total = nums[i];
            } else {
                total += nums[i];
            }
            if ( sub > k) {
                return false;
            }
        }
    return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int i = *min_element(nums.begin(), nums.end());
        int j = accumulate(nums.begin(), nums.end(),0);
        int res = -1;
        while (i <= j) {
            int mid = i + (j-i)/2;
            bool test = canSplit(nums, mid, k);
            if (test) {
                res = mid;
                j = mid - 1;

            } else {
               i = mid + 1;

            }
        }
    return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {7,2,5,10,8};
    int k = 2;
    int ans = sol.splitArray(nums, k);
    cout << ans;
    return 0;
}