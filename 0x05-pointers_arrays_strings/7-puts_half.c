/*
 * file 7-puts_half.c
 */

#include "main.h"

/**
 * puts_half - prints hals a string
 * @str: string in question
 */
void puts_half(char *str)
{
	int m = 0, k = 0, n;

	while (str[m++])
		k++;

	if ((k % 2) == 0)
		n = k / 2;

	else
		n = ((k + 1) / 2);

	for (m = n; m < k; m++)
		_putchar(str[m]);

	_putchar('\n');
}

