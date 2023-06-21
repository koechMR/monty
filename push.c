#include "monty.h"
/**
 * f_push - add nodes to the stack of that is being shown
 * @head: head of the stack
 * @counter: where the line counts
 * Return: return nothing
*/
void f_push(stack_t **head, unsigned int counter)
{
	int v, a = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			a++;
		for (; bus.arg[a] != '\0'; a++)
		{
			if (bus.arg[a] > 57 || bus.arg[a] < 48)
				flag = 1; }
		if (flag == 1)
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
	v = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, v);
	else
		addqueue(head, v);
}
