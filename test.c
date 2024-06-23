#include <stdio.h>
#include <stdbool.h>
#include "test.h"
#include "test_lib.h"

// Import user libraries here
#include "lib.h"

// TODO: test remaining functions

// Write unit tests here
void test_solve_expression(char* input, float expected)
{
        float actual = solve_expression(input);

        bool are_equal = compare_float(expected, actual);
        assert_is_true(are_equal);

        // Show details if test fails
        if (!are_equal) {
                print_expected_actual_float(expected, actual);
        }
}

// Run unit tests with specific values
void run_tests()
{
        printf("running tests...\n");

        // call test functions here
        test_solve_expression("0", 0.0);
        test_solve_expression("1", 1.0);

        printf("complete.\n");
}

int main()
{
        run_tests();
        return 0;
}
