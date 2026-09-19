#include<iostream>
#include"LL/ll.h"
using namespace std;

class Solution {
public:
    My_linkedList::Node* insertion_list(My_linkedList::Node* head) {
        My_linkedList::Node* dummy = new My_linkedList::Node(-1);
        My_linkedList:: Node* curr = head;

        while(curr != nullptr) {
            My_linkedList::Node* prev = dummy;
            My_linkedList::Node* c = prev->next;

            while( c != nullptr && c->data <= curr->data) {
                prev = prev->next;
                c = c ->next;
            }
            My_linkedList::Node* next = curr->next;
            prev->next = curr;
            curr->next = c;
            curr = next;
        }
    return dummy->next;
    }
};

int main() {
    Solution sol;
    My_linkedList ll;

    ll.insertAtEnd(2);
    ll.insertAtEnd(1);
    ll.insertAtEnd(9);
    ll.insertAtEnd(5);
    ll.insertAtEnd(3);
    ll.insertAtEnd(0);

    My_linkedList::Node* res = sol.insertion_list(ll.head);

    while(res != nullptr) {
        cout << res->data << " -> ";
        res = res->next;
    }
    return 0;



}