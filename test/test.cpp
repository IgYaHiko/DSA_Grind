#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> find_distance(vector<vector<int>>& nums) {
        vector<int> res;
        int row = nums.size();
        for(int i=0; i<row; i++) {
            int x = nums[i][0];
            int y = nums[i][1];

            int distance = (x*x + y*y);
            res.push_back(distance);
        }
    return res;

    }
int main() {
    vector<vector<int>> nums = {{3,3},{5,-1},{-2,4}};
    vector<int> res =  find_distance(nums);
    for(int i=0; i<res.size(); i++) {
        cout << "index: " << i << " element ->" << res[i]<< endl;
    }
    return 0;

}