#include "monty.h"
/**
* free_stack - fucntion that frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *pg;

	pg = head;
	while (head)
	{
		pg = head->next;
		free(head);
		head = pg;
	}
}
