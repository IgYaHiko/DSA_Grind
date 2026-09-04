#define MY_LL_H
#ifdef MY_LL_H

#include<iostream>
using namespace std;


class My_linkedList {
public:
    struct Node {
        int data;
        Node* next;
        
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
    };
    Node* head;
public: 
    My_linkedList() {
        head = nullptr;
    }

    void insert(int data) {
        Node* newNode = new Node(data);

        if(head == nullptr) {
            head = newNode;
            return;
        }

        // save the head in the current;
        Node* curr = head;
        while(curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;

    }

    void display() {
        Node* curr = head;

        while (curr != nullptr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
    }

    
};

#endif