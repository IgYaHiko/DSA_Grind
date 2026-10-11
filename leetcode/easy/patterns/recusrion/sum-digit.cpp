#include<iostream>
using namespace std;
class Solution {
public:
    int sumofDigit(int n) {
        if(n == 1) {
            return 1;
        }
        if(n == 0) {
            return 0;
        }

        int ans = sumofDigit(n/10) + n % 10;
        return ans;


    }
};
int main() {
    Solution sol;
    int ans = sol.sumofDigit(100);
    cout << "Sum of digit: " << ans;
    return 0;
}