#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,3,4,5,5,3,3,43};
    unordered_map<int,int> freq;
    for(int i=0; i<nums.size(); i++) {
        freq[nums[i]]++;
    }
    for(auto x: freq) {
        cout << x.first <<  "->" << x.second << endl;;
    }
    return 0;
}