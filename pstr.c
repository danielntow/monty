#include "mine.h"

/**
* pstr - Prints the string starting at the top of the stack
* @stack: A pointer to the head of the stack
* @line_number: The line number of the instruction
*/
void pstr(my_stack_t **stack, unsigned int line_number)
{
my_stack_t *current = *stack;

(void)line_number;

while (current && current->n != 0 && isascii(current->n))
{
	printf("%c", current->n);
	current = current->next;
}

printf("\n");
}

