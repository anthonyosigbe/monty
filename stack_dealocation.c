#include "monty.h"

/**
 * stack_deallocation - Deallocates all elements in the stack
 *
 * Return: Nothing
 */stack_
void stack_deallocation(void)
{
	stack_t *current = head;

	while (current != NULL)
	{
		stack_t *temp = current;

		current = current->next;

		free(temp);
	}

	head = NULL;
}

