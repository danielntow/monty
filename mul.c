#include "mine.h"

/**
* mul - Multiplies the second top element of the stack by the top element
* @stack: A pointer to the head of the stack
* @line_number: The current line number
*/
void mul(my_stack_t **stack, unsigned int line_number)
{
my_stack_t *top = *stack;
*stack = top->next;

if (!stack || !*stack || !(*stack)->next)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

(*stack)->n *= top->n;
free(top);
}

