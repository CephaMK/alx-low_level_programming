/*
 * File 0-positive_or_negative.c
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints whether the umber stored in variable n
 * is negative or positive.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
