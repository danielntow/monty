#include "mine.h"

/**
* add - Adds the top two elements of the stack
* @stack: A pointer to the head of the stack
* @line_number: The line number of the instruction
*/
void add(my_stack_t **stack, unsigned int line_number)
{
my_stack_t *top = *stack;
my_stack_t *second = top->next;

if (*stack == NULL || (*stack)->next == NULL)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}



second->n += top->n; /* Add the top element to the second element */
*stack = second; /* Update the stack pointer to the new second element */
free(top);           /* Free the old top element */
}

