#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

/**
 * struct stack_s - Stack structure
 * @data: Array to store stack elements
 * @top: Index of the top element in the stack
 */
typedef struct stack_s
{
    int data[MAX_STACK_SIZE];
    int top;
} stack_t;

/**
 * push - Pushes an element to the stack
 * @stack: Pointer to the stack
 * @value: Value to be pushed
 * @line_number: Line number in the file
 */
void push(stack_t *stack, int value, unsigned int line_number);

/**
 * pall - Prints all values on the stack
 * @stack: Pointer to the stack
 */
void pall(stack_t *stack);

#endif /* MONTY_H */

