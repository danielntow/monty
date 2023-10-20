#include "mine.h"

/**
* pchar - Prints the char at the top of the stack
* @stack: A pointer to the head of the stack
* @line_number: The line number of the instruction
*/
void pchar(my_stack_t **stack, unsigned int line_number)
{
if (stack && *stack)
{
	int value = (*stack)->n;

	if (isascii(value))
		printf("%c\n", value);
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
else
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
	exit(EXIT_FAILURE);
}
}

