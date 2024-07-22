#include <stdio.h>
#include <string.h>
#include "parse.h"
#include "lib.h"

// Break input expression string into tokens
// TODO: Determine argument and return value
void tokenize()
{

}

// convert infix expression to postfix (reverse polish notation)
char* infix_to_postfix(char* expr)
{
        return "";
}

// calculate the result of a reverse polish notation expression
float solve_postfix(char* expr)
{
        size_t length = strnlen(expr, MAX_STRING);
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
