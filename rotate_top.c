#include "monty.h"

/**
 * rotl - Rotates the stack to move the top element to the bottom
 * @stack: Pointer to the head of the stack
 * @line_number: The line number where an error might occur
 *
 * Return: No return value
 */

void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void) line_number;

	if (current && current->next)
	{
		while (current->next != NULL)
		{
			current->n ^= current->next->n;
			current->next->n ^= current->n;
			current->n ^= current->next->n;
			current = current->next;
		}
	}
}
