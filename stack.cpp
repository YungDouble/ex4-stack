#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int data) : data(data), next(nullptr) {}
};

class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    // Add element to the top of the stack
    void push(int data) {
        
        // Add definitions
    }

    // Remove and return the top element of the stack
    int pop() {
        // Add definition for pop
    }

    // Check if the stack is empty
    bool isEmpty() const {
        // Add definitions
    }

    // Return the top element of the stack without removing it
    int peek() const {
        // Add definitions
    }

    // Destructor to free the allocated memory
    ~Stack() {
        while (!isEmpty()) {
            pop(); // Pop all elements to free memory
        }
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top element is: " << stack.peek() << std::endl; // Should print 3

    while (!stack.isEmpty()) {
        std::cout << "Popping: " << stack.pop() << std::endl;
    }

    return 0;
}
