/*
 * File - 3-factorial.c
 */

#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: int in question
 *
 * Return: -1 if n is less than zero to indicate
 * that there is an error
 */
int factorial(int n)
{
	if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	n = n * factorial(n - 1);
	return (n);
}
