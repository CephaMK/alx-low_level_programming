/*
 * File - 4-add.c
 */

#include "main.h"

/**
 * main - add positive numbers
 * @argc: number of arguments
 * @argv: pointers ti arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, d, sum = 0;

	for (n = 1; n < argc; n++)
	{
		for (d = 0; argv[n][d]; d++)
		{
			if (argv[n][d] < '0' || argv[n][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum = sum + atoi(argv[n]);
	}

	printf("%d\n", sum);

	return (0);
}
