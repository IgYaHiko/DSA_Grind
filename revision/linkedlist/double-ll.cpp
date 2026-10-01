#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;


    Node(int val) {
        this->data = val;
        next = prev = NULL;
    }
};

class DoublyLinkedlist {
public:
    Node* head;
    Node* tail;
    DoublyLinkedlist() {
        head = tail = NULL;
    }

    void push_front(int val) {
        Node * newNode = new Node(val);
        if(head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);
      
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

      int delete_beginning() {
        
        if (head == nullptr) {
            cout << "linkedlist is empty";   
            return -1;     
        }

        Node* curr = head;
        curr = head;
        head = head->next;
        // one node case 
        if(head != nullptr) {
            head->prev = nullptr;
        }

        tail->next = nullptr;
        int deleteNode = curr->data;
        delete curr;

        return deleteNode;
}
    void display() {
        Node* curr = head;
        while(curr != nullptr) {
            cout << curr->data << "->";
            curr = curr->next;
        }
    }
};

int main() {
    DoublyLinkedlist DLL;
    DLL.push_front(1);
    DLL.push_front(2);
    DLL.push_front(3);
    DLL.push_back(4);
    DLL.display();
    cout << "\n" << DLL.delete_beginning();
    
   
}