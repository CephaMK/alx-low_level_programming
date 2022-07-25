/*
 * File 3-mul.c
 */

#include "main.h"

/**
 * main - multiplies two arguments and returns result
 * @argc: arguments
 * @argv: pointer to argument
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
}
