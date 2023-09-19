#include "monty.h"

/**
 * error_mgt - Manages the printing of interpreter errors
 * @error_code: The error code to manage
 * @opcode: The operation code to manage
 * @line: The line on which the error occurred
 * @buff: The reserved error line buffer
 *
 * Return: Nothing
 */
void error_mgt(int error_code, char *opcode, unsigned int line, char *buff)
{
	if (error_code >= 100 && error_code < 200)
		common_error_mgt(error_code, opcode, line);
	else if (error_code >= 200 && error_code <= 210)
		usage_error_mgt(error_code, line);
	else if (error_code >= 211 && error_code <= 220)
		more_usage_error_mgt(error_code, line);
	else
		return;

	stack_deallocation();

	if (buff)
		free(buff);

	exit(EXIT_FAILURE);
}

/**
 * common_error_mgt - Manages common interpreter errors
 * @error_code: The error code to manage
 * @opcode: The operation code to manage
 * @line: The line on which the error occurred
 *
 * Return: Nothing
 */
void common_error_mgt(int error_code, char *opcode, unsigned int line)
{
	switch (error_code)
	{
		case ERR_BAD_INST:
			fprintf(stderr, "L%d: unknown instruction %s\n", line, opcode);
			break;
		case ERR_BAD_MALL:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		default:
			break;
	}
}

/**
 * usage_error_mgt - Manages interpreter usage errors
 * @error_code: The error code to manage
 * @line: The line on which the error occurred
 *
 * Return: Nothing
 */
void usage_error_mgt(int error_code, unsigned int line)
{
	switch (error_code)
	{
		case ERR_ARG_USG:
			fprintf(stderr, "USAGE: monty file\n");
			break;
		case ERR_PUSH_USG:
			fprintf(stderr, "L%d: usage: push integer\n", line);
			break;
		case ERR_PINT_USG:
			fprintf(stderr, "L%d: can't pint char, stack empty\n", line);
			break;
		case ERR_POP_USG:
			fprintf(stderr, "L%d: can't pop an empty stack\n", line);
			break;
		case ERR_SWAP_USG:
			fprintf(stderr, "L%d: can't swap, stack too short\n", line);
			break;
		case ERR_ADD_USG:
			fprintf(stderr, "L%d: can't add, stack too short\n", line);
			break;
		case ERR_SUB_USG:
			fprintf(stderr, "L%d: can't sub, stack too short\n", line);
			break;
		case ERR_DIV_USG:
			fprintf(stderr, "L%d: can't div, stack too short\n", line);
			break;
		case ERR_DIV_ZRO:
			fprintf(stderr, "L%d: division by zero\n", line);
			break;
		case ERR_MUL_USG:
			fprintf(stderr, "L%d: can't mul, stack too short\n", line);
			break;
		case ERR_MOD_USG:
			fprintf(stderr, "L%d: can't mod, stack too short\n", line);
			break;
		default:
			break;
	}
}

/**
 * more_usage_error_mgt - Manages additional interpreter usage errors
 * @error_code: The error code to manage
 * @line: The line on which the error occurred
 *
 * Return: Nothing
 */
void more_usage_error_mgt(int error_code, unsigned int line)
{
	switch (error_code)
	{
		case ERR_PRINT_CHAR_USG:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", line);
			break;
		case ERR_PRINT_CHAR_EMP:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", line);
			break;
		default:
			break;
	}
}
