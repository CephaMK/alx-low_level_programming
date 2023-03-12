/*
 * File - 1-args.c
 */

#include "main.h"

/**
 * main -  prints the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return (0)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
