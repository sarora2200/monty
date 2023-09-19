#include "monty.h"
/**
* stack_free - function frees a doubly linked list
* @top: stack head
*/
void stack_free(stack_t *top)
{
	stack_t *total;

	total = top;
	while (top)
	{
		total = top->next;
		free(top);
		top = total;
	}
}
