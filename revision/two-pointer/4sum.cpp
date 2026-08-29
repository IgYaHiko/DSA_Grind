#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for(int i=0; i<nums.size()-3; i++) {
            if( i > 0 && nums[i] == nums[i-1]) {
                i++;
            }
            for(int j = i + 1; j < nums.size()-2; j++) {
                if(j > i + 1 && nums[j] == nums[j-1]) {
                    j++;
                }
                int left = j + 1;
                int right = nums.size()-1;
                while (left < right) {
                    int sum = nums[i] + nums[j] + nums[left] + nums[right];
                    
                    if (sum == target) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        left++;
                        right--;
                        while (left < right && nums[left] == nums[left - 1]) {
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
        }
    return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    vector<vector<int>> ans = sol.fourSum(nums, target);
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[0].size(); j++) {
            cout << ans[i][j] << " ";

        }
        cout << endl;
    }
    return 0;
}