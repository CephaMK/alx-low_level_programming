/*
 * File 2-print_alphabet.c
 */

#include <stdio.h>

/**
 * main - prints the alphabet in lower case followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar('\n');

	return (0);

}
