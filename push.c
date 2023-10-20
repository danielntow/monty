/* push.c */
#include "mine.h"
/**
* push - pushes an element onto the stack
* @stack: a pointer to the head of the stack
* @value: the integer value to push onto the stack
* @line_number: the line number where the push operation is called
*/
void push(my_stack_t **stack, int value, unsigned int line_number)
{
my_stack_t *new_node = malloc(sizeof(my_stack_t));
(void)line_number;

if (new_node == NULL)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

new_node->n = value;
new_node->prev = NULL;

if (*stack == NULL)
{
	new_node->next = NULL;
	*stack = new_node;
}
else
{
	new_node->next = *stack;
	(*stack)->prev = new_node;
	*stack = new_node;
}
}

