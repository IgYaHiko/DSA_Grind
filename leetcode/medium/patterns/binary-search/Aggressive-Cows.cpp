#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool differCow(vector<int>& nums, int guess, int k) {
       int lastCow = nums[0];
       int cows = 1;
       for (int i = 0; i < nums.size(); i++) {
            if ((nums[i] - lastCow) >= guess) {
                lastCow = nums[i];
                cows++;
                if (cows == k) {
                    return true;
                }
            }
       }
       return false;
    }
    int aggressiveCows(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 1;
        int j = *max_element(nums.begin(),  nums.end()) - *min_element(nums.begin(), nums.end());
        int res = -1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            bool test = differCow(nums, mid, k);
            if (test) {
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
    vector<int> nums = {1,2,4,8,9};
    int k = 3;
    int ans = sol.aggressiveCows(nums, k);
    cout << ans;
    return 0;

}