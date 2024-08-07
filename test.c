#include <stdio.h>
#include <stdbool.h>
#include "test.h"
#include "test_lib.h"

// Import user libraries here
#include "lib.h"
#include "parse.h"

void test_infix_to_postfix(char* input, char* expected)
{
        char* actual = infix_to_postfix(input);
        // TODO: need to be able to compare strings
        assert_is_true(false);
}

void test_solve_postfix(char* input, float expected)
{
        float actual = solve_postfix(input);
        assert_is_true((expected == actual));
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

// Test stack
void test_stack_is_full(stack *sp, bool expected)
{
        bool actual = stack_is_full(sp);
        assert_is_true((expected == actual));
}

void test_stack_is_empty(stack *sp, bool expected)
{
        bool actual = stack_is_empty(sp);
        assert_is_true((expected == actual));
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

void test_peek(stack *sp, char expected)
{
        char actual = peek(sp);
        printf("peek() -> %c\n", actual);
        assert_is_true((expected == actual));
}

// Run unit tests for stack
void test_stack()
{
        stack s;
        stack *sp = &s;
        init_stack(sp);
        test_stack_is_full(sp, false);
        test_stack_is_empty(sp, true);
        push(sp, 'c');
        test_stack_is_empty(sp, false);
        for (int i = 0; i < 20; i++) {
                push(sp, 'a');
        }
        test_stack_is_full(sp, true);
        for(int i = 0; i < 30; i++) {
                pop(sp);
        }
        test_stack_is_empty(sp, true);
}

// Test queue

void test_queue_is_empty(queue *qp, bool expected)
{
        bool actual = queue_is_empty(qp);
        assert_is_true((expected == actual));
}

void test_queue_is_full(queue *qp, bool expected)
{
        bool actual = queue_is_full(qp);
        assert_is_true((expected == actual));
}

void test_dequeue(queue *qp, char expected)
{
        char actual = dequeue(qp);
        assert_is_true((expected == actual));
}

void test_peek_queue(queue *qp, char expected)
{
        char actual = peek_queue(qp);
        assert_is_true((expected == actual));
}

void repeat_enqueue(queue *qp, char c, int count)
{
        for (int i = 0; i < count; i++) {
                enqueue(qp, c);
        }
}

void repeat_dequeue(queue *qp, int count)
{
        char c;
        for (int i = 0; i < count; i++) {
                c = dequeue(qp);
        }
}

// Run tests for queue
void test_queue()
{
        queue q;
        queue *qp = &q;
        init_queue(qp);
        test_queue_is_empty(qp, true);
        test_dequeue(qp, '\0');
        repeat_enqueue(qp, 'a', 4);
        repeat_enqueue(qp, 'b', 5);
        test_queue_is_full(qp, true);
        repeat_dequeue(qp, 37);
        test_queue_is_empty(qp, true);
        test_dequeue(qp, '\0');
}

// Tests for converting infix notation to postfix
void infix_to_postfix_test_cases()
{
        test_infix_to_postfix("0", "0");
}

void test_parse()
{
        test_solve_postfix("0", 0.0);
        test_solve_postfix("3 5 +", 8.0);
        test_solve_postfix("6 5 -", 1.0);
        test_solve_postfix("2 5 + 3 *", 21.0);
        test_solve_postfix("10.0 9 -", 1.0);
}

// Run unit tests with specific values
void run_tests()
{
        printf("running tests...\n");

        // call test functions here

        test_parse();

        //test_solve_expression("0", 0.0);
        //test_solve_expression("1", 1.0);

        // run tests for stack
        test_stack();

        // run tests for queue
        test_queue();

        // run tests for infix to postfix conversion
        //infix_to_postfix_test_cases();

        printf("complete.\n");
}

int main()
{
        run_tests();
        return 0;
}
