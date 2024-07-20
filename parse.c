#include <stdio.h>
#include <string.h>
#include "parse.h"
#include "lib.h"

// convert infix expression to postfix (reverse polish notation)
char* infix_to_postfix(char* expr)
{
        // Do the shunting-yard algorithm

        // Initialize variables
        stack s;
        queue q;
        stack *sp = &s;
        queue *qp = &q;

        return "";
}

// calculate the result of a reverse polish notation expression
float solve_postfix(char* expr)
{
        stack s;
        stack *sp = &s;
        init_stack(sp);
        char c;

        // loop through expression

        size_t length = strnlen(expr, MAX_STRING);
        printf("length: %zu\n", length);

        for (int i = 0; i < length; i++) {
                c = expr[i];
                push(sp, c);
                printf("%c", expr[i]);
        }
        print_stack(sp);
        printf("\n");
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