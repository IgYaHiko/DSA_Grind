#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isSorted(vector<int>& arr, int i, int j) {
        if(i == arr.size()-2 && j == arr.size()-1) {
            return true;
        }

        if(arr[i] > arr[j]) {
            return false;
        }
        return isSorted(arr, i+1, j+1);
    }
    
};


int main() {
   Solution sol; 
   vector<int> num = {10,2,3,4,5,6};
   bool ans = sol.isSorted(num, 0, 1);
   cout << boolalpha << ans;
   return 0;
}