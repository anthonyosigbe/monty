#include "monty.h"

/**
 * mod - Calculates the remainder when dividing the second top element
 * of the stack by the top element of the stack
 * @stack: The stack's head
 * @line_number: The line number where an error might occur
 *
 * Return: No return value
 */

void mod(stack_t **stack, unsigned int line_number)
{
	unsigned int length = count_stack(*stack);

	if (length < 2)
		error_mgt(ERR_MOD_USG, NULL, line_number, NULL);

	stack_t *temp = *stack;
	int a = temp->n;
	int b = temp->next->n;

	if (a == 0)
		error_mgt(ERR_DIV_ZRO, NULL, line_number, NULL);

	temp->next->n = b % a;
	*stack = temp->next;
	free(temp);
}
