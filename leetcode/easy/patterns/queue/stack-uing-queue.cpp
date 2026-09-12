#include<iostream>
#include<stack>
using namespace std;

class My_queue {
public:
    stack<int> input, output;

    void push(int x) {
        input.push(x);
    }

    int pop() {
        peek();
        int val = output.top();
        output.pop();
        return val;

    }

    int peek() {
        if(output.empty()) {
            while(!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
    return output.top();
    }
    
    bool isEmpty() {
       return input.empty() && output.empty();
    }
};

int main() {
    My_queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "peek: " << q.peek() << endl;       // 10
    cout << "pop: "  << q.pop()  << endl;       // 10
    cout << "pop: "  << q.pop()  << endl;       // 20

    q.push(40);
    q.push(50);

    cout << "peek: " << q.peek() << endl;       // 30
    cout << "pop: "  << q.pop()  << endl;       // 30
    cout << "pop: "  << q.pop()  << endl;       // 40

    cout << "isEmpty: " << q.isEmpty() << endl; // 0 (false)

    cout << "pop: "  << q.pop()  << endl;       // 50
    cout << "isEmpty: " << q.isEmpty() << endl; // 1 (true)

    return 0;
}