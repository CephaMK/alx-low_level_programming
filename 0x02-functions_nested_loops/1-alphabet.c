/*
 * File - 1-alphabet.c
 */

#include "main.h"

/**
 * print_alphabet - prints the  alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}

	_putchar('\n');
}
