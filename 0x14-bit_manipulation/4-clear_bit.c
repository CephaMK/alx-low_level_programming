/*
 * File - 4-clear_bit.c
 */

#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to bit
 * @index: index from 0 of value to set
 *
 * Return: -1 on error
 *	1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mk;
	unsigned int del;

	if (index > 64)
		return (-1);

	del = index;
	for (mk = 1; del > 0; mk *= 2, del--)
		;

	if ((*n >> index) & 1)
		*n -= mk;

	return (1);
}
