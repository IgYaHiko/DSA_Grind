#include<iostream>
#include"LL/ll.h"
using namespace std;
class Solution {
public:
    My_linkedList::Node* swapNode(My_linkedList::Node* head) {
        My_linkedList::Node* dummy = new My_linkedList::Node(-1);
        dummy->next = head;

        My_linkedList::Node* prev = dummy;

        while(prev->next != nullptr && prev->next->next != nullptr) {

            My_linkedList::Node* first = prev->next;
            My_linkedList::Node* second = first->next;

            //swap 
            first->next = second->next;
            second->next = first;

            prev->next = second;
            prev = first;
        }
    return dummy->next;
    }
};
int main() {

    Solution sol;
    My_linkedList ll;
    ll.insertAtEnd(1);
    ll.insertAtEnd(2);
    ll.insertAtEnd(3);
    ll.insertAtEnd(4);
    ll.insertAtEnd(5);
    ll.insertAtEnd(6);

    My_linkedList::Node* result = sol.swapNode(ll.head);

    while(result != nullptr) {
        cout << result->data << " -> ";
        result = result->next;
    }
    return 0;
}