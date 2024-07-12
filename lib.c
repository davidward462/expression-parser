#include <stdio.h>
#include "lib.h"
#include <stdbool.h>

// Stack functions

// Initialize stack 
void init_stack(stack *sp)
{
        // -1 means the stack is empty
        sp->top = -1;
}

// Return true if stack is empty, false otherwise 
bool stack_is_empty(stack *sp)
{
        // if the value is -1, the stack is empty. Otherwise it is not empty.
        bool is_empty = (sp->top == -1);
        if (is_empty) {
                return true;
        }
        else {
                return false;
        }
}

// return true if stack is full, false otherwise
bool stack_is_full(stack *sp)
{
        // STACK_SIZE is the number of items that can be stored in the stack.
        // The value of top will always one below the number of items in the stack.
        if (sp->top == STACK_SIZE-1) {
                return true;
        }
        else {
                return false;
        }
}

void print_stack(stack *sp)
{
        int t = sp->top;
        // go through the array in reverse starting at 'top' value and print each
        if (!stack_is_empty(sp)) {
                for (int i = t; i >= 0; i--) {
                        printf("|%c|\n", sp->s[i]);
                }
        }
        else {
                printf("| |\n");
        }
}

void push(stack *sp, char c)
{
        // only push if stack is not full, otherwise do nothing
        if (!stack_is_full(sp)) {
                sp->top++;
                sp->s[sp->top] = c;
        }
        else {
                //printf("stack is full\n");
        }
}

// TODO: what should pop return from an empty stack?
char pop(stack *sp)
{
        if (!stack_is_empty(sp)) {
                // access array 's' at position of 'top'
                char c = sp->s[sp->top];
                sp->top--;
                return c;
        }
        else {
                // TODO: probably don't do this
                //printf("stack is empty\n");
                return STACK_EMPTY;
        }
}

// Return top character, but don't modify stack
char peek(stack *sp)
{
        if (!stack_is_empty(sp)) {
                // access array 's' at position of 'top'
                char c = sp->s[sp->top];
                return c;
        }
        else {
                // TODO: probably don't do this
                return STACK_EMPTY;
        }
}

// Queue functions

// Initialize queue
void init_queue(queue *qp)
{
        qp->front = -1;
        qp->rear = -1;
}

// Return true if queue is empty, false otherwise
// TODO: Test this
bool queue_is_empty(queue *qp)
{
        // if both front and back pointers are -1
        if ((qp->front == -1) && (qp->rear == -1)) {
                // the queue is empty
                return true;
        }
        else {
                return false;
        }
}

// Return true if queue if is full, false otherwise
bool queue_is_full(queue *qp)
{
        // TODO: add body
        return false;
}

void enqueue(queue *qp, char c)
{
        // TODO: add body
        if (!queue_is_full(qp)) {
                // if this is the first element added
                if(qp->front == -1) {
                        qp->front = 0;
                }

                // increment rear pointer to indicate next space
                qp->rear++;
                // add item to queue
                qp->q[qp->rear] = c;
        }
}

char dequeue(queue *qp)
{
        // TODO: add body
        char c = '\0';
        return c;
}

char peek_queue(queue *qp)
{
        // TODO: add body
        char c = '\0';
        return c;
}

// convert infix expression to postfix (reverse polish notation)
char* infix_to_postfix(char* expr)
{
        return "";
}

// calculate the result of a reverse polish notation expression
float solve_postfix(char* expr)
{
        return 0.0;
}

// Solve the infix expression passed as a string, and return the result as a float
float solve_expression(char* expr)
{
        // convert
        char* postfix = infix_to_postfix(expr);
        float result = solve_postfix(postfix);
        return result;
}

void run(char* expr)
{
        // solve expression and store result
        float result;
        result = solve_expression(expr);

        // print result
        printf("%s = %f\n", expr, result);

        return;
}
