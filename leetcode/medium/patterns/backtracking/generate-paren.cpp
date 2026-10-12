#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    void func(int open, int closing, int n, vector<string> &res, string &temp) {
        if(open == n && closing == n) {
            res.push_back(temp);
            return;
        }
        if(open < n) {
            temp += '(';
            func(open + 1, closing, n, res, temp);
            temp.pop_back();
        }

        if(closing < open ) {
            temp += ')';
            func(open, closing+1, n , res, temp);
            temp.pop_back();
        }

    }

    vector<string> generateParen(int n) {
        vector<string> res;
        string s = "";
        func(0,0,n,res,s);
        return res;
    }
};

int main() {
    Solution sol;
    vector<string> ans = sol.generateParen(3);
    for(char i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}