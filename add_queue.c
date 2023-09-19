#include "monty.h"
/**
 * e_queue - function prints the top
 * @top: head of stack
 * @number: number line
*/
void e_queue(stack_t **top, unsigned int number)
{
	(void)top;
	(void)number;
	car.change = 1;
}

/**
 * add_queue - function add node to the tail stack
 * @n: A new_value
 * @top: stack head
*/
void add_queue(stack_t **top, int n)
{
	stack_t *newNode, *total;

	total = *top;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
	}
	newNode->n = n;
	newNode->next = NULL;
	if (total)
	{
		while (total->next)
			total = total->next;
	}
	if (!total)
	{
		*top = newNode;
		newNode->prev = NULL;
	}
	else
	{
		total->next = newNode;
		newNode->prev = total;
	}
}
