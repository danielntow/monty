#include "mine.h"

/**
* div_func - Divides the second top element by the top element of the stack
* @stack: A pointer to the head of the stack
* @line_number: The line number of the instruction
*/
void div_func(my_stack_t **stack, unsigned int line_number)
{
my_stack_t *second_top = (*stack)->next;
int top_value = (*stack)->n;

if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}


if (top_value == 0)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	exit(EXIT_FAILURE);
}


second_top->n /= top_value;

pop(stack, line_number);
}


