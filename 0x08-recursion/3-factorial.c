/*
 * File 3-factorial.c
 */

#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number in question
 * Return: factorial of number
 *	-1 if error occurs
 */
int factorial(int n)
{
	/*base case*/
	if (n >= 0 && n <= 1)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);

	n = n * factorial(n - 1);
	return (n);
}
