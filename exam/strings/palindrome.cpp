#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string reverseString(string& s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    return s;
        
    }
    bool palidrome(string &s) {
        string ori = s;
        string rev = reverseString(s);

        if(ori == rev) {
            return true;
        }
    return false;

       
    }
};
int main() {
    Solution sol;
    string s = "DATA";
    cout <<  boolalpha << sol.palidrome(s);
    return 0;
}