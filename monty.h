#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct car_s - include variables -arguments, f_ile, line content
 * @argument: value of argument
 * @f_ile: monty file pointer
 * @C_ontent: content of line
 * @change: flag that change stack <-> queue
 * Description: struct that carries values through the program
 */
typedef struct car_s
{
	char *argument;
	FILE *f_ile;
	char *C_ontent;
	int change;
}  car_t;
extern car_t car;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void e_add(stack_t **top, unsigned int number);
void stack_free(stack_t *top);
void e_pall(stack_t **top, unsigned int number);
void e_push(stack_t **top, unsigned int number);
void add_node(stack_t **top, int i);
void add_queue(stack_t **top, int n);
void e_queue(stack_t **top, unsigned int number);
int main(int argcount, char *argvector[]);
int executeF(char *C_ontent, stack_t **stack, unsigned int number,
		FILE *f_ile);
void e_printChar(stack_t **top, unsigned int number);
void file_print(stack_t **top, unsigned int number);
void stack_pop(stack_t **top, unsigned int number);
#endif
