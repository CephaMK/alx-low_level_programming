/*
 * File 2-print_alphabet_x10.c
 */

#include "main.h"

/**
 * void print_alphabet_x10(void) - prints 10 times the alphabet
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int m = 0;
	char k;

	while (m++ <= 9)
	{
		for  (k = 'a'; k <= 'z'; k++)
			_putchar(k);

		_putchar('\n');
	}
}
