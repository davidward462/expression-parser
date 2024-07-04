#include <stdio.h>
#include "lib.h"
#include <stdbool.h>

void init_stack(stack *sp)
{
        // -1 means the stack is empty
        sp->top = -1;
}

void print_stack(stack *sp)
{
        int t = sp->top;
        // go through the array in reverse starting at 'top' value and print each
        for (int i = t; i >= 0; i--) {
                printf("%c\n", sp->s[i]);
        }
}

bool stack_is_empty(stack *sp)
{
        // if the value is -1, the stack is empty. Otherwise it is not empty.
        bool is_empty = (sp->top == -1);
        if (is_empty) {
                // print for testing only
                printf("stack is empty\n");
                return true;
        }
        else {
                return false;
        }
}

// return true if stack is full, false otherwise
bool stack_is_full(stack *s)
{
        // STACK_SIZE is the number of items that can be stored in the stack.
        // The value of top will always one below the number of items in the stack.
        if (s->top == STACK_SIZE-1) {
                // print for testing only
                printf("stack is full\n");
                return true;
        }
        else {
                return false;
        }
}

void push(stack *sp, char c)
{
        // only push if stack is not full, otherwise do nothing
        if (!stack_is_full(sp)) {
                sp->top++;
                sp->s[sp->top] = c;
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
                return '\0';
        }
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
