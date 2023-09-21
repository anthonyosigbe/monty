#include "monty.h"

/**
 * verify_args_num - Verify the number of arguments passed to the interpreter
 * @argn: Number of arguments
 */
void verify_args_num(int argn)
{
	if (argn != MIN_ARGS)
		error_mgt(ERR_ARG_USG, NULL, 0, NULL);
}

/**
 * verify_access_rights - Verify if the user has read permissions for the file
 * @filename: The pathname of the file
 */
void verify_access_rights(const char *filename)
{
	if (access(filename, R_OK) == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
}

/**
 * verify_push_param - Verify the parameter of the push instruction
 * @param: The parameter to be verified
 * Return: 0 if it is a valid parameter or an error code if it is invalid
 */
int verify_push_param(const char *param)
{
	if (param == NULL || !verify_digits(param))
		return (ERR_PUSH_USG);

	return (VALID_PARM);
}

/**
 * verify_digits - Verify if all characters in a string are digits
 * @s: The string to be evaluated
 * Return: 1 if all evaluated characters are digits, 0 otherwise
 */
int verify_digits(const char *s)
{
	while (*s)
	{
		if (!isdigit(*s) && !(s[0] == '-' && isdigit(s[1])))
			return (0);
		s++;
	}
	return (1);
}
