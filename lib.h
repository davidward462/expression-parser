#include <stdbool.h>
#ifndef LIB_H
#define LIB_H

// Definition for stack which holds characters
typedef struct {
        // array of char which holds elements in stack
        char s[2];

        // index of the top of the stack
        int top;
} stack;

bool stack_is_full(stack *s);

int push(stack *s, char c);

char pop(stack *s);

char* infix_to_postfix(char* expr);

float solve_postfix(char* expr);

float solve_expression(char* expr);

void run();

#endif
