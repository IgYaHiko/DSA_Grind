#include<iostream>
#include"LL/ll.h"
using namespace std;


class Solution {
public:
    My_linkedList::Node* reverseTwo(My_linkedList::Node* head, int left, int right) {
        My_linkedList::Node* dummy = new My_linkedList::Node(-1);
        dummy->next = head;

        My_linkedList::Node* leftPre = dummy;
        My_linkedList::Node* temp = head;

        int position = 1;

        while(position < left) {
            leftPre = temp;
            temp = temp->next;
            position++;
        }

        My_linkedList::Node* curr = temp;
        My_linkedList::Node* prev = nullptr;
        int times = (right - left) + 1;

        while(times--) {
            My_linkedList::Node* next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }

        temp->next = curr;
        leftPre->next = prev;

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

    int left = 2;
    int right = 4;
    My_linkedList::Node* res = sol.reverseTwo(ll.head,left,right);

    while(res != nullptr) {
        cout << res->data << " -> ";
        res = res->next;
    } 
    return 0;


}