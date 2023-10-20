#include "mine.h"

/**
 * freeStack - Frees a stack.
 * @stack: A pointer to the head of the stack.
 */
void freeStack(my_stack_t *stack)
{
	my_stack_t *temp;

	while (stack != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
}
