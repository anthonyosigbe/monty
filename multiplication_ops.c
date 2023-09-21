#include "monty.h"

/**
 * mul - Calculates the product of the top two elements on the stack
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 * using if statement 
 * Return: No return value
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	unsigned int a = 0, b = 0, len = 0;

	len = stack_tracking(*stack);

	if (len < 2)
		error_mgt(ERR_MUL_USG, NULL, line_number, NULL);

	a = temp->n;
	b = temp->next->n;
	temp->next->n = b * a;
	*stack = temp->next;
	free(temp);
}
