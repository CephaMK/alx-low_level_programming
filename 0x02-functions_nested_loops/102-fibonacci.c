/*
 * file 102-fibonacci.c
 */

#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers, starting with 1 and 2,
 *	separated by a comma followed by a space.
 *
 * Return: Always 0
 */
int main(void)
{
	int t;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (t = 0; t < 50; t++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (t == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

