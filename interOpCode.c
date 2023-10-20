#include "mine.h"

/**
* interpOpcode - Interpret and execute Monty bytecode opcode
* @op: The opcode to interpret
* @arg: The argument (if any) for the opcode
* @stack: A pointer to the head of the stack
* @line: The current line number
*/
void interpOpcode(char *op, char *arg, my_stack_t **stack, unsigned int line)
{
if (strcmp(op, "push") == 0)
{
	if (arg)
		push(stack, atoi(arg), line);
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line);
		exit(EXIT_FAILURE);
	}
}
else if (strcmp(op, "pall") == 0)
	pall(stack, line);
else if (strcmp(op, "pint") == 0)
	pint(stack, line);
else
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line, op);
	exit(EXIT_FAILURE);
}
}

