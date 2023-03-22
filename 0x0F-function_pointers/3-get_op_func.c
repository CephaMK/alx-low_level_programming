/*
 * File - 3-get_op_func.c
 */

#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select correct function to perform chhosen operation
 * @s: operator passed as arg
 *
 * Return: pointer to function corresponding to operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
