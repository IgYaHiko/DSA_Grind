#include<iostream>
#include"LL/ll.h"
using namespace std;
class Solution {
public:
    My_linkedList::Node* mergeTwoList(My_linkedList::Node* list1, My_linkedList::Node* list2) {

        My_linkedList::Node* dummy = new My_linkedList::Node(-1);
        My_linkedList::Node* curr = dummy;
        My_linkedList::Node* i = list1;
        My_linkedList::Node* j = list2;

        while(i != nullptr && j != nullptr) {
            if(i->data < j->data) {
                curr->next = i;
                curr = curr->next;
                i = i->next;
            } else {
                curr->next = j;
                curr = curr->next;
                j = j->next;
            }
        }

        while (i != nullptr) {
            curr->next = i;
            curr = curr->next;
            i = i->next;

        }
        while (j != nullptr) {
            curr->next = j;
            curr = curr->next;
            j = j->next;
        }
    return dummy->next;
    }
};
int main() {
    Solution sol;
    My_linkedList ll1;
    My_linkedList ll2;

    // list1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);

    //list2;
    ll2.insert(4);
    ll2.insert(5);
    ll2.insert(9);

    My_linkedList::Node* result = sol.mergeTwoList(ll1.head, ll2.head);

    while(result != nullptr) {
        cout  << result->data << " -> ";
        result = result->next;
    } 
    cout << endl;
    return 0;


    


}