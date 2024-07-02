#include <stdio.h>
#include "lib.h"
#include <stdbool.h>

// TODO: should the argument be an address to a stack struct?
bool stack_is_full(stack *s)
{
        int index = s->top;
        bool is_full = false;

        if (index == STACK_SIZE) {
                is_full = true;
        }

        return is_full;
}

// TODO: what should this return?
int push(stack *sp, char c)
{
        sp->s[sp->top] = c;
        return 0;
}

char pop(stack *sp)
{
        char c = sp->s[sp->top];
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
