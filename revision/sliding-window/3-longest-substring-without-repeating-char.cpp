#include<iostream>
#include<string>
#include<unordered_map>
#include<climits>

using namespace std;

class Solution {
public:
    int withoutReapting(string &s) {
        int high = 0;
        int low = 0;
        int res = -INT_MAX;
        unordered_map<char,int> f;
        while(high < s.size()) {
            f[s[high]]++;
            while(f.size() < (high - low)+1) {
                f[s[low]]--;
                if(f[s[low]] == 0) {
                    f.erase(s[low]);
                }
                low++;
            }
            int wind = (high - low) + 1;
            res = max(res, wind);
            high++;
        }
    return res;
    }
};
int main() {
    Solution sol;
    string s = "abcabcbb";
    int ans = sol.withoutReapting(s);
    cout << ans;
    return 0;
    

}