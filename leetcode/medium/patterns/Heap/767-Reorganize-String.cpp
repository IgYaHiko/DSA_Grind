#include<iostream>
#include<string>
#include<queue>
#include<unordered_map>
using namespace std;
// create max heap using custom cmp
struct cmp {
    bool operator()(pair<int,char>& a, pair<int,char>& b) {
        if(a.first != b.first) {
            return a.first < b.first;
        }
        return a.second < b.second;
    }
};
class Solution {
public:
    string reorganizeString(string s) {
        // taking a hashmap to get the frequency of the char;
        unordered_map<char, int> hashmap;
        // taking a heap;
        priority_queue<pair<int,char>, vector<pair<int,char>>, cmp> heap;
        string res = "";
        int i = 0;
        // push the string in the hashmap, and will get the freqency of the char;
        for(int i=0; i<s.size(); i++) {
            hashmap[s[i]]++;
        }
        // push the pair of hashmap in the maxheap;
        for(auto x: hashmap) {
            heap.push({x.second, x.first});
        }

        // no extract the char from the heap to res string;
        while(!heap.empty()) {
            // first take the max pair pop it from the heap, and try to place is in the res string;
            auto curr = heap.top();
            heap.pop();

            if( i == 0 || res[i-1] != curr.second) {
                res.push_back(curr.second);
                i++;
                curr.first--;
                
                // also do one thing push the pair until it's curr.first > 0;
                if(curr.first > 0) {
                    heap.push(curr);
                }
            } else {
                // will get into else when we know the curr.second match, and the res string has som value;
                // so first we check that if the heap is empty then no value to put so return a empty string, 
                // what if the last pop() was the last pair exists in the heap;
                if(heap.empty()) {
                    return "";
                }
                // otherwise do the samething; did with if block;
                auto next = heap.top();
                heap.pop();

                res.push_back(next.second);
                i++;
                next.first--;
                if(next.first > 0) {
                    heap.push(next);
                }
                heap.push(curr);
            }
        }
    return res;

    }
};
int main() {
    Solution sol;
    string s = "aaabb";
    string ans = sol.reorganizeString(s);
    cout << ans;
    return 0;


}