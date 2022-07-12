/*
 * File 1-swap.c
 */

#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @: first integer
 * @b: second integer
 *
 * Return : nothing
 */
void swap_int(int *a, int *b);
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
