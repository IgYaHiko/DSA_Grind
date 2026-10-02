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

    int deleteFromEnd() {
        if(head == nullptr) {
            cout << "Linkedlist is empty";
            return -1;
        }

        Node* curr = tail;
        int delelement = curr->data;
        if(head == tail) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;

           
        }
        delete curr;
        return delelement;

    }

    void insertionAfterSpecific(int val, int position) {
        Node* newNode = new Node(val);
        
        if(position < 0) {
            cout << "Wrong position, should be a  zero element or more than" << endl;
            return;
        }
        if(position == 0) {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            return;
        }

        Node* curr = head;
        int curr_posi = 0;

        while(curr != nullptr && curr_posi < position) {
            curr = curr->next;
            curr_posi++;
        }

        if(curr == nullptr) {
            cout << "Position " << position << " out of range. Insertion failed." << endl;
            delete newNode;
            return;
        }
        Node* nextNode = curr->next;
        
        newNode->prev = curr;
        newNode->next = nextNode;

        curr->next = newNode;

        if(nextNode != nullptr) {
            nextNode->prev = newNode;
        }

    }

    bool searchAnElement(int search_val) {
        Node* curr = head;
        int count = 0;
       
        while(curr != nullptr) {
            if(curr->data == search_val) {
              
                cout << "Found the value at: " << count << " value is: " << curr->data << endl; 
                return true;
            }
            curr = curr->next;
            count++; 
        }
    cout << "Element " << search_val << " not found in the list" << endl;
    return false;

    }
    void display() {
        Node* curr = head;
        while(curr != nullptr) {
            cout << curr->data << "->";
            curr = curr->next;
        }
        cout << "\n";
    }
};

int main() {
    DoublyLinkedlist DLL;
    DLL.push_front(1);
    DLL.push_front(3);
    DLL.push_front(2);
    DLL.push_front(40);
    DLL.push_front(3);
    DLL.push_back(4);
    DLL.display();

    DLL.insertionAfterSpecific(10,0);
    
    cout << "\n after insertion \n" << endl;

    DLL.display();


   
}