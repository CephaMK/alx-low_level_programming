/*
 * File - 4-print_alphabt.c
 */

#include <stdio.h>

/**
 * main - prints alphabet in lower cse unless it's 'q' or 'e
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}

	return (0);
}
