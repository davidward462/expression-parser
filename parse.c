#include <stdio.h>
#include "parse.h"

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