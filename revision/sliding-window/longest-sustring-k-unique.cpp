#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;


class Solution {
public:
    int longestsubstringkunique(string &s, int k) {
        int high = 0;
        int low = 0;
        int res = -1;
        unordered_map<char,int> f;

        while(high <= s.size()-1) {
            f[s[high]]++;

            while(f.size() > k) {
                f[s[low]] --;
                if(f[s[low]] == 0) {
                    f.erase(s[low]);
                }
                low++;
            }
            if(f.size() == k) {
                int wind = (high - low) + 1;
                res = max(res, wind);
            }
        high++;
        }
    return res;
    }
};
int main() {
    Solution sol;
    string s = "aabacbebebe";
    int k = 3;
    int ans = sol.longestsubstringkunique(s,k);
    cout << ans;
    return 0;
    
}