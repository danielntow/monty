#include "mine.h"
#include <stdio.h>

/**
* mod - mod operations
* @stack: A pointer to the head of the stack
* @line_number: The current line number
*/
void mod(my_stack_t **stack, unsigned int line_number)
{

my_stack_t *top = *stack;
*stack = top->next;

if (!stack || !*stack || !(*stack)->next)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}

if (top->n == 0)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	exit(EXIT_FAILURE);
}

(*stack)->n %= top->n;
free(top);
}

