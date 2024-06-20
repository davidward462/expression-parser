#include <stdio.h>
#include <stdbool.h>

#include "test_lib.h"

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
