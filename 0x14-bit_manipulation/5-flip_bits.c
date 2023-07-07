/*
 * File - 5-flip_bits.c
 */

#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 *	need to flip to get from one number to another.
 * @n: num
 * @m: num to flip n to
 *
 * Return: number of bits you would need to flip to
 *	get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bit = 0;

	while (flip > 0)
	{
		bit += (flip & 1);
		flip >>= 1;
	}

	return (bit);
}
