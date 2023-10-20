#include "mine.h"

/**
* pint - Prints the top element of the stack
* @stack: A pointer to the head of the stack
* @line_number: The line number of the instruction
*/
void pint(my_stack_t **stack, unsigned int line_number)
{
if (stack && *stack)
	printf("%d\n", (*stack)->n);
else
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
}

