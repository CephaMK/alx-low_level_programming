/*
 * File - 3-set_bit.c
 */

#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: num to pass
 * @index: index from 0 of the bit to set
 *
 * Return: 1 on success
 *	-1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mk;

	if (index > 64)
		return (-1);

	for (mk = 1; index > 0; index--, mk = mk * 2)
		;
	*n += mk;

	return (1);
}
