#include "monty.h"
/**
 * e_pall - function prints the stack
 * @top: head of stack
 * @number: number used
*/
void e_pall(stack_t **top, unsigned int number)
{
	stack_t *t;
	(void)number;

	t = *top;
	if (t == NULL)
		return;
	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}
