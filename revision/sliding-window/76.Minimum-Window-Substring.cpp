#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool isvalid(unordered_map<char, int> &fs, unordered_map<char,int> &ft) {
        for (auto x: ft) {
            if(fs[x.first] < x.second) {
                return false;
            }
        }
        return true;
    }
    string minWindow(string &s, string &t) {
        int high = 0;
        int low = 0;
        int res = INT_MAX;
        int start = 0;
        int i = 0;
        unordered_map<char,int> fs;
        unordered_map<char,int> ft;
        while ( i < t.size()) {
            ft[t[i]]++;
            i++;
        }
        while (high < s.size()) {
            fs[s[high]]++;

            while(isvalid(fs,ft)) {
                int window_len = (high-low) +1;
                if(window_len < res) {
                    res = window_len;
                    start = low;
                }
                fs[s[low]]--;
                if(fs[s[low]] == 0) {
                    fs.erase(s[low]);
                }
                low++;

            }
            high++;
        }
        if (res == INT_MAX) {
            return "";
        }
        return s.substr(start, res);
    }
};
int main() {
    Solution sol;
    string s = "ADOBECODEBANC";
    string t = "ABC";
    string ans = sol.minWindow(s,t);
    cout << ans;
    return 0;



}