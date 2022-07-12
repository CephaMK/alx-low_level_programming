/*
 * file 6-puts2.c
 */

#include "main.h"

/**
 * puts2 -  prints every other character of a string, starting
 *	with the first character, followed by a new line.
 * @str: string in question
 */
void puts2(char *str)
{
	int index = 0, k = 0;

	while (str[index++])
		k++;

	for (index = 0; index < k; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}

