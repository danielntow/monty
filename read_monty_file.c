#include "mine.h"

/**
 * readMontyFile - Reads and interprets Monty bytecode from a file
 * @file: A file pointer to the opened Monty bytecode file
 * @stack: A pointer to the head of the stack
 */
void readMontyFile(FILE *file, my_stack_t **stack)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;

	while ((read = getline(&line, &len, file) != -1))
	{
		char *opcode, *arg;

		line_number++;

		if (read == 0 || line[0] == '\n' || line[0] == '#')
		{
			continue; /* Skip empty lines and lines starting with # */
		}

		opcode = strtok(line, " \t\n");
		arg = strtok(NULL, " \t\n");

		if (opcode)
		{
			interpOpcode(opcode, arg, stack, line_number);
		}
	}

	if (line)
	{
		free(line);
	}
}
