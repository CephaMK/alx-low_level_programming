/*
 * file 4-pow_recursion.c
 */

#include "main.h"

/**
 * _pow_recursion - returns the value of integer x
 *	raised to the power of y
 * @x: integer in question.
 * @y: power to use.
 *
 * Return: value of x raised to power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	x = x * _pow_recursion(x, y - 1);
	return (x);
}
