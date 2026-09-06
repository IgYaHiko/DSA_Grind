#include<iostream>
#include"LL/ll.h"
using namespace std;
class Solution {
public:
    My_linkedList::Node* removeDup(My_linkedList::Node* head) {
        My_linkedList::Node* curr = head;
        while(curr != nullptr && curr->next != nullptr) {
            if(curr->data == curr->next->data) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }
    return head;
    }
};
int main() {
    Solution sol;
    My_linkedList ll;
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(2);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    ll.insertAtEnd(5);

    My_linkedList::Node* res = sol.removeDup(ll.head);

    while (res != nullptr && res->next != nullptr)  
    {
        cout << res->data << " -> ";
        res = res->next;
    }
    return 0;
    
}