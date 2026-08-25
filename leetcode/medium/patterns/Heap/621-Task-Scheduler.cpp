#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // first making a hashmap to store the frequency of the elements 
        unordered_map<char,int> hashmap;
        // take another hashmap to store the possible place where next element should place 
        unordered_map<char,int> free;
        // taking a max paired heap, max behaviour for both the values so no need to create own cmp
        priority_queue<pair<int, char>, vector<pair<int,char>>> heap;
        int seat = 1;
        // firstly insert all the values in the hashmap;
        for(int i=0; i<tasks.size(); i++) {
            hashmap[tasks[i]]++;
            free[tasks[i]] = 1;
        }
        // push all the freq and char in the heap;
        for(auto x: hashmap) {
            heap.push({x.second, x.first});
        }

        // extracting the values from the heap
        while(!heap.empty()) {
            vector<pair<int,char>> pulled;
            while(!heap.empty()) {
                auto curr = heap.top();
                heap.pop();

                if(free[curr.second] <= seat) {
                    if(curr.first > 1) {
                        heap.push({curr.first-1, curr.second});
                    }
                    free[curr.second] = seat + n + 1;
                    break;
                } else {
                    pulled.push_back(curr);
                }
            }
            for(int i=0; i<pulled.size(); i++) {
                heap.push(pulled[i]);
            }
            seat++;
        }
    return seat -1;



    }
};

int main() {
    Solution sol;
    vector<char> tasks = {'A','A','A','B','B','B'};
    int n = 2;
    int ans = sol.leastInterval(tasks,n);
    cout<< ans;
    return 0;

}