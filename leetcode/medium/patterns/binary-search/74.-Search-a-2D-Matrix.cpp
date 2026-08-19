#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchMatrix(vector<vector<int>>& nums, int target) {
        int row = nums.size();
        int col = nums[0].size();

        int i = 0;
        int j = row-1;
        int maybe = 0;
        while (i<=j) {
            int mid = i + (j-i) / 2;
            if(target >= nums[mid][0] && target <= nums[mid][col-1]) {
                maybe = mid;
                break;
            } else if(target >= nums[mid][col-1]) {
                i = mid + 1;
            } else {
                j = mid - 1;

            }

        }
        int x = 0;
        int y = nums[maybe].size()-1;
        while (x <= y) {
            int mid = x + (y-x)/2;
            if(nums[maybe][mid] == target) {
                return true;
            } 
            if (nums[maybe][mid] > target) {
                y = mid - 1;
                if (nums[maybe][mid] == target) {
                    return true;
                }
            } else {
                x = mid + 1;
                if(nums[maybe][mid] == target) {
                    return true;
                }
            }
        }
    return false;

    }
};

int main() {
    Solution sol;
    vector<vector<int>> nums = 
        {
            {1,3,5,7},
            {10,11,16,20},
            {23,30,34,60},
        };
    int target = 99;
    bool ans = sol.searchMatrix(nums, target);
    cout << boolalpha << ans;
    return 0;
}