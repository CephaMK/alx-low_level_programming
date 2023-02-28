/*
 * File - 6-puts2.c
 */

#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character.
 * @str: strint in question
 */
void puts2(char *str)
{
	int m, k = 0;

	while (str[k] != '\0')
		k++;

	for (m = 0; m < k; m += 2)
		_putchar(str[m]);

	_putchar('\n');
}
