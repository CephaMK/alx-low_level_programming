/*
 * File 2-print_alphabet_x10.c
 */

#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet
 *		followed by a new line.
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int _3 = 0;
	char v;

	while (_3++ <= 9)
	{
		for (v = 'a'; v <= 'z'; v++)
			_putchar(v);

		_putchar('\n');
	}
}
