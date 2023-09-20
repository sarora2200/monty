#include "monty.h"
/**
  *e_sub- sustration in slack
  *@top: top
  *@number: line
  *Return: no return
 */
void e_sub(stack_t **top, unsigned int number)
{
	stack_t *total;
	int sus, nodes;

	total = *top;
	for (nodes = 0; total != NULL; nodes++)
		total = total->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't subtract, stack is short\n", number);
		fclose(car.f_ile);
		free(car.C_ontent);
		stack_free(*top);
		exit(EXIT_FAILURE);
	}
	total = *top;
	sus = total->next->n - total->n;
	total->next->n = sus;
	*top = total->next;
	free(total);
}
