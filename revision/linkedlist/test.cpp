#include<iostream>
#include "LL/ll.h"

int main() {
    My_linkedList ll;

    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.deleteFromBegining();

    ll.display();
    return 0;
}