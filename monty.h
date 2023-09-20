#ifndef MONTY_HEADER
#define MONTY_HEADER

#include <ctype.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>



#define ERR_BAD_INST	100
#define ERR_BAD_MALL	101
#define ERR_INVLD_PARM	102
#define ERR_ARG_USG	200
#define ERR_PUSH_USG	201
#define ERR_PINT_USG	202
#define ERR_POP_USG	203
#define ERR_SWAP_USG	204
#define ERR_ADD_USG	205
#define ERR_SUB_USG	206
#define ERR_DIV_USG	207
#define ERR_DIV_ZRO	208
#define ERR_MUL_USG	209
#define ERR_MOD_USG	210
#define ERR_PCH_USG	211
#define ERR_PCH_EMP	212


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;

void error_mgt(int error_code, char *opcode, unsigned int line, char *buff);
void common_error_mgt(int error_code, char *opcode, unsigned int line);
void usage_error_mgt(int error_code, unsigned int line);
void more_usage_error_mgt(int error_code, unsigned int line);
void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int param);
void push_queue(stack_t **stack, unsigned int param);
void verify_args_num(int argn);
void verify_access_rights(const char *filename);
int verify_push_param(const char *param);
int verify_digits(const char *s);
void stack_deallocation(void);
void pint(stack_t **stack, unsigned int line_number);
void (*func_src(char *s))(stack_t **, unsigned int);
int execution_mgt(char *op_code, char *op_param, unsigned int line, int m);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);


#endif
