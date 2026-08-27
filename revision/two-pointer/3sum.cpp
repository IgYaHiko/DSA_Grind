#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threesum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0; i<nums.size()-2; i++) {
            if(i > 0 && nums[i] == nums[i-1]) {
                i++;
            }
            int left = i + 1;
            int right = nums.size()-1;
            int target = -nums[i];
            while (left < right) {
                int sum = nums[left] + nums[right];
                if(sum == target) {
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right && nums[left] == nums[left-1]) {
                        left++;
                    }
                    while(left < right && nums[right] == nums[right+1]) {
                        right--;
                    }

                } else if (sum > target) {
                    right--;
                } else {
                    left ++;
                }
            }
        }
    return res;
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = sol.threesum(nums);
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}