#include "monty.h"
/**
 * f_pall - fucntion that prints the stack
 * @head: stacks head in file
 * @counter: counter
 * Return: return nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *a;
	(void)counter;

	a = *head;
	if (a == NULL)
		return;
	while (a)
	{
		printf("%d\n", a->n);
		a = a->next;
	}
}
