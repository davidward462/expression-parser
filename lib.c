#include <stdio.h>
#include "lib.h"

// Solve expression passed as a string, and return the result as a float
float solve_expression(char* expr)
{
        float result = 0.0;
        return result;
}

void run(char* expr)
{
        // display input
        //printf("input: %s\n", expr);

        // solve expression and store result
        float result;
        result = solve_expression(expr);

        // print result
        //printf("output: %f\n", result);
        printf("%s = %f\n", expr, result);

        return;
}
