/*
 * File 4-print_rev.c
 */

#include "main.h"

/**
 * print_rev - prints strint in reverse followed by a new line
 * @s: string in question
 *
 */
void print_rev(char *s)
{
	int l = 0, index;

	while (s[index++])
		l++;

	for (index = l - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
