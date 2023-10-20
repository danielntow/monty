#ifndef MINE_H
#define MINE_H

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Data structures */
/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} my_stack_t;

/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(my_stack_t **stack, unsigned int line_number);
} instruction_t;


/* Function prototypes */
FILE *openMonty(char *file);
void readMontyFile(FILE *file, my_stack_t **stack);
void freeStack(my_stack_t *stack);
void pall(my_stack_t **stack, unsigned int line_number);
void push(my_stack_t **stack, int value, unsigned int line_number);
void pint(my_stack_t **stack, unsigned int line_number);
void interpOpcode(char *op, char *arg, my_stack_t **stack, unsigned int line);

#endif /* MINE_H */

