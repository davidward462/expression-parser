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
        printf("push(%c)\n", input);
        push(sp, input);
        print_stack(sp);
        // verify the test by looking at the output alone
}

void test_pop(stack *sp, char expected)
{
        char actual = pop(sp);
        printf("pop() -> %c\n", actual);
        print_stack(sp);
        // test passes if the value popped is what we expected
        assert_is_true((expected == actual));
}

// Run unit tests for stack
void test_stack()
{
        stack s;
        stack *sp = &s;
        init_stack(sp);
        test_push(sp, 'a');
        test_push(sp, 'b');
        test_push(sp, 'c');
        test_pop(sp, 'b');
        test_pop(sp, 'a');
}

// Run unit tests with specific values
void run_tests()
{
        printf("running tests...\n");

        // call test functions here
        //test_infix_to_postfix("0", "0");

        //test_solve_postfix("0", 0.0);

        //test_solve_expression("0", 0.0);
        //test_solve_expression("1", 1.0);

        // run tests for stack
        test_stack();

        printf("complete.\n");
}

int main()
{
        run_tests();
        return 0;
}
