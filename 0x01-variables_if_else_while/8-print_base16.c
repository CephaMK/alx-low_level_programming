/*
 * File - 8-print_base16.c
 */

#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int num;
	char hex;

	for (num = 0; num < 10; num++)
	{
		putchar(num % 10 + '0');
	}

	for (hex = 'a'; hex <= 'f')
	{
		putchar(hex);
	}

	putchar ('\n');

	return (0);
}
