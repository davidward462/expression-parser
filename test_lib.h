#ifndef TEST_LIB_H
#define TEST_LIB_H

#include <stdbool.h>

void print_expected_actual_float(float expected, float actual);

void print_expected_actual_char(char expected, char actual);

bool compare_float(float expected, float actual);

void assert_is_true(bool a);

void assert_is_false(bool a);

#endif
