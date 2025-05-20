#include <iostream>
#include "stack.h"

// Constructor initializes an empty stack
Stack::Stack() : top(nullptr) {}

    // Add element to the top of the stack
    bool Stack::push(const int data) {
        bool success = false;
        Node* newNode = new (std::nothrow) Node(data);
        if (newNode) {
            newNode->next = top;    // Link the new node to current top
            top = newNode;          // Set new node as the top
            success = true;         // Indicate successful push operation
        }
        return success;
    }

    // Remove and return the top element of the stack
    int Stack::pop() {
        int poppedValue = -1;
        if (!isEmpty()) {
            Node* temp = top;
            poppedValue = top->data;
            top = top->next;
            delete temp;
        } else {
            std::cerr << "Stack underflow error: No elements to pop." << std::endl;
        }
        return poppedValue;
    }

    // Check if the stack is empty
    bool Stack::isEmpty() const {
        return top == nullptr;
    }

    // Return the top element of the stack without removing it
    int Stack::peek() const {
        int topValue = -1;
        if (!isEmpty()) {
            topValue = top->data;
        } else {
            std::cerr << "Stack underflow error: No elements to peek." << std::endl;
        }
        return topValue;
    }

    // Destructor to free the allocated memory
    Stack::~Stack() {
        while (!isEmpty()) {
            pop(); // Pop all elements to free memory
        }
    }
