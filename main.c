#include "mine.h"

/**
* main - Entry point for Monty bytecode interpreter
* @argc: The number of command-line arguments.
* @argv: An array of strings containing the command-line arguments.
*
* Description: This function serves as the entry point for the Monty bytecode
* interpreter. It checks the number of command-line arguments, opens a Monty
* bytecode file, and then processes the file using other functions.
*
* Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure.
*/
int main(int argc, char *argv[])
{
FILE *file = openMonty(argv[1]);
my_stack_t *stack = NULL;

if (argc != 2)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}




readMontyFile(file, &stack);

fclose(file);
freeStack(stack);

return (EXIT_SUCCESS);
}

