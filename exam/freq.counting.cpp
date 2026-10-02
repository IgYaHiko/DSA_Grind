#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class Solution {
public:
    unordered_map<char, int> freqCount(string& nums) {
        unordered_map<char,int> freq;
        for(int i=0; i<nums.size(); i++) {
            freq[nums[i]]++;
        }

        return freq;
    }
};
int main() {
    Solution sol;
    string s = "DATA";
    unordered_map<char, int> freq = sol.freqCount(s);

    for(auto it: freq) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
    
}