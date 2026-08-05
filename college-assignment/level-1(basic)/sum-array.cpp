#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int>& nums) {
    int total = 0;

    for (int i = 0; i < nums.size(); i++) {
        total += nums[i];
    }

    return total;
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = sum(nums);

    cout << "Sum of the array: " << ans << endl;

    return 0;
}