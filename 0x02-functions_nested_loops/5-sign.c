/*
 * File 5-sign.c
 */

#include "main.h"

/**
 * print_sign - prints te sign of a number
 * @n: sign to be printed
 *
 * Return: 1 if the number is greater than 0
 *	0 if the number is zero
 *	-1 if number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
