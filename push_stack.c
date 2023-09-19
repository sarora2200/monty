#include "monty.h"
/**
 * e_push - function add node to the stack
 * @top: head of stack
 * @number: number of line
*/
void e_push(stack_t **top, unsigned int number)
{
	int i, k = 0, Flag = 0;

	if (car.argument)
	{
		if (car.argument[0] == '-')
			k++;
		for (; car.argument[k] != '\0'; k++)
		{
			if (car.argument[k] > 57 || car.argument[k] < 48)
				Flag = 1; }
		if (Flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", number);
			fclose(car.f_ile);
			free(car.C_ontent);
			stack_free(*top);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", number);
		fclose(car.f_ile);
		free(car.C_ontent);
		stack_free(*top);
		exit(EXIT_FAILURE); }
	i = atoi(car.argument);
	if (car.change == 0)
		add_node(top, i);
	else
		add_queue(top, i);
}
