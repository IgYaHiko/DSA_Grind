#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public: 
    bool isValid(unordered_map<char, int> &fs1, unordered_map<char,int> &fs2) {
        if (fs1 == fs2) {
            return true;
        }
        return false;
    }
    bool checkInclusion(string &s1, string &s2) {
        int high = 0;
        int low = 0;
        unordered_map<char,int> fs1;
        unordered_map<char,int> fs2;
        int i = 0;

        while(i < s1.size()) {
            fs1[s1[i]]++;
            i++;
        }
        while(high < s2.size()) {
            fs2[s2[high]]++;
            int window_len = (high - low) + 1;

            if(window_len == s1.size()) {
                if(isValid(fs1, fs2)) {
                    return true;
                }
                fs2[s2[low]]--;
                if(fs2[s2[low]] == 0) {
                    fs2.erase(s2[low]);
                }
                low++;

            }
        high++;
        }
    return false;
        
    } 
};
int main() {
    Solution sol;
    string s1 = "ab";
    string s2 =  "eidbaooo";
    bool ans = sol.checkInclusion(s1,s2);
    cout << boolalpha << ans;
    return 0;

}