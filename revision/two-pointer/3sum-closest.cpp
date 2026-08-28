#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

class Solution {
public:
    int ThreesumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int max_diff = INT_MAX;
        int res = 0;

        for(int i=0; i<nums.size()-2; i++) {

            int left = i + 1;
            int right = nums.size()-1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                int diff = abs(sum-target);
                if(diff < max_diff) {
                    max_diff = diff;
                    res = sum;
                }
               

                if(sum == target) {
                    left++;
                    right--;
                } else if(sum > target) {
                    right--;

                } else {
                    left++;
                }
            }

        }
    return res;


    }
};



int main() {
    Solution sol;
    vector<int> nums = {-1,2,1,-4};
    int target = 1;
    int ans = sol.ThreesumClosest(nums, target);
    cout << ans;
    return 0;
    

}