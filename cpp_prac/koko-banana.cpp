#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    long long return_hour(vector<int>& nums, int sp) {
        long long h = 0;
        for(int i=0; i<nums.size(); i++) {
            h += nums[i] / sp;
            if (nums[i] % sp != 0) {
                h += 1;
            }
        }
    return h;
    }

    int konoBanana(vector<int>& nums, int h) {
        long long i = 1;
        long long j = *max_element(nums.begin(), nums.end());
        long long res = -1;
        while (i <= j) {
            long long mid = i + (j-i) /2;
            long long hour = return_hour(nums, mid);
            if (hour > h) {
               i = mid + 1; 
            } else {
                res = mid;
                j = mid - 1;
            }
        }
    return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {3,6,7,11};
    long long ans = sol.konoBanana(nums, 8);
    cout << ans;
    return 0;
}