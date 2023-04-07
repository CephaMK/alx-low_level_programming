/*
 * File - 2-get_bit.c
 */

#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: num to evaluate
 * @index: index from 0 for the bit to get
 *
 * Return: -1 0n error
 *	Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int del;

	if (index > 64)
		return (-1);

	del = n >> index;

	return (del & 1);
}
