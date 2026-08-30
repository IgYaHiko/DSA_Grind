#include<vector>
#include<iostream>
using namespace std;

class Solution {
public: 
    int boatsave(vector<int>& nums, int limit) {
        int i = 0;
        int j = nums.size() -1;
        int b = 0;


        while (i <= j) {
            if((nums[i] + nums[j] <= limit)) {
                i++;
                j--;
                b++;
            } else {
                b++;
                j--;
            }
        }
    return b;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {3,5,3,4};
    int limit = 5;
    int ans = sol.boatsave(nums,limit);
    cout << ans;
    return 0;

}