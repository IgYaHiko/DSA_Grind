#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    void func(string &s, int i, int &j,char c, int n) {
        if(i == n) {
            return;
        }

        if(s[i] != c) {
            s[j] = s[i];
            j++;
        }
        func(s,i+1, j, c, n);
    }

    void removeCharacter(string &s, char c) {
        int i = 0;
        int j = 0;
        func(s,i,j,c,s.size());
        s.resize(j);
    }
};
int main() {
    Solution sol;
    string s = "geeksforgeeks";
    char c = 'g';
    sol.removeCharacter(s,c);
    cout << "Ans: " << s;
    return 0;


}