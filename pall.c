#include "monty.h"
/**
 * f_pall - fucntion that prints the stack
 * @head: head of the stack
 * @counter: no used
 * Return: returns nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->a);
		h = h->next;
	}
}
