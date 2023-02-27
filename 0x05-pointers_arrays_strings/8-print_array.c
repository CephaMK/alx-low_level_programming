/*
 * File - 8-print_array.c
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - prints inputed number of elements in array
 * @a: array in question
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
