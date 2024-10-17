#include <iostream>
using namespace std;

// Template definition for a generic stack
template <typename T>
class Stack {
private:
    T arr[5];  // Fixed-size array for demonstration
    int top;

public:
    // Constructor to initialize the stack
    Stack() : top(-1) {}

    // Push element onto the stack
    void push(T value) {
        if (top == 4) {
            cout << "Stack is full!" << endl;
        } else {
            arr[++top] = value;
            cout << "Pushed: " << value << endl;
        }
    }

    // Pop element from the stack
    void pop() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Popped: " << arr[top--] << endl;
        }
    }

    // Display the top element of the stack
    void peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }
};

int main() {
    // Create a stack of integers
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.peek();
    intStack.pop();
    intStack.peek();

    // Create a stack of strings
    Stack<string> stringStack;
    stringStack.push("Apple");
    stringStack.push("Banana");
    stringStack.push("Cherry");
    stringStack.peek();
    stringStack.pop();
    stringStack.peek();

    return 0;
}
