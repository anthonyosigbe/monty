#include "monty.h"

/**
 * pint - Displays the value at the stack's top,
 * followed by a newline.
 * @stack: The stack's head
 * @line_number: The line number where the error occurred
 *
 * Return: No return value
 */


void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		error_mgt(ERR_PINT_USG, NULL, line_number, NULL);

	printf("%d\n", (*stack)->n);
}
Here's what has been optimized:

Replaced handle_error with error_mgt for error handling consistency.
The code remains functionally equivalent while being more efficient
and readable.
User
kindly rephrase the comments below

/**
* pint - Prints the value at the top of the stack,
* followed by a new line.
* @stack: The head of the stack
* @line_number: The line on which the error occurred
*
* Return: Nothing
*/new

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		error_mgt(ERR_PINT_USG, NULL, line_number, NULL);

	printf("%d\n", (*stack)->n);
}
