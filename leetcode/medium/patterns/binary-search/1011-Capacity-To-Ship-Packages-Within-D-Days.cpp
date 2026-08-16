#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


class Solution {
public:
    bool test_weight(vector<int>& nums, int mid_guess, int days) {
        long long d = 1;
        long long curr_load = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > mid_guess) {
                return false;
            }
            if((nums[i] + curr_load) > mid_guess) {
                d++;
                curr_load = nums[i];
            } else {
                curr_load += nums[i];
                
            }
            if (d > days) {
                    return false;
                }
        }
    return true;

    }
    int capacity_ship(vector<int>& nums, int days) {
        long long i = *min_element(nums.begin(), nums.end());
        long long j = accumulate(nums.begin(), nums.end(),0);
        long long res = 0;
        while (i<=j) {
            long long mid = i + (j-i)/2;
            bool weight = test_weight(nums, mid, days);
            // if the func gives true;
            if(weight) {
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
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    int ans = sol.capacity_ship(nums, days);
    cout << ans;
    return 0;
}