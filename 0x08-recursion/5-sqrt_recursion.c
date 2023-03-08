/*
 * File - 5-sqrt_recursion.c
 */

#include "main.h"

/**
 * sq - returns te natural square root on nuber
 * @num: number in question
 * @sqroot: square root of number
 *
 * Return: square root of number
 */
int sq(int num, int sqroot)
{
	if ((sqroot * sqroot) == num)
	{
		return (sqroot);
	}
	else if (sqroot == num / 2)
	{
		return (-1);
	}

	return (sq(num, sqroot + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number in question
 *
 * Return: -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	int sqroot = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sq(n, sqroot));
}
