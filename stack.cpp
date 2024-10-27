#include <iostream>
#include "stack.h"

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
    // Constructor initializes an empty stack
    Stack() : top(nullptr) {}

    // Add element to the top of the stack
    bool push(int data) {
        Node* newNode = new Node(data);
        if (!newNode) {
            return false;   // Memory allocation failed
        }
        newNode->next = top;
        top = newNode;
        return true;
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