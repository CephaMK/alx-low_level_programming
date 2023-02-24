/*
 * File - 10-print_triangle.c
 */

#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int h, d;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (d = size - h; d > 0; d--)
				_putchar(' ');

			for (d = 0; d < h; d++)
				_putchar('#');

			if (h == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
