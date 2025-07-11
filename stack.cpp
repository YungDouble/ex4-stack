#include <iostream>
#include "stack.h"

// Constructor initializes an empty stack
Stack::Stack() : top(nullptr) {}

// Add element to the top of the stack
bool Stack::push(const int data) {
    Node* newNode = new (std::nothrow) Node(data);
    if (!newNode) {
        return false;
    }
    newNode->next = top;
    top = newNode;
    return true;
}

// Remove and return the top element of the stack
int Stack::pop(bool &success) {
    if (isEmpty()) {
        success = false;
        return 0;
    }
    Node* temp = top;
    int val = temp->data;
    top = top->next;
    delete temp;
    success = true;
    return val;
    }

    // Returns true if the stack is empty
    bool Stack::isEmpty() const {
        return top == nullptr;
    }

    // Return the top element of the stack without removing it
    int Stack::peek(bool& success) const {
        if (isEmpty()) {
            success = false;
            return 0;
        }
        success = true;
        return top->data;
    }

    // Destructor to free the allocated memory
    Stack::~Stack() {
        while (!isEmpty()) {
            pop(); // Pop all elements to free memory
        }
    }
