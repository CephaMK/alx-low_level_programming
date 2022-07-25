/*
 * File 2-args.c
 */

#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: pointers to arguments
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
