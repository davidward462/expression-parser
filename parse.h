#ifndef PARSE_H
#define PARSE_H

char* infix_to_postfix(char* expr);

float solve_postfix(char* expr);

float solve_expression(char* expr);

void run(char* expr);

#endif