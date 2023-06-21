#include "monty.h"

/**
 * push - Pushes an element to the stack
 * @stack: Pointer to the stack
 * @value: Value to be pushed
 * @line_number: Line number in the file
 */
void push(stack_t *stack, int value, unsigned int line_number)
{
	if (stack->top == MAX_STACK_SIZE - 1)
	{
		fprintf(stderr, "L%u: Stack overflow\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack->data[++stack->top] = value;
}

/**
 * pall - Prints all values on the stack
 * @stack: Pointer to the stack
 */
void pall(stack_t *stack)
{
	int i;

	for (i = stack->top; i >= 0; i--)
	{
		printf("%d\n", stack->data[i]);
	}
}

/**
 * main - Entry point of the program
 * Return: 0 on success
 */
int main(void)
{
	stack_t stack;

	stack.top = -1;


	push(&stack, 1, 1);
	push(&stack, 2, 2);
	push(&stack, 3, 3);

	pall(&stack);

	return (0);
}

