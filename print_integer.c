#include "monty.h"

/**
 * pint - Displays the value at the stack's top,
 * followed by a newline.
 * @stack: The stack's head
 * @line_number: The line number where the error occurred
 * using if statement
 * Return: No return value
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		error_mgt(ERR_PINT_USG, NULL, line_number, NULL);
	printf("%d\n", (*stack)->n);
}
