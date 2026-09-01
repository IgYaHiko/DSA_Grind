
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int fruitBasket(vector<int>& nums) {
        unordered_map<int,int> freq;
        int high = 0;
        int low = 0;
        int res = -1;
        while(high <= nums.size()-1) {
            freq[nums[high]]++;
            while (freq.size() > 2) {
                freq[nums[low]] --;
                if (freq[nums[low]] == 0) {
                    freq.erase(nums[low]);
                }
                low++;

            }
            int wind = (high - low) + 1;
            res = max(res, wind); 

            high++;
        }
    return res;
        
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2,3,2,2};
    int ans = sol.fruitBasket(nums);
    cout << ans;
    return 0;
}