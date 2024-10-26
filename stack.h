#ifndef STACK_H
#define STACK_H

class Stack {
    public:
    Stack();
    ~Stack();

    void push(int data);
    int pop();
    int peek();
    bool isEmpty();

    private:
};

#endif //STACK_H
