#include "monty.h"
/**
 * addnode - fucntion that add node to the head stack
 * @head: first parameter
 * @n: new value
 * Return: return nothing
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *pg;

	pg = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (pg)
		pg->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
