/* pop.c */
#include "mine.h"

/**
* pop - Removes the top element of the stack
* @stack: A pointer to the head of the stack
* @line_number: The line number of the instruction
*/
void pop(my_stack_t **stack, unsigned int line_number)
{
if (stack && *stack)
{
	my_stack_t *temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}
else
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
}
}

