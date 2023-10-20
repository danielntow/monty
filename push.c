/* push.c */
#include "mine.h"

/**
* push - Pushes an element onto the stack
* @stack: A pointer to the head of the stack
* @value: The value to push
* @line_number: The current line number
*/
void push(my_stack_t **stack, int value, unsigned int line_number)
{
my_stack_t *newNode = malloc(sizeof(my_stack_t));

(void)line_number;

if (!newNode)
{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

newNode->n = value;
newNode->prev = NULL;

if (!*stack)
{
	newNode->next = NULL;
	*stack = newNode;
}
else
{
	newNode->next = *stack;
	(*stack)->prev = newNode;
	*stack = newNode;
}
}

