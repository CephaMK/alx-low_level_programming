/*
 * File 9-print_comb.c
 */

#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int dgt;

	for (dgt = 0; dgt <= 9; dgt++)
	{
		putchar((dgt % 10) + '0');

		if (dgt == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
