#ifndef TEST_H
#define TEST_H

// Write prototypes for test functions here
// e.g. void test_foo(int expected, int actual);

void test_infix_to_reverse_polish(char* input, char* expected);

void test_solve_reverse_polish(char* input, char* expected);

void test_solve_expression(char* input, float expected);

void run_tests();

#endif
