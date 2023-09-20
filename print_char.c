#include "monty.h"

/**
 * pchar - Outputs the character at the top of the stack,
 * followed by a newline
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 *
 * Return: No return value
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		error_mgt(ERR_PCH_EMP, NULL, line_number, NULL);

	if ((*stack)->n >= 0 && (*stack)->n <= 127)
		printf("%c\n", (*stack)->n);
	else
		error_mgt(ERR_PCH_USG, NULL, line_number, NULL);
}
