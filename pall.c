#include "mine.h"

/**
* pall - Prints all the values on the stack
* @stack: A pointer to the head of the stack
* @line_number: The line number of the instruction
*/
void pall(my_stack_t **stack, unsigned int line_number)
{
my_stack_t *current = *stack;

(void)line_number;

while (current)
{
	printf("%d\n", current->n);
	current = current->next;
}
}


