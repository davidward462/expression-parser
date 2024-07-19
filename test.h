#include "lib.h"
#ifndef TEST_H
#define TEST_H

// Write prototypes for test functions here
// e.g. void test_foo(int expected, int actual);

void test_infix_to_reverse_polish(char* input, char* expected);

void test_solve_reverse_polish(char* input, char* expected);

void test_solve_expression(char* input, float expected);

void test_stack_is_full(stack *sp, bool expected);

void test_push_pop(stack *s, char input, char expected);

void test_push(stack *s, char input);

void test_pop(stack *s, char expected);

void test_peek(stack *sp, char expected);

void test_queue_is_empty(queue *qp, bool expected);

void test_enqueue(queue *qp);

void repeat_enqueue(queue *qp, int count);

void test_stack();

void test_queue();

void run_tests();

#endif
