#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    //check is valid for unordered_map
    bool isValid(unordered_map<char,int> &fs, unordered_map<char, int> &fp) {
        if(fs == fp) {
            return true;
        }
        return false;
    }
    vector<int> findAnagrams(string &s, string &p) {
        unordered_map<char,int> fs;
        unordered_map<char,int> fp;
        int high = 0;
        int low = 0;
        vector<int> res;
        int i = 0;
        while (i < p.size()) {
            fp[p[i]]++;
            i++;
        }
        while (high < s.size()) {
            fs[s[high]]++;
            int window_len = (high - low) + 1;
            if(window_len == p.size()) {
                if(isValid(fs,fp)) {
                    int start = low;
                    res.push_back(start);
                }
                fs[s[low]]--;
                if(fs[s[low]] == 0) {
                    fs.erase(s[low]);
                }
                low++;
            }
        high++;
        }
    return res;
    }
};

int main() {
    Solution sol;
    string s = "cbaebabacd";
    string p = "abc";
    vector<int> ans = sol.findAnagrams(s,p);
    for(int x: ans) {
        cout << x << " ";
    }
    return 0;
}