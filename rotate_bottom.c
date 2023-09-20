#include "monty.h"

/**
 * rotr - Rotates the stack to bring the bottom element to the top
 * @stack: Pointer to the head of the stack
 * @line_number: The line number where an error could occur
 *
 * Return: No return value
 */

void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last = NULL;
	(void) line_number;

	if (*stack && (*stack)->next)
	{
		last = *stack;

		while (last->next != NULL)
			last = last->next;

		last->prev->next = NULL;
		last->next = *stack;
		(*stack)->prev = last;
		*stack = last;
	}
}
