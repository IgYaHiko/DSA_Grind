#include<iostream>
#include<queue>
#include<vector>
#include <unordered_map>
using namespace std;
struct cmp {
    bool operator()(pair<int,string>& a, pair<int, string>& b) {
         if(a.first != b.first) {
            return a.first > b.first; // min heap behaviour
         }
        return  a.second < b.second; // max heap behaviour
         
    }
};
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        // taking a hashmap
        unordered_map<string,int> freq;
        // taking a heap;
        priority_queue<pair<int, string>, vector<pair<int, string>>, cmp> h;
        vector<string> res;
        // first taking the freq of all elements in vector
        for(int i=0; i<words.size(); i++) {
            freq[words[i]]++;
        }
        // heap opt
        for(auto x: freq) {
            if(h.size() < k) {
                h.push({x.second, x.first});
            } else if(x.second > h.top().first) {
                if(!h.empty()) {
                    h.pop();
                }
                h.push({x.second, x.first});
            } else if(x.second == h.top().first) {
                if(x.first < h.top().second) {
                    if(!h.empty()) {
                        h.pop();
                    }
                    h.push({x.second, x.first});
                }
            }
        }
        while(!h.empty()) {
            auto x = h.top();
            res.push_back(x.second);
            h.pop();
        }
        sort(res.begin(),res.end(),[&](string& a, string& b) {
            if(freq[a] != freq[b]) {
                return freq[a] > freq[b];
            }
            return freq[a] < freq[b];
        });
    return res;


    }
};


int main() {
    Solution sol;
    vector<string> words = {"the","day","is","sunny","the","the","the","sunny","is","is"};
    int k = 4;
    vector<string> ans = sol.topKFrequent(words,k);
    for(string x: ans) {
        cout << x << " ";
    }
    return 0;
}