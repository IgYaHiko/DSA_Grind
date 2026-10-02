#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool securePassword(string& s) {

        int n = s.size();

        if (n < 10) {
            return false;
        }

        bool hasLower = false;
        bool hasUpperInside = false;
        bool hasDigitInside = false;
        bool hasSpecialInside = false;

        for (int i = 0; i < n; i++) {

            // Lowercase can be anywhere
            if (s[i] >= 'a' && s[i] <= 'z') {
                hasLower = true;
            }

            // These three must be strictly inside
            if (i > 0 && i < n - 1) {

                if (s[i] >= 'A' && s[i] <= 'Z') {
                    hasUpperInside = true;
                }
                else if (s[i] >= '0' && s[i] <= '9') {
                    hasDigitInside = true;
                }
                else if (s[i] == '@' ||
                         s[i] == '#' ||
                         s[i] == '%' ||
                         s[i] == '&' ||
                         s[i] == '?') {
                    hasSpecialInside = true;
                }
            }
        }

        return hasLower &&
               hasUpperInside &&
               hasDigitInside &&
               hasSpecialInside;
    }
};

int main() {

    Solution sol;

    int T;
    cin >> T;

    while (T--) {

        string s;
        cin >> s;

        if (sol.securePassword(s)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}