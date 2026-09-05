#include<iostream>
#include "LL/ll.h"

int main() {
    My_linkedList ll;

    ll.insertBegin(10);
    ll.insertBegin(20);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertSpecificPosition(50,0);
    ll.insertAfterSpecficvalue(40,10);
    ll.search(40);
    ll.display();
    return 0;
}