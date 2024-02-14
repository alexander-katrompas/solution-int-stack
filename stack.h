/* ******************************************
 * File:   stack.h
 * Author: Alex Katrompas
 * The interface for a simple integer Stack class.
 * 
 * ******************************************/

#ifndef STACK_H
#define STACK_H

#define STACKSIZE 10

class Stack {

public:
    /**********************
     * Constructors/Destructor
     **********************/
    Stack();  // constructor
    ~Stack();  // destructor

    // Note: normally peek and pop should have identical in interfaces.
    // They are only different here to demonstrate alternate solutions.

    /**********************
     * Getters/Accessors
     **********************/
    bool isEmpty();
    bool peek(int*);

    /**********************
     * Setters/Mutators
     **********************/
    int pop();
    bool push(int);

private:
    
    //do not initialize here, use the constructor
    int top;
    int stack[STACKSIZE];
};

#endif //STACK_INTSTACK_H

