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
        if (qp->rear == QUEUE_SIZE-1) {
                return true;
        }
        else {
                return false;
        }
}

void print_queue(queue *qp)
{
        // get indexes for front and rear of queue
        int f = qp->front;
        int r = qp->rear;

        if (!queue_is_empty(qp)) {
                // go through the array starting at 'front' value and print each until 'rear'
                for (int i = f; i <= r; i++) {
                        printf("%c ", qp->q[i]);
                }
                printf("\n");
        }
        else {
                printf("_ \n");
        }
}

void enqueue(queue *qp, char c)
{
        if (!queue_is_full(qp)) {
                // if this is the first elemet adde
                if(qp->front == -1) {
                        qp->front = 0;
                }

                // increment rear pointer to indicate next space
                qp->rear++;
                // add item to queue
                qp->q[qp->rear] = c;
        }
}

// Dequeue a char from the queue and return it
char dequeue(queue *qp)
{
        char c = '\0';
        int f = qp->front;
        int r = qp->rear;

        // if queue not empty
        if (!queue_is_empty(qp)) {

                // get the front item in the queue
                c = qp->q[f];

                // shift items
                for (int i = 0; i < r; i++) {
                         char next = qp->q[i+1];
                         qp->q[i] = next;
                }

                if (r == 0) {
                        // there had been only one element in the queue
                        qp->front = -1;
                }

                // decrement rear index
                qp->rear--;
        }
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
        // Do the shunting-yard algorithm
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
