#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int canCitate(vector<int>& nums, int mid_h) {
        int count = 0;
        for (int i=0; i<nums.size(); i++) {
            if(nums[i] >= mid_h) {
                count++;
            }
        }
        if (count < mid_h) {
            return -1;
        }
    return count;
    }
    int hIndex(vector<int>& nums) {
        int i = 0;
        int j = *max_element(nums.begin(), nums.end());
        int res = -1;
        while (i<=j) {
            int mid = i + (j-i)/2;
            int test = canCitate(nums, mid);
            if (test >= mid) {
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
    vector<int> cite = {0,1,3,5,6};
    int ans = sol.hIndex(cite);
    cout << ans;
    return 0;
}