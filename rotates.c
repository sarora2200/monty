#include "monty.h"
/**
  *e_rotates- rotateStack
  *@top: top
  *@number: line
  *Return: no return
 */
void e_rotates(stack_t **top,  __attribute__((unused)) unsigned int number)
{
	stack_t *tmp = *top, *total;

	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	total = (*top)->next;
	total->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *top;
	(*top)->next = NULL;
	(*top)->prev = tmp;
	(*top) = total;
}
