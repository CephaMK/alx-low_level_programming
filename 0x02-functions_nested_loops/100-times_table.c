/*
 * File - 100-times_table.c
 */

#include "main.h"

/**
 * print_times_table - prints the times table of the input
 *	starting with 0.
 * @n: the value of times table to be printed
 */
void print_times_table(int n)
{
	int num, mult, ans;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				ans = num * mult;

				if (ans <= 99)
					_putchar(' ');
				if (ans <= 9)
					_putchar(' ');

				if (ans >= 100)
				{
					_putchar((ans / 100) + '0');
					_putchar(((ans / 10) % 10) + '0');
				}
				else if (ans <= 99 && ans >= 10)
				{
					_putchar((ans / 10) + '0');
				}
				_putchar((ans % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
