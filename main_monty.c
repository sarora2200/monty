#include "monty.h"
car_t car = {NULL, NULL, NULL, 0};
/**
* main - Entry of monty code interpreter
* @argcount: arguments_number
* @argvector: location of monty file
* Return: 0 on success
*/
int main(int argcount, char *argvector[])
{
	char *C_ontent;
	FILE *f_ile;
	size_t Size = 0;
	ssize_t read_content = 1;
	stack_t *stack = NULL;
	unsigned int number = 0;

	if (argcount != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f_ile = fopen(argvector[1], "r");
	car.f_ile = f_ile;
	if (!f_ile)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argvector[1]);
		exit(EXIT_FAILURE);
	}
	while (read_content > 0)
	{
		C_ontent = NULL;
		read_content = getline(&C_ontent, &Size, f_ile);
		car.C_ontent = C_ontent;
		number++;
		if (read_content > 0)
		{
			executeF(C_ontent, &stack, number, f_ile);
		}
		free(C_ontent);
	}
	stack_free(stack);
	fclose(f_ile);
return (0);
}
