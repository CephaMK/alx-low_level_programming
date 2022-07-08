/*
 * file 101-print_number.c
 */

#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int mk = n;

	if (n < 0)
	{
		_putchar('-');
		mk = -mk;
	}

	if ((mk / 10) > 0)
		print_number(mk / 10);

	_putchar((mk % 10) + '0');
}
