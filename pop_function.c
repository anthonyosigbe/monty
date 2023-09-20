#include "monty.h"

/**
 * pop - Deletes the top element from the stack
 * @stack: The stack's head
 * @line_number: The line number where the error occurred
 *
 * Return: No return value
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (*stack == NULL)
		error_mgt(ERR_POP_USG, NULL, line_number, NULL);
	if (current->next)
	{
		current->next->prev = current->prev;
		*stack = current->next;
	}
	else
	{
		*stack = NULL;
	}
	free(current);
}
