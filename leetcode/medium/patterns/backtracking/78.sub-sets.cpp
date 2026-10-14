#include<iostream>
using namespace std;

class Solution {
public:
    void func(vector<vector<int>> &res, vector<int> &temp, int n, int idx, vector<int> &nums) {
        if (idx == n) {
            res.push_back(temp);
            return;
        }

        // choice one take it
        temp.push_back(nums[idx]);
        func(res,temp,n,idx+1,nums);
        temp.pop_back();


        // choice 2 skip the idx
        func(res,temp,n,idx+1,nums);

    }
    vector<vector<int>> subsets(vector<int> &nums) {
        vector<vector<int>> res; 
        vector<int> temp;

        func(res,temp,nums.size(),0,nums);
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,2};
    vector<vector<int>> ans = sol.subsets(nums);

    for(int i = 0; i < ans.size(); i++) {
        cout << "[ ";
        for(int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;

}