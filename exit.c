#include "monty.h"
/**
* executeF - Function executes the opcode
* @stack: the head of linked list - stack
* @number: line_number
* @f_ile: monty file pointer
* @C_ontent: content of line
* Return: no return
*/
int executeF(char *C_ontent, stack_t **stack, unsigned int number, FILE *f_ile)
{
	instruction_t opst[] = {
				{"push", e_push}, {"pall", e_pall}, {"pint", file_print},
				{"pop", stack_pop},
				{"swap", stack_swap},
				{"add", e_add},
				{"nop", s_nothing},
				{"sub", e_sub},
				{"div", e_div},
				{"mul", multiply},
				{"mod", e_mod},
				{"pchar", e_printChar},
				{"pstr", string_print},
				{"rotl", e_rotates},
				{"rotr", e_erotates},
				{"queue", e_queue},
				{"stack", e_stack},
				{NULL, NULL}
				};
	unsigned int j = 0;
	char *ot;

	ot = strtok(C_ontent, " \n\t");
	if (ot && ot[0] == '#')
		return (0);
	car.argument = strtok(NULL, " \n\t");
	while (opst[j].opcode && ot)
	{
		if (strcmp(ot, opst[j].opcode) == 0)
		{	opst[j].f(stack, number);
			return (0);
		}
		j++;
	}
	if (ot && opst[j].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", number, ot);
		fclose(f_ile);
		free(C_ontent);
		stack_free(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
