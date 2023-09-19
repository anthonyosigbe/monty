#include "monty.h"

/**
 * pall - Outputs all stack values starting from the top.
 * @stack: The stack's head
 * @line_number: The line where an error occurred
 *
 * Return: No return value
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void)line_number;  /* Unused parameter*/

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
