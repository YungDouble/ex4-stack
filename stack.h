#ifndef STACK_H
#define STACK_H

class Stack {
    public:
    Stack();
    ~Stack();

    bool push(int data);
    int pop();
    int peek() const;
    bool isEmpty () const;

    private:
    // A node class to represent each element in the stack
    class Node {
        public:
            int data;
            Node* next;

            Node(int data) : data(data), next(nullptr) {}   // Constructor to initialize the node
    };

    Node* top;
};

#endif //STACK_H
