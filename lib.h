#include <stdbool.h>
#ifndef LIB_H
#define LIB_H

#define STACK_SIZE 8
#define QUEUE_SIZE 2
#define STACK_EMPTY '\0'

// Definition for stack which holds characters
typedef struct {
        // array of char which holds elements in stack
        char s[STACK_SIZE];

        // index of the top of the stack
        int top;
} stack;

// Definition for queue which holds char
typedef struct {
        // array which holds the characters in the queue
        char q[QUEUE_SIZE];

        //indexes for front and rear of queue
        int front;
        int rear;
} queue;

// stack functions
void init_stack(stack *sp);

bool stack_is_empty(stack *sp);

bool stack_is_full(stack *sp);

void print_stack(stack *sp);

void push(stack *sp, char c);

char pop(stack *sp);

char peek(stack *sp);

// queue functions

void init_queue(queue *qp);

bool queue_is_empty(queue *qp);

bool queue_is_full(queue *qp);

void enqueue(queue *qp);

char dequeue(queue *qp);

char* infix_to_postfix(char* expr);

float solve_postfix(char* expr);

float solve_expression(char* expr);

void run(char* expr);

#endif
