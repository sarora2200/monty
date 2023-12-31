#include "monty.h"
/**
* e_printChar - printChar at the top of the stack.
* @top: top of stack
* @number: lineNumber
* Return: NoReturn
*/
void e_printChar(stack_t **top, unsigned int number)
{
stack_t *t;

t = *top;
if (!t)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", number);
fclose(car.f_ile);
free(car.C_ontent);
stack_free(*top);
exit(EXIT_FAILURE);
}
if (t->n > 127 || t->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", number);
fclose(car.f_ile);
free(car.C_ontent);
stack_free(*top);
exit(EXIT_FAILURE);
}
printf("%c\n", t->n);
}
