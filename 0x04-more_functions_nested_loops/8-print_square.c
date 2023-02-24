/*
 * File - 8-print_square.c
 */

#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size - size of square
 */
void print_square(int size)
{
	int width, length;

	if (size > 0)
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (length == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');

}
