#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortcolors(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int k = nums.size()-1;

        while( j<= k ) {
            if(nums[j] == 0) {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;
                j++; 
            } else if(nums[j] == 2) {
                int t = nums[j];
                nums[j] = nums[k];
                nums[k] = t;
              
                k--;
            } else {
                j++;
            }
        }
    return nums;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2,0,2,1,1,0};
    vector<int> ans = sol.sortcolors(nums);
    for(int x: ans){
        cout << x << " ";
    }
    return 0;
}