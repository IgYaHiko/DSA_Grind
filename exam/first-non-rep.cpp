#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    char firstNonreqChar(string& s) {
        unordered_map<char, int> freq;
        for(int i=0; i<s.size(); i++) {
            freq[s[i]]++;
        }

        for(int i=0; i<s.size(); i++) {
            if(freq[s[i]] == 1) {
                return s[i];
            }
        }
    return 'N';
    }
};
int main() {
    Solution sol;
    string s = "SWISS";
    char ans = sol.firstNonreqChar(s);
    cout << "Answer: " << ans;
    return 0;
}