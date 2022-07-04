/*
 * File 7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);

	putchar('\n');

	return (0);
}
