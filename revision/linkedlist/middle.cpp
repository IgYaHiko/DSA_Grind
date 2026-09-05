#include<iostream>
#include"LL/ll.h"
using namespace std;

class Solution {
public:
    My_linkedList::Node* middleLL(My_linkedList::Node* head) {
        My_linkedList::Node* slow = head;
        My_linkedList::Node* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

int main() {
    Solution sol;
    My_linkedList ll;

    ll.insert(10);
    ll.insert(20);
    ll.insert(30);
    ll.insert(40);
    ll.insert(50);

    My_linkedList::Node* res = sol.middleLL(ll.head);

    if(res != nullptr) {
        cout << "middle of ll: " << res->data << endl;
    } else {
        cout << "no cycle" << endl;
    }
    return 0;
     
}