/* ******************************************
 * File:   stack.cpp
 * Author: Alex Katrompas
 * The implementation for a simple integer Stack class.
 * 
 * ******************************************/

// include this modules header and nothing else, no other directives
#include "stack.h"

Stack::Stack() {
    /* ****************************************
    Constructor

    @param na : na

    @return na : na

    @exception na : na 

    @note the 'this' designation is optional. use it where
    there is ambiguity or just to be complete and precise.
    here it is shown for demonstration purposes.
    *********************************************/
    this->top = -1;
}

Stack::~Stack() {
    /* ****************************************
    Destructor

    @note nothing to clean up, so this is blank
    *********************************************/
}

bool Stack::push(int i) {
    /* ****************************************
    Push an item to the top of the stack,
    if there is room

    @param (int) i : any integer

    @return (bool) : True/False
    *********************************************/
    bool pushed = false;
    if (top < STACKSIZE - 1) {
        stack[++top] = i;
        pushed = true;
    }
    return pushed;
}

int Stack::pop() {
    /* ****************************************
    Pop an item from the top of the stack,
    if there is one

    @param na : na

    @return (int) : top item on the stack
    
    @exception (int) : if underflow
    *********************************************/
    if (top < 0) {
        throw -1; // throw an int because we cannot return one
    } // no 'else' is needed, throw causes an immediate halt
    return stack[top--];
}

    // normally peek and pop should have identical function headers.
    // this is only different to demonstrate an alternate solution.

bool Stack::peek(int *ret) {
    /* ****************************************
    Peek an item from the top of the stack
    if there is one

    @param (int*) : integer pointer for int provided by the caller

    @return (bool) : True/False for success/failure to peek
    *********************************************/
    bool peeked = false;
    if (top > -1) {
        *ret = stack[top];
        peeked = true;
    }
    return peeked;
}

bool Stack::isEmpty() {
    /* ****************************************
    Check stack for empty state

    @param na : na

    @return (bool) : True/False for emmty / not-empty
    *********************************************/
    return top < 0;
}

