#include "monty.h"
/**
 * add_node - function add node to the head stack
 * @top: stack head
 * @n: A new_value
*/
void add_node(stack_t **top, int n)
{

	stack_t *newNode, *total;

	total = *top;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (total)
		total->prev = newNode;
	newNode->n = n;
	newNode->next = *top;
	newNode->prev = NULL;
	*top = newNode;
}
