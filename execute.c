#include "monty.h"
/**
* execute - fucntion that executes the opcode
* @stack: head linked list
* @counter: line counter
* @file: poiner to monty file
* @content: content of the line
* Return: returns nothing on suc
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push},
				{"pall", f_pall},
				{"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{NULL, NULL}
				};
	unsigned int f = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[f].opcode && op)
	{
		if (strcmp(op, opst[f].opcode) == 0)
		{	opst[f].f(stack, counter);
			return (0);
		}
		f++;
	}
	if (op && opst[f].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
