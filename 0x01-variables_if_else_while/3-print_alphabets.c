/*
 * File - 3-print_alphabets.c
 */

#include <stdio.h>

/**
 * main - prints the alphabet in lower and then
 * uppercase followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar (x);

	for (x = 'A'; x <= 'Z'; x++)
		putchar (x);

	putchar ('\n');

	return (0);
}
