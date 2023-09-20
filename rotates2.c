#include "monty.h"
/**
  *e_erotates- rotateTo the bottom
  *@top: top
  *@number: line
  *Return: no return
 */
void e_erotates(stack_t **top, __attribute__((unused)) unsigned int number)
{
	stack_t *copy;

	copy = *top;
	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *top;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*top)->prev = copy;
	(*top) = copy;
}
