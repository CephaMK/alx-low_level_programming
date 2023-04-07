/*
 * File - 1-print_binary.c
 */

#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int del;
	int bitshift;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (del = n, bitshift = 0; (del >>= 1) > 0; bitshift++)
		;

	for (; bitshift >= 0; bitshift--)
	{
		if ((n >> bitshift) & 1)
			printf("1");
		else
			printf("0");
	}
}
