#include "monty.h"

stack_t *head = NULL;
/**
  * main - Entry point for the Monty Interpreter
  * @argn: The number of command-line arguments
  * @args: An array of command-line arguments passed to the interpreter
  *
  * Return: Always returns zero
  */
int main(int argn, char *args[])
{
	FILE *fd = NULL;
	size_t line_len = 0;
	unsigned int line_num = 1;
	int readed = 0, op_status = 0;
	char *filename = NULL, *op_code = NULL, *op_param = NULL, *buff = NULL;

	filename = args[1];
	verify_args_num(argn);
	fd = open_monty_file(filename);

	while ((readed = getline(&buff, &line_len, fd)) != -1)
	{
		op_code = strtok(buff, "\t\n ");
		if (op_code)
		{
			if (op_code[0] == '#')
			{
				++line_num;
				continue;
			}

			op_param = strtok(NULL, "\t\n ");
			op_status = execution_mgt(op_code, op_param, line_num, op_status);

			if (op_status >= 100 && op_status < 300)
			{
				fclose(fd);
				error_mgt(op_status, op_code, line_num, buff);
			}
		}

		++line_num;
	}

	stack_deallocation();
	free(buff);
	fclose(fd);
	return (0);
}
