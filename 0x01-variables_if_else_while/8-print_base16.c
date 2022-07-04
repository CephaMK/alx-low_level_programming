/*
 * File 8-print_base16.c
 */

#include <stdio.h>

/**
 * main - prints all the niumbers in base 16 lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	int m;
	char d;

	for (m = 0; m < 10; m++)
		putchar((m % 10) + '0');

	for (d = 'a'; d <= 'f'; d++)
		putchar(d);

	putchar('\n');

	return (0);
}
