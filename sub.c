#include "mine.h"

/**
 * sub - Subtracts the top element from the second top element of the stack
 * @stack: A pointer to the head of the stack
 * @line_number: The line number of the instruction
 */
void sub(my_stack_t **stack, unsigned int line_number)
{
	my_stack_t *top = *stack;
	my_stack_t *second_top = top->next;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	second_top->n -= top->n;
	*stack = second_top;
	(*stack)->prev = NULL;

	free(top);
}
