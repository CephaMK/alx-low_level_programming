/*
 * File 7-print_last_digit.c
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @int: number in question
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int dig = n % 10;

	if (dig < 0)
		dig *= -1;

	_putchar(dig + '0');

	return (dig);
}
