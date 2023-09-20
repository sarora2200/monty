#include "monty.h"
/**
* file_print - prints the top
* @top: top
* @number: lineNumber
* Return: no return
*/
void file_print(stack_t **top, unsigned int number)
{
if (*top == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", number);
fclose(car.f_ile);
free(car.C_ontent);
stack_free(*top);
exit(EXIT_FAILURE);
}
printf("%d\n", (*top)->n);
}

