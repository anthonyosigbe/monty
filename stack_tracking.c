#include "monty.h"

/**
 * stack_tracking - Tracks the number of elements in the stack
 * @stack: The stack to track
 *
 * Return: Number of elements in the stack
 */

unsigned int stack_tracking(const stack_t *stack)
{
	unsigned int count = 0;

	while (stack != NULL)
	{
		count++;
		stack = stack->next;
	}

	return (count);
}
