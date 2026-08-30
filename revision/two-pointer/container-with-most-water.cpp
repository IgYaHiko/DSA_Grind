#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int res = 0;
        while (i<j) {
            int w = j-i;
            int h = min(height[i], height[j]);
            int water = w * h;
            res = max(res,water);
            if(height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        
    return res;    
    
    }
};

int main() {
    Solution sol;
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int ans = sol.maxArea(height);
    cout << ans;
    return 0;

}