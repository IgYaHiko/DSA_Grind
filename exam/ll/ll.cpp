#include<iostream>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
    
};

class MyList {
public:
    Node* head;
    MyList() {
        head = nullptr;
    }

    // insert at the front 
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);

        if(head == nullptr) {
            head = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void insertAtEnding(int val) {
        Node* newNode = new Node(val);
        if(head == nullptr) {
            head = newNode;
            return;
        }

        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        } 
        curr->next = newNode;
        newNode->next = nullptr;

    }

    int deleteAtBegining() {
        if(head == nullptr) {
            return -1;
        } 
        Node* curr = head;
        head = head->next;
        int deleteElement = curr->val;
        delete curr;

        return deleteElement;

    }

    int deleteAtEnding() {
        if(head == nullptr) {
            return -1;
        }
        if (head->next == nullptr) {
            deleteAtBegining();
        } 
            Node* curr = head;
            while(curr->next->next != nullptr) {
                curr = curr->next;
            }
            int deletele = curr->next->val;
            curr->next = nullptr;
            return deletele;
    }

    bool search(int val) {
        int position = 0;

        Node* curr = head;
        while(curr != nullptr) {
            if(curr->val == val) {
                cout << "Yes found the value at: " << position << " value: " << curr->val << endl;
                return true;
            }

            curr = curr->next;
            position++;
        }

        cout << "Element " << val << " not found in the list" << endl;
        return false;
    }
    void displayLL() {
        Node* curr = head;
        while (curr != nullptr) {
            cout << curr->val << " -> ";
            curr = curr->next;
        }

        
    }


};

int main() {
    MyList LL;
    LL.insertAtEnding(1);
    LL.insertAtEnding(2);
    LL.insertAtEnding(3);
    LL.insertAtEnding(4);
    LL.insertAtEnding(5);
    LL.insertAtEnding(8);

    LL.displayLL();
    cout << endl;
    LL.search(8);

    
}