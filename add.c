#include "monty.h"
/**
 * f_add - function that adds the top two elements of the stack.
 * @head: head to be checked
 * @counter: counter
 * Return: it returns nothing
*/
void f_add(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	pg = a->n + a->next->n;
	a->next->n = pg;
	*head = a->next;
	free(a);
}
