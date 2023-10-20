#include "mine.h"

/**
* openMonty - Opens a Monty bytecode file
* @file: Path to the Monty bytecode file
*
* Return: A file pointer to the opened file.
* Exit with EXIT_FAILURE on error.
*/
FILE *openMonty(char *file)
{
FILE *fp = fopen(file, "r");
if (!fp)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}
return (fp);
}


