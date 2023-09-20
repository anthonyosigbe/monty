#include "monty.h"

/**
 * open_monty_file - Opens the specified file for Monty command interpretation
 * @filename: The name of the file to be opened
 *
 * Return: A file pointer to the opened file, or NULL on failure
 */

FILE *open_monty_file(char *filename)
{
	FILE *fd = NULL;

	check_access_rights(filename);

	fd = fopen(filename, "r");

	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	return (fd);
}
