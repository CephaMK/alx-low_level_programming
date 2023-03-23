/*
 * File - 0-sum_them_all.c
 */

#include "variadic_functions.h"


/**
 * sum_them_all - returns te sum of all its parameters
 * @n: constant integer parameter
 *
 * Return: 0 if n is 0
 * Oherwise: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int  i, sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}

	va_end(arg);

	return (sum);
}
