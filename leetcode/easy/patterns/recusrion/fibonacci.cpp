#include<iostream>
using namespace std;

class Solution {
public:
    int fibo(int n) {
        if(n == 0) {
            return 0;
        }
        if(n == 1) {
            return 1;
        }
        int fib = fibo(n-1) + fibo(n-2);
        return fib;
    }
};

int main() {
    Solution sol;
    int ans = sol.fibo(5);
    cout << ans;
    return 0;
}