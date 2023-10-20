/* swap.c */
#include "mine.h"

/**
* swap - Swaps the top two elements of the stack
* @stack: A pointer to the head of the stack
* @line_number: The line number of the instruction
*/
void swap(my_stack_t **stack, unsigned int line_number)
{
	if (stack && *stack && (*stack)->next)
	{
		my_stack_t *temp = *stack;
		*stack = (*stack)->next;
		temp->next = (*stack)->next;
		temp->prev = *stack;
		(*stack)->next = temp;
		if (temp->next)
			temp->next->prev = temp;
	}
	else
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
}

