/*
 * File - 6-abs.c
 */

#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @n: integer to be computed
 *
 * Return: Absolut value of integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
