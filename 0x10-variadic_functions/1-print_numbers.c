/*
 * File - 1-print_numbers.c
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints the numbers followed by a new line
 * @separator: string to be printed btwn numbers
 * @n: number of integers to be passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(num);
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
