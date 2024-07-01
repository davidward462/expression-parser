#include <stdio.h>
#include <stdbool.h>
#include "test.h"
#include "test_lib.h"

// Import user libraries here
#include "lib.h"

void test_infix_to_postfix(char* input, char* expected)
{
        char* actual = infix_to_postfix(input);
        assert_is_true(false);
}

void test_solve_postfix(char* input, float expected)
{
        float actual = solve_postfix(input);
        assert_is_true(false);
}

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

void test_stack_is_full(stack *sp, bool expected)
{
        bool is_full = stack_is_full(sp);
        assert_is_true(is_full);
}

void test_push_pop(stack *sp, char input, char expected)
{
        push(sp, input);
        char actual = pop(sp);
        bool are_equal = (expected == actual);

        assert_is_true(are_equal);

        // Show details if test fails
        if (!are_equal) {
                print_expected_actual_char(expected, actual);
        }
}

void test_push(stack *sp, char input)
{
        assert_is_true(false);
}

void test_pop(stack *sp, char expected)
{
        assert_is_true(false);
}

// Run unit tests for stack
void test_stack()
{
        stack s = {{}, 0};
        stack *sp = &s;
        test_push_pop(sp, 'a', 'a');
        test_stack_is_full(sp, false);
}

// Run unit tests with specific values
void run_tests()
{
        printf("running tests...\n");

        // call test functions here
        test_infix_to_postfix("0", "0");

        test_solve_postfix("0", 0.0);

        test_solve_expression("0", 0.0);
        test_solve_expression("1", 1.0);

        // run tests for stack
        test_stack();

        printf("complete.\n");
}

int main()
{
        run_tests();
        return 0;
}
