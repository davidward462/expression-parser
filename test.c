#include <stdio.h>
#include <stdbool.h>
#include "test.h"
#include "test_lib.h"

// Import user libraries here
#include "lib.h"

// Write unit tests here
void test_solve_expression(char* input, float expected)
{
        float actual = solve_expression(input);
        bool are_equal = expected == actual;
        assert_is_true(are_equal);

        if (!are_equal) {
                printf("expected: %f\nactual: %f\n", expected, actual);
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
