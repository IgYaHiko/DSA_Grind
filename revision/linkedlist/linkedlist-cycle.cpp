#include<iostream>
#include"LL/ll.h"
using namespace std;
class Solution {
public: 
    bool cycleLL(My_linkedList::Node* head) {
        My_linkedList::Node* slow = head;
        My_linkedList::Node* fast = head;

        while(fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    My_linkedList ll;

    ll.insertAtEnd(3);
    ll.insertAtEnd(2);
    ll.insertAtEnd(0);
    ll.insertAtEnd(-4);

    My_linkedList::Node* tail = ll.head;

    while (tail->next != nullptr) {
        tail = tail->next;
    }
    tail->next = ll.head->next;

    Solution sol;
    bool res = sol.cycleLL(ll.head);

    cout << boolalpha << res;

    return 0;




}