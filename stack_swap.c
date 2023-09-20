#include "monty.h"
/**
 * stack_swap - swap elements of the stack.
 * @top: top
 * @number: line
 * Return: no return
*/
void stack_swap(stack_t **top, unsigned int number)
{
	stack_t *t;
	int length = 0, total;

	t = *top;
	while (t)
	{
		t = t->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack is short\n", number);
		fclose(car.f_ile);
		free(car.C_ontent);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	total = t->n;
	t->n = t->next->n;
	t->next->n = total;
}
