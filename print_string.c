#include "monty.h"

/**
 * pstr - Outputs the string beginning at the top of the stack,
 * followed by a newline
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 * using while loop
 * Return: No return value
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	(void) line_number;

	while (current && current->n != 0 && current->n >= 0 && current->n <= 127)
	{
		putchar(current->n);
		current = current->next;
	}

	putchar('\n');
}
