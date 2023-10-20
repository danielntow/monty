#include "mine.h"

/**
* rotr - Rotates the stack to the bottom
* @stack: A pointer to the head of the stack
* @line_number: The line number of the instruction
*/
void rotr(my_stack_t **stack, unsigned int line_number)
{
my_stack_t *current = *stack;

(void)line_number;

if (current && current->next)  /* Ensure there are at least two elements */
{
	while (current->next)
		current = current->next;

	current->prev->next = NULL;  /* Set the new top element's next to NULL */
	current->prev = NULL;       /* Set the old last element's prev to NULL */

	current->next = *stack;     /* Connect the old last element to the old top */
	(*stack)->prev = current;   /* Connect the old top to the old last element */

	*stack = current;           /* Update the head of the stack */
}
}

