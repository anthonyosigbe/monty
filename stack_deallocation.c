#include "monty.h"

/**
 * stack_deallocation - Deallocates all elements in the stack
 * using if and while
 * Return: Nothing
 */
void stack_deallocation(void)
{
	stack_t *temp = NULL;

	if (head)
	{
		temp = head;

		while (temp)
		{
			head = head->next;
			free(temp);
			temp = head;
		}
	}
}
