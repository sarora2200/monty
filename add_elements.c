#include "monty.h"
/**
 * e_add -Function adds the top two elements of the stack.
 * @top: head of the stack
 * @number: line_number
*/
void e_add(stack_t **top, unsigned int number)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", number);
		fclose(car.f_ile);
		free(car.C_ontent);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	total = t->n + t->next->n;
	t->next->n = total;
	*top = t->next;
	free(t);
}
