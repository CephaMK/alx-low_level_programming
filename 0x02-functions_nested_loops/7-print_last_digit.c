/*
 * File 7-print_last_digit.c
 */

#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number in question
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}

