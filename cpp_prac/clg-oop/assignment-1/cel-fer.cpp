#include <iostream>
using namespace std;
class Solution {
public:
    double celsiusToFahrenheit(double celsius) {
        return (celsius * 9.0 / 5.0) + 32;
    }
};
int main() {
    cout << "Enter a cel: ";
    double cel;
    cin >> cel;
    Solution sol;
    double ans = sol.celsiusToFahrenheit(cel);
    cout << "ans: " << ans;
    return 0;
}