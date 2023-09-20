#include "monty.h"

/**
 * add - Combines the values of the top two elements in the stack
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 *
 * Return: No return value
 */

void add(stack_t **stack, unsigned int line_number)
{
	unsigned int length = count_stack(*stack);

	if (length < 2)
		error_mgt(ERR_ADD_USG, NULL, line_number, NULL);

	stack_t *temp = *stack;
	int a = temp->n;
	int b = temp->next->n;

	temp->next->n = a + b;
	*stack = temp->next;
	free(temp);
}
