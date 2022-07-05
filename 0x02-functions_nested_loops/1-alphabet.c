/*
 * File 1-alphabet.c
 */

#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase followed by a new line.
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char m;

	for (m = 'a'; m < 'z'; m++)
		_putchar(m);

	_putchar('\n');
}
