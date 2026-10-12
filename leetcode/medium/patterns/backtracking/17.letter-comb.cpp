#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    void func(string &digits, string &temp, int n,int idx, vector<string> &res, unordered_map<char, string> &f) {
        // when hit the base case all choices end push the values in the res vector
        if(idx == n) {
          res.push_back(temp);
        }
        // make choices first 
        string choice = f[digits[idx]];
        for(int i=0; i<choice.size(); i++) {
            temp.push_back(choice[i]);
            func(digits, temp, n, idx+1,res,f);
            temp.pop_back();
        }

    }
    vector<string> letterCombinations(string &digits) {
        vector<string> res;
        string s = ""; 
        unordered_map<char, string> f;
            f['2'] = "abc";
            f['3'] = "def";
            f['4'] = "ghi";
            f['5'] = "jkl";
            f['6'] = "mno";
            f['7'] = "pqrs";
            f['8'] = "tuv";
            f['9'] = "wxyz";
            func(digits,s,digits.size(),0, res,f);
            return res;
    }
};
int main() {
    Solution sol;
    string s = "23";
    vector<string> ans = sol.letterCombinations(s);
    for(char i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}