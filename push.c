#include "monty.h"
/**
 * f_push - function that add node to the stack
 * @head: stacks head of file
 * @counter: line number
 * Return: return nothing
*/
void f_push(stack_t **head, unsigned int counter)
{
	int g, x = 0, den = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			x++;
		for (; bus.arg[x] != '\0'; x++)
		{
			if (bus.arg[x] > 57 || bus.arg[x] < 48)
				den = 1; }
		if (den == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	g = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, g);
	else
		addqueue(head, g);
}
