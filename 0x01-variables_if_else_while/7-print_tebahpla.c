/*
 * File - 7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar (rev);
	}

	putchar('\n');

	return (0);
}
