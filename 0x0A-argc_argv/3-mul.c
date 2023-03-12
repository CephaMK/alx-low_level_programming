/*
 * File 3-mul.c
 */

#include "main.h"

/**
 * main - multiplies two arguments and returns result
 * @argc: argument
 * @argv: pointer to argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mult);

	return (0);
}
