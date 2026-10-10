#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    bool func(string &s, int low, int high) {
        if(low == high) {
            return true;
        }
        int len = high - low + 1;
        if (len == 0 || len == 1) {
            return true;
        }

        if(s[low] != s[high]) {
            return false;
        }
        return func(s, low+1, high-1);
    }
    bool isPalindrome(string &s) {
        if(s.size() == 1 || s.size() == 0) {
            return true;
        }

        bool ans = func(s, 0, s.size()-1);
        return ans;

    }
};


int main() {
    Solution s;
    string st = "ABA";
    bool ans = s.isPalindrome(st);
    cout << boolalpha << ans;
    return 0;

}