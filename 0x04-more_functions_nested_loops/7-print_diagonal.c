/*
 * File - 7-print_diagonal.c
 */

#include "main.h"

/**
 * print_diagonal - priints diagonal line on terminal
 * @n: number of lines to e printed
 */
void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
