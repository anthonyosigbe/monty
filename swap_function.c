#include "monty.h"

/**
 * swap - Interchanges the positions of the top two elements in the stack
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 *
 * Return: No return value
 */

void swap(stack_t **stack, unsigned int line_number)
{
	unsigned int length = stack_tracking(*stack);

	if (length < 2)
		error_mgt(ERR_SWAP_USG, NULL, line_number, NULL);
	if (*stack)
	{
		int temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
}
