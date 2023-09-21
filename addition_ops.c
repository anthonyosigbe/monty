#include "monty.h"

/**
 * add - Combines the values of the top two elements in the stack
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 * using if statement
 * Return: No return value
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int a = 0, b = 0, length = 0;

	length = stack_tracking(*stack);
	if (length < 2)
		error_mgt(ERR_ADD_USG, NULL, line_number, NULL);
	a = temp->n;
	b = temp->next->n;
	temp->next->n = b + a;
	*stack = temp->next;
	free(temp);
}
