#include "monty.h"

/**
 * push - Inserts a new node at the stack's front
 * @stack: The stack's head
 * @param: The value to place on the stack
 *
 * Return: No return value
 */

void push(stack_t **stack, unsigned int param)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		error_mgt(ERR_BAD_MALL, NULL, 0, NULL);

	new_node->n = param;
	new_node->next = *stack;
	new_node->prev = NULL;

	if (*stack)
		(*stack)->prev = new_node;

	*stack = new_node;
}

/**
 * push_queue - Appends a new node to the end of the stack
 * @stack: The stack's head
 * @param: The value to append to the stack
 *
 * Return: No return value
 */

void push_queue(stack_t **stack, unsigned int param)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		error_mgt(ERR_BAD_MALL, NULL, 0, NULL);

	new_node->n = param;
	new_node->next = NULL;

	if (*stack)
	{
		stack_t *current = *stack;

		while (current->next != NULL)
			current = current->next;

		new_node->prev = current;
		current->next = new_node;
	}
	else
	{
		new_node->prev = NULL;
		*stack = new_node;
	}
}
