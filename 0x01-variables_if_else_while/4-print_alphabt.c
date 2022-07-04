/*
 * File  4-print_alphabt.c
 */

#include <stdio.h>

/**
 * main - prints the alphabet in lower case except for q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k != 'e' && k != 'q')
			putchar(k);

	}

	putchar('\n');

	return (0);
}
