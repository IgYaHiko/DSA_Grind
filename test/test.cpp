#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstdlib>
using namespace std;
int main() {
    unordered_map<char, int> freq;
    string str = "abc";
    for(int i=0; i<str.size(); i++) {
        freq[str[i]]++;
    }
    for(auto x: freq) {
        cout << x.first << "->" <<  x.second << endl;
    }
    return 0;

}