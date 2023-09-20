#include "monty.h"
/**
 * multiply - multiply two elements of the stack.
 * @top: top stack
 * @number: line
 * Return: no return
*/
void multiply(stack_t **top, unsigned int number)
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
		fprintf(stderr, "L%d: can't multiply, stack is short\n", number);
		fclose(car.f_ile);
		free(car.C_ontent);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	total = t->next->n * t->n;
	t->next->n = total;
	*top = t->next;
	free(t);
}
