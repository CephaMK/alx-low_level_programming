/*
 * File - 101-print_number.c
 */

#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	unsigned int mak = n;

	if (n < 0)
	{
		_putchar('_');
		mak = -mak;
	}

	if ((mak / 10) > 0)
		print_number(mak / 10);

	_putchar((mak % 10) + '0');
}
