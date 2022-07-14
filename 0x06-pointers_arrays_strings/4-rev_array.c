/*
 * File 4-rev_array.c
 */

#include "main.h"

/**
 * reverse_array - reverses the contents of an array of integers
 * @a: array
 * @n: contents of array
 *
 * Return: reversed arrey of integers
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n];
		a[n] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
