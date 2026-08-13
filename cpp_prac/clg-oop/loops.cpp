#include <iostream>
using namespace std;

int main() {
    vector<int> nums = {1,3,5,6,7,8,8};
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    int j = 0;
    while (j < nums.size()) {
        cout << nums[j] << " ";
        j ++;
    }
    cout << endl;
    int k = 0;
    do {
        cout << nums[k] << " ";
        k++;
    } while(k < nums.size());
    return 0;
}