#include "monty.h"

/**
 * func_src - Choose the function corresponding to the Monty instruction
 * @s: The instruction to be executed
 *
 * Return: A pointer to the function to be executed, or
 * NULL if the function does not exist
 */

void (*func_src(char *s))(stack_t **, unsigned int)
{
	instruction_t insts[] = {
		{ "push", push },
		{ "push_queue", push_queue },
		{ "pall", pall },
		{ "pint", pint },
		{ "pop", pop },
		{ "swap", swap },
		{ "add", add },
		{ "nop", nop },
		{ "sub", sub },
		{ "div", divide },
		{ "mul", mul },
		{ "mod", mod },
		{ "pchar", pchar },
		{ "pstr", pstr },
		{ "rotl", rotl },
		{ "rotr", rotr },
		{ NULL, NULL }
	};

	int i;

	for (i = 0; insts[i].opcode; i++)
	{
		if (strcmp(s, insts[i].opcode) == 0)
			return (insts[i].f);
	}
	return (NULL);
}
