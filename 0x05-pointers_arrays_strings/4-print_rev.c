/*
 * File - 4-print_rev.c
 */

#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = 0, rev;

	while (s[rev++])
	{
		if (s[rev] != '\0')
			len++;
	}

	for (rev = len - 1; rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}

	_putchar('\n');
}
