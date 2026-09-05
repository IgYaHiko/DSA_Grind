#include<iostream>
#include"LL/ll.h"
using namespace std;

class Solution {
public:
    My_linkedList::Node* cycLLII(My_linkedList::Node* head) {
        My_linkedList::Node* slow = head;
        My_linkedList::Node* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                slow = head;

                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
    return nullptr;
    }
};

int main() {
    Solution sol;
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

    My_linkedList::Node* result = sol.cycLLII(ll.head);
    
    if(result != nullptr) {
        cout << "Cycle starts at node: " << result->data << endl;
    } else {
        cout << "no cycle found" << endl;
    }

    return 0;

}