/*
 * File - 4-pow_recursion.c
 */

#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: first integer
 * @y: second integer
 *
 * Return: -1 if y is less than 0
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
