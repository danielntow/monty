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
else if (strcmp(op, "pop") == 0)
	pop(stack, line);
else if (strcmp(op, "swap") == 0)
	swap(stack, line);
else if (strcmp(op, "add") == 0)
	add(stack, line);
else if (strcmp(op, "sub") == 0)
	sub(stack, line);
else if (strcmp(op, "div") == 0)
	div_func(stack, line);
else if (strcmp(op, "mul") == 0)
	mul(stack, line);
else if (strcmp(op, "mod") == 0)
	mod(stack, line);
else if (strcmp(op, "nop") == 0)
{
	/* "nop" does nothing, so we simply skip it */
}
else
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line, op);
	exit(EXIT_FAILURE);
}
}

