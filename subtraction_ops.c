#include "monty.h"

/**
 * sub - Computes the result of subtracting the second top element
 * from the top element of the stack
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 *
 * Return: No return value
 */

void sub(stack_t **stack, unsigned int line_number)
{
	unsigned int length = count_stack(*stack);

	if (length < 2)
		error_mgt(ERR_SUB_USG, NULL, line_number, NULL);

	stack_t *temp = *stack;
	int a = temp->n;
	int b = temp->next->n;

	temp->next->n = b - a;
	*stack = temp->next;
	free(temp);
}
