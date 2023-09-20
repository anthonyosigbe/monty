#include "monty.h"

/**
 * mul - Calculates the product of the top two elements on the stack
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 *
 * Return: No return value
 */

void mul(stack_t **stack, unsigned int line_number)
{
	unsigned int length = count_stack(*stack);

	if (length < 2)
		error_mgt(ERR_MUL_USG, NULL, line_number, NULL);

	stack_t *temp = *stack;
	int a = temp->n;
	int b = temp->next->n;

	temp->next->n = b * a;
	*stack = temp->next;
	free(temp);
}
