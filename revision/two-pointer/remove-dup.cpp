#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDup(vector<int>& nums) {
        int i = 0;
        int j = 1;
        while(j <= nums.size()-1) {
            if(nums[i] != nums[j]) {
                nums[i+1] = nums[j];
                i++;
            }
            j++;
        }
    return i + 1;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int ans = sol.removeDup(nums);
    cout << ans;
    return 0;

}