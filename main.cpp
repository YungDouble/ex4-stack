/**
* Programmer: Davos DeHoyos
 * Project number: 4
 * Project Desc: Stack class implementation using linked list
 * Course: COSC 2436 PF III Data Structures
 * Date:   10/22/2024
 */

#include "main.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void runManualTests(Stack &stack);
void runRandomizedTests(Stack &stack, int numOperations);

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Create a stack object
    Stack stack;

    // Run manual test cases
    runManualTests(stack);

    // Run randomized test with 50 operations
    runRandomizedTests(stack, 50);

    return 0;
}

void runManualTests(Stack &stack) {
    std::cout << "Running manual tests...\n";

    // Test Case 1: Push elements onto the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);
    std::cout << "Top element after 3 pushes (should be 3): " << stack.peek() << std::endl;

    // Test case 2: Pop elements from the stack
    std::cout << "Popping top element (should be 3): " << stack.pop() << std::endl;
    std::cout << "Top element after pop (should be 2): " << stack.peek() << std::endl;

    // Test case 3: Underflow test
    stack.pop();
    stack.pop();
    if (stack.isEmpty()) {
        std::cout << "Stack is empty after 3 pops." << std::endl;
    }
    if (stack.pop() == -1) {
        std::cout << "Error: Stack underflow handled correctly." << std::endl;
    }

    // Additional cases to fully test the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    std::cout << "Multiple operations: Pushing and popping several elements.\n";
    while (!stack.isEmpty()) {
        std::cout << "Top element (should decrease): " << stack.pop() << std::endl;
    }
} // end runManualTests function

void runRandomizedTests(Stack &stack, int numOperations) {
    std::cout << "\nRunning randomized tests with " << numOperations << " operations.\n";
    int successfulPushes = 0;
    int successfulPops = 0;
    int underflowsHandled = 0;

    for (int i = 0; i < numOperations; i++) {
        int operation = std::rand() % 3;

        if (operation == 0 || operation == 1) { // Push operation (2 out of 3 chance)
            int value = std::rand() % 1000;
            if (stack.push(value)) {
                successfulPushes++;
                std::cout << "Pushed: " << value << std::endl;
            } else {
                std::cout << "Push failed for value: " << value << std::endl;
            }
        } else { // Pop operation (1 out of 3 chance)
            int poppedValue = stack.pop();
            if (poppedValue != -1) {
                successfulPops++;
                std::cout << "Popped: " << poppedValue << std::endl;
            } else {
                underflowsHandled++;
                std::cout << "Error: Stack underflow encountered and handled." << std::endl;
            }
        }
    }

    // Final check of stack state after randomized operations
    std::cout << "\nRandomized Testing Summary:\n";
    std::cout << "Successful pushes: " << successfulPushes << std::endl;
    std::cout << "Successful pops: " << successfulPops << std::endl;
    std::cout << "Underflows handled: " << underflowsHandled << std::endl;
    std::cout << "Final Stack State: " << (stack.isEmpty() ? "Empty" : "Not Empty") << std::endl;
} // end runRandomizedTests function
