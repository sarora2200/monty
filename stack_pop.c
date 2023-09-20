#include "monty.h"
/**
 * stack_pop - stack pop
 * @top: top
 * @number: line
 * Return: no return
*/
void stack_pop(stack_t **top, unsigned int number)
{
	stack_t *t;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", number);
		fclose(car.f_ile);
		free(car.C_ontent);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	t = *top;
	*top = t->next;
	free(t);
}
