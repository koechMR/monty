#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stacks head
 * @counter: line number
 * Return: return nothing
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *a;
	int len = 0, pg;

	a = *head;
	while (a)
	{
		a = a->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	pg = a->n;
	a->n = a->next->n;
	a->next->n = pg;
}
