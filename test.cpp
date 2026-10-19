#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> res = {{3},{9,20},{15,7}};
    int i = 0;
    int j = res.size()-1;
    while(i < j) {
        vector<int> temp = res[i];
        res[i] = res[j];
        res[j] = temp;
        i++;
        j--;
    }

    for(int i=0; i<res.size(); i++) {
        for(int j=0; j<res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;


}