#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:

    bool palidrome(string &s) {
       int i = 0;
       int j = s.size()-1;
       while (i < j) {
            if(s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
       }
    return true;
       
    }
};
int main() {
    Solution sol;
    string s = "MADAM";
    cout <<  boolalpha << sol.palidrome(s);
    return 0;
}