/*
 * File - 4-rev_array.c
 */

#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: contents of array
 */
void reverse_array(int *a, int n)
{
	int temp, mk;

	for (mk = n - 1; mk >= n / 2; mk--)
	{
		temp = a[n - 1 -mk];
		a[n - 1- mk] = a[mk];
		a[mk] = temp;
	}
}
