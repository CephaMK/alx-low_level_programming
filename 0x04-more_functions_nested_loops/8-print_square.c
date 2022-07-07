/*
 * File 8-print_square.c
 */

#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * @size: size of square
 */
void print_square(int size)
{
	int l, w;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (w = 0; w < size; w++)
				_putchar('#');

			if (l == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
