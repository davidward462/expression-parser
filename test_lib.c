#include <stdio.h>
#include <stdbool.h>

#include "test_lib.h"

// Compare expected and actual values
bool compare_float(float expected, float actual)
{
        return (expected == actual);
}

void print_expected_actual_float(float expected, float actual)
{
        printf("\texpected: %.3f\n\tactual: %.3f\n", expected, actual);
}

// Test fails if argument is false.
void assert_is_true(bool a)
{
        if (!a) {
                printf("test failed\n");
        }
}

// Test fails if argument is true.
void assert_is_false(bool a)
{
        if (a) {
                printf("test failed\n");
        }
}
