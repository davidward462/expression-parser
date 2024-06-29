#include <stdio.h>
#include "lib.h"
#include <stdbool.h>

// constants
#define STACK_SIZE 128

// Stack which holds characters
struct stack {
        // array of char which holds elements in stack
        char s[STACK_SIZE];

        // index of the top of the stack
        int top;
};

// TODO: should the argument be an address to a stack struct?
bool stack_is_full(struct stack *s)
{
        return false;
}

// TODO: what should this return?
int push(struct stack *s, char c)
{
        return 0;
}

char pop(struct stack *s)
{
        char c = 'a';
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
