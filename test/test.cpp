#include <iostream>
#include <unordered_map>
#include <vector>
#include <cstdlib>
using namespace std;
vector<int> find_distance(vector<int>& arr, int x) {
        vector<int> dis;
        for(int i=0; i<arr.size(); i++) {
            dis.push_back(abs(arr[i] - x));
        }
    return dis;
}
int main() {
    vector<int> nums = {1,2,3,4,5};
    vector<int> res =  find_distance(nums, 3);
    for(int i=0; i<res.size(); i++) {
        cout << "index: " << i << " distance ->" << res[i]<< endl;
    }
    return 0;

}