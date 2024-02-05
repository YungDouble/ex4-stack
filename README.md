# Stack

## Introduction:

A stack is a fundamental data structure used in computer science to store and manage a collection of elements in a Last-In-First-Out (LIFO) manner. This means the last element added to the stack will be the first one to be removed. Stacks are analogous to a stack of plates; you can only add or remove the top plate, mimicking the push and pop operations in a stack data structure.

## Tasks
Create your own Stack Class with the below functions using pointers and linked list on the stack.cpp (noo vector or list module from C++ Standard Template is allowed):
- Push: Adds an element to the top of the stack.
- Pop: Removes the top element from the stack and returns it. This operation exposes the next element as the new top.
- Peek (or Top): Returns the top element of the stack without removing it, allowing a look at the value without modifying the stack.
- IsEmpty: Checks if the stack is empty. This is useful to avoid pop operations on an empty stack, which would be an error.

## Characteristics
- LIFO Principle: The last element pushed onto the stack will be the first one to be popped off.
- Dynamic Size: Most implementations of stacks grow as needed to accommodate new elements, although the underlying mechanism (e.g., an array or linked list) might have a fixed size or require resizing.
- Usage: Stacks are widely used in various computer science areas, including but not limited to, parsing expressions (e.g., in compilers), backtracking algorithms (e.g., navigating mazes), function call management in programming languages, and undo mechanisms in software applications.

## Implementation
Stacks can be implemented using arrays, linked lists, or even dynamic containers like vectors in C++. The choice of implementation affects the stack's performance characteristics, such as how efficiently it can grow or shrink and how it utilizes memory.

### Requirements:
The driver program for each programming project should begin with "header comments" containing:
```cplus
/**
Your name
Programming assignment number
A short description of the program
Course
The date
*/

/**
For example:
Programmer: TRUC HUYNH
Project number: 2
Project Desc: Quadratic Expression class
Course: COSC 2436 PF III Data Structures
Date:   01/12/2024
*/
```
**note:**
- Use a standard indentation convention in your code (see examples in textbook).
- Use meaningful variable names.
- **Do not use global variables.**
- **Your class methods should not contain any input or output operations. All input and output should be done in your driver.**

### Submission:
Project will automatically clone to your github account. Please clone to your work space and work on it. Make sure you push regularly to create good habit. Your code will automatically submit to my board when you push. I will grade by due date. Score will be release by end of semester.
