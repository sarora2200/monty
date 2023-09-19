#include "monty.h"
/**
 * e_mod - function computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @top: head of stack
 * @number: number line
*/
void e_mod(stack_t **top, unsigned int number)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", number);
		fclose(car.f_ile);
		free(car.C_ontent);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	if (t->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", number);
		fclose(car.f_ile);
		free(car.C_ontent);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	total = t->next->n % t->n;
	t->next->n = total;
	*top = t->next;
	free(t);
}
