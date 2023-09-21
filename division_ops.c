#include "monty.h"

/**
 * divide - Computes the result of dividing the second top element
 * by the top element of the stack
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 *
 * Return: No return value
 */

void divide(stack_t **stack, unsigned int line_number)
{
	unsigned int length = stack_tracking(*stack);
	stack_t *temp = *stack;
	int a = temp->n;
	int b = temp->next->n;

	if (length < 2)
	{
		error_mgt(ERR_DIV_USG, NULL, line_number, NULL);
		return;
	}
	a = temp->n;
	b = temp->next->n;

	if (a == 0)
	{
		error_mgt(ERR_DIV_ZRO, NULL, line_number, NULL);
		return;
	}
	temp->next->n = b / a;
	*stack = temp->next;
	free(temp);
}
