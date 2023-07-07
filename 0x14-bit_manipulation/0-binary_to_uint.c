/*
 * File - 0-binary_to_uint.c
 */

#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: converted num
 *	0 if string has one or more chars ot 0 or 1
 *	if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int mk = 0, bin = 1;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		mk += (b[length] - '0') * bin;
		bin = bin * 2;
	}

	return (mk);
}
