/*
 * File - 11-print_to_98.c
 */

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from inout to 98,
 *	in order seperated by a coma followed by space.
 * @n: the number to begin counting at
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d", n++);
		printf("%d\n", n);
	}
}
