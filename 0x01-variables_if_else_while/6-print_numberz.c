/*
 * File - 6-print_numberz.c
 */

#include <stdio.h>

/**
 * main - prints  all single digit numbers of base 10 starting from
 * using the putchar fuction twice
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number % 10 + '0');
	}
	putchar('\n');

	return (0);
}
