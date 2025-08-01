#include<iostream>
using namespace std;

class Stack {
private:
    int top, arr[100];

public:
    Stack() : top(-1) {}

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == 99;
    }

    void push(int x) {
        if (!isFull()) arr[++top] = x;
    }

    int pop() {
        if (!isEmpty()) return arr[top--];
        return -1;
    }

    int peek() {
        return (isEmpty()) ? -1 : arr[top];
    }
    void display() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack from top to bottom: ";
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
};
int main() {
    Stack s;

    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);

    // Peek the top element
    cout << "Top element is: " << s.peek() << endl;

    // Pop elements
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    // Check if stack is empty
    if (s.isEmpty())
        cout << "Stack is empty" << endl;
    else
        cout << "Stack is not empty" << endl;

    // Final peek
    cout << "Top element is: " << s.peek() << endl;
    s.push(20);
    s.push(30);
     s.display();
    return 0;
}
