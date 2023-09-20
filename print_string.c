#include "monty.h"
/**
 * string_print - string in top of the stack.
 * @top: top of stack
 * @number: line
 * Return: no return
*/
void string_print(stack_t **top, unsigned int number)
{
	stack_t *t;
	(void)number;

	t = *top;
	while (t)
	{
		if (t->n > 127 || t->n <= 0)
		{
			break;
		}
		printf("%c", t->n);
		t = t->next;
	}
	printf("\n");
}
