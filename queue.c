#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line number
 * Return: return nothing
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add nodes to the tail stack
 * @n: new value
 * @head: head of the stack
 * Return: return nothing
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *pg;

	pg = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (pg)
	{
		while (pg->next)
			pg = pg->next;
	}
	if (!pg)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		pg->next = new_node;
		new_node->prev = pg;
	}
}
