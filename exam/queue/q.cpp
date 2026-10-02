#include<iostream>
#include<vector>
using namespace std;


class Circular_q {
public:
    vector<int> q;
    int count;
    int capacity;
    int front;
    int rear;

    Circular_q(int size) {
        q.resize(size);
        this->count = 0;
        this->capacity = size;
        this->front = 0;
        this->rear = 0;

    }

    void enqueue(int val) {
        if(count == capacity) {
            cout << "\n --- the queue is full --- \n";
            return;
        }

        q[rear] = val;
        // update the rear
        rear = (rear+1) % capacity;
        count++;
    }

    void dequeue() {
        if(count == 0) {
            cout << " Queue is empty " << endl;
        }

        front = (front+1) % capacity;
        count --;
    }

    int getFront() {
        if(count == 0) {
            cout << "queue is empty" << endl;
        }

        cout << "front: " << q[front] << endl;
        return q[front];
    }

    int getRear() {
        if(count == 0) {
            cout << "queue is empty" << endl;
        }

        int index = (rear - 1 + capacity) % capacity;
        cout << "Rear: " << q[index] << endl;
        return q[index];
    }

    bool isEmpty() {
        if(count == 0) {
            cout << "Queue is Empty" << endl;
            return true;
        }
        return false;
    }

    bool isFull() {
        if(count == capacity) {
            cout << "Queue is Full" << endl;;
            return true;
        }
        return false;
    }

    void display() {
        if(count == 0) {
            cout << "Queue is empty" << endl;
        }
        int index = front;
        for(int i=0; i<count; i++) {
            cout << q[index] << " ";
            index = (index+1)%capacity;
        }
        cout << endl;
    }


};

int main() {
    Circular_q cq(5);
    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);
    cq.enqueue(90);
    cq.enqueue(50);
    

    cq.display();


    cq.getFront();

    cq.getRear();

    cq.isFull();
    cq.isEmpty();

    
}