#include "mine.h"

/**
* rotl - Rotates the stack to the top.
* @stack: A pointer to the head of the stack
* @line: The current line number
*/
void rotl(my_stack_t **stack, unsigned int line)
{
(void)line; /* Unused parameter, suppress compiler warning */

if (stack && *stack && (*stack)->next)
{
	my_stack_t *new_top = *stack;
	my_stack_t *current = *stack;

	while (current->next)
		current = current->next;

	*stack = new_top->next;
	new_top->next = NULL;
	new_top->prev = current;
	current->next = new_top;
}
/* Do nothing if the stack is empty or contains only one element */
}

