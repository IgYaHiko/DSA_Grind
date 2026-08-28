#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> moveZero(vector<int>&  nums) {
        int i = 0;
        int j = 0;
        while (j <= nums.size()-1) {
            if(nums[j] != 0) {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;
            }
            j++;
        }
    return nums;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0,1,0,3,12};
    vector<int> ans = sol.moveZero(nums);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}